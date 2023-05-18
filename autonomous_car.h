
// LIBRARIES //

#include <Arduino.h>

// SENSOR DEFINES //

#define trigPin1 8
#define echoPin1 9
#define trigPin2 10
#define echoPin2 11

#define IR_Pin_D 7  
#define IR_Pin_A 6

// OUTPUT DEFINES //

#define Default_Led 13

// VARIABLES //

long sure1, mesafe1;
long sure2, mesafe2;

int i, a;
int Barrier_Digital, Barrier_Analog;