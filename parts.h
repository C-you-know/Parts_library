#ifndef PARTS_H
#define PARTS_H

class LED
{
    public:
    int PINa;
    int PINb;

    LED(int a, int b)
    {
        PINa = a;
        PINb = b;
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


#endif
