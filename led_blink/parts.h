#ifndef PARTS_H
#define PARTS_H

class DC_Component
{
    public:
    int PINa;
    int PINb;

    DC_Component()
    {}

    DC_Component(int pos, int neg)
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

  LED()
  {
    DC_Component();
  }

  LED(int pos, int neg)
  {
    DC_Component(pos,neg);
  }

};

class Motor: public DC_Component
{
  public:
  Motor()
  {
    DC_Component();
  }

  Motor(int pos, int neg)
  {
    DC_Component(pos,neg);
  }

  void on(bool front=true)
  {
    if(front)
    {
      digitalWrite(PINa, HIGH);
      digitalWrite(PINb, LOW);
    }
    else
    {
      digitalWrite(PINa, LOW);
      digitalWrite(PINb, HIGH);
    }
  }

};

class sensor
{
  public:
  int PINd;

  sensor(int pin):PINd(pin) {}

  void initialize(int pin)
  {
    pinMode(pin, INPUT);
  }

  int read()
  {
    return digitalRead(this->PINd);
  }
};

class pipeline
{
  public:
  String input;

  void load(String a)
  {
    this->input = a;
  }

  String value()
  {
    return this->input;
  }

  void clear()
  {
    this->input = "z";
  }
};

#endif
