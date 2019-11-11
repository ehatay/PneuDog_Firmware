#include "Energia.h"
#include "Leg.h"

Pot p;

Leg::Leg()
{}

Leg::Leg(int joint1_min)
{    
    p.num = 1;
    p.value = 50.0;
    Serial.println("Leg initialized with joint1_min: ");
}

int Leg::getPotReading(int num)
{
    Serial.print("Getting pot reading:\t");
    Serial.print(p.num);
    Serial.print("\t");
    Serial.println(p.value);
    p.value++;
}
