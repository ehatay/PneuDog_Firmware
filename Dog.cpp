#include "Dog.h"

Leg* legs;

Dog::Dog()
{
  
}

Dog::Dog(DogConfig_t conf)
{
  Serial.print("Dog initialized with legCount:\t");
  Serial.println(conf.legCount);  
  legs = new Leg[conf.legCount];
  for(int i = 0; i < conf.legCount; i++)
  {
    legs[i] = Leg(i);
  }
}

RobotState_t Dog::GetState()
{
  RobotState_t state;
  state.connected = true;
  return state;
}

void Dog::SetState(RobotState_t)
{
  Serial.print("SetState requested but not implemented");
}
