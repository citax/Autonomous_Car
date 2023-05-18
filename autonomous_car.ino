
/*
  AHMET Citak 201803010 && Samet Aksit 201802031
                   Autonomous Car
              Control Theory Project
*/

#include <autonomous_car.cpp>

void setup()
{
    pinMode(Default_Led, OUTPUT);
    pinMode(IR_Pin_A, INPUT);
    pinMode(IR_Pin_D, INPUT);
    pinMode(trigPin1, OUTPUT);
    pinMode(echoPin1, INPUT);
    pinMode(trigPin2, OUTPUT);
    pinMode(echoPin2, INPUT);
    Serial.begin(115200);
    hello();
}

void loop()
{
    Distance_Sensor_1();
    Distance_Sensor_2();
    IR_Sensor();
}