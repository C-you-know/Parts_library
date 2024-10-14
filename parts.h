#ifndef PARTS_H
#define PARTS_H

class DC_Component
{
    public:
    int PINa;
    int PINb;

    class DC_Component(int pos, int neg)
    {
        PINa = pos;
        PINb = neg;
    }

    void initialize()
    {
        pinMode(PINa,OUTPUT);
        pinMode(PINb,OUTPUT);
        digitalWrite(PINa, LOW);
        digitalWrite(PINb, LOW);
    }

    void off()
    {
        digitalWrite(PINa, LOW);
        digitalWrite(PINb, LOW);
    }

    void on()
    {
        digitalWrite(PINa, HIGH);
        digitalWrite(PINb, LOW);
    } 
};

class LED: public DC_Component
{
  public:
  LED(int pos, int neg)
  {
    DC_Component(pos,neg);
  }

};

class Motor: public DC_Component
{
  public:
  Motor(int pos, int neg)
  {
    DC_Component(pos,neg);
  }

};


#endif
