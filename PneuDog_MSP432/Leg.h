#ifndef Leg_h
#define Leg_h

typedef struct Pot_Readings
{
  int num;
  float value;
} Pot;

class Leg
{
    public:
        Leg();
        Leg(int joint1_min);
        int getPotReading(int num);
};

#endif
