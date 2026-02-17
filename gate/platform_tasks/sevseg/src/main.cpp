#include <Arduino.h>

int a = 2;
int b = 3;
int c = 4;
int d = 5;
int e = 6;
int f = 7;
int g = 8;

int Z = 9;   // input wire

void setup() {
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);

  pinMode(Z, INPUT_PULLUP);   // important
}

void displayDigit(int A, int B, int C, int D, int E, int F, int G) {
  digitalWrite(a, A);
  digitalWrite(b, B);
  digitalWrite(c, C);
  digitalWrite(d, D);
  digitalWrite(e, E);
  digitalWrite(f, F);
  digitalWrite(g, G);
}

void loop() {

  int z = digitalRead(Z);

  // F = Z bar
  if(z == HIGH)     
  {
    // display 1
    displayDigit(1,0,0,1,1,1,1);
  }
  else              
  {
    
    displayDigit(0,0,0,0,0,0,1);
  }
}
