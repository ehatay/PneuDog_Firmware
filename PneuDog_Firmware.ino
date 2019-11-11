#include "Dog.h"

DogConfig_t dog_config;
Dog dog;
RobotState_t state;

void setup() 
{
  Serial.begin(9600);
  dog_config.legCount = 4;
  dog = Dog(dog_config);
  state.connected = false;
}

void loop() 
{
  dog.SetState(state);
}
