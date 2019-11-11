#ifndef DOG_H
#define DOG_H
#include "Energia.h"
#include "Leg.h"

typedef struct RobotState
{
  bool connected = false;
}RobotState_t;

typedef struct DogConfig
{
  int legCount = 4;
}DogConfig_t;

class Dog
{
  public:
    Dog();
    Dog(DogConfig_t);
    void SetState(RobotState_t state);
    RobotState_t GetState();
  private:
    RobotState_t state;
};

#endif
