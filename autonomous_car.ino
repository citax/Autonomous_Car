
/*
  AHMET Citak 201803010 && Samet Aksit 201802031
                   Autonomous Car
              Control Theory Project
*/
#include <autonomous_car.h>
long sure1, mesafe1, sure2, mesafe2;
int i, a, Barrier_Digital, Barrier_Analog;

void hello()
{
    Serial.println("Starting...");
    for (i = 0; i < 10; i++)
    {
        digitalWrite(13, HIGH);
        delay(100);
        digitalWrite(13, LOW);
        delay(100);
        a++;
        Serial.print("Blink: ");
        Serial.print(a);
    }
    Serial.println("Done!");
}

void Distance_Sensor_1()
{
    digitalWrite(trigPin1, LOW);
    delayMicroseconds(5);
    digitalWrite(trigPin1, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin1, LOW);
    sure1 = pulseIn(echoPin1, HIGH);
    mesafe1 = (sure1 / 2) * 0.0343;
    Serial.print("Sol");
    Serial.print(mesafe1);
    Serial.println(" cm uzaklikta");
    delay(50);
}

void Distance_Sensor_2()
{
    digitalWrite(trigPin2, LOW);
    delayMicroseconds(5);
    digitalWrite(trigPin2, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin2, LOW);
    sure2 = pulseIn(echoPin2, HIGH);
    mesafe2 = (sure2 / 2) * 0.0343;
    Serial.print("Sag");
    Serial.print(mesafe2);
    Serial.println(" cm uzaklikta");
    delay(50);
}

void IR_Sensor()
{
    Barrier_Digital = digitalRead(IR_Pin_D);
    Barrier_Analog = analogRead(IR_Pin_A);
}

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