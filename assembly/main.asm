.include "m328pdef.inc"
.def t = r16

.org 0
rjmp start

start:
    ldi t,0b11111100
    out DDRD,t
    ldi t,0b00000001
    out DDRB,t

loop:
    ldi t,0b11111011
    out PORTD,t
    rcall delay

    ldi t,0b11110111
    out PORTD,t
    rcall delay

    ldi t,0b11101111
    out PORTD,t
    rcall delay

    ldi t,0b11011111
    out PORTD,t
    rcall delay

    ldi t,0b10111111
    out PORTD,t
    rcall delay

    ldi t,0b01111111
    out PORTD,t
    rcall delay

    ldi t,0b11111111
    out PORTD,t
    ldi t,0b00000000
    out PORTB,t
    rcall delay

    ldi t,0b00000001
    out PORTB,t

    rjmp loop

delay:
    ldi r18,200
L1: ldi r19,255
L2: dec r19
    brne L2
    dec r18
    brne L1
    ret
