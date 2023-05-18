
#include <autonomous_car.h>

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
