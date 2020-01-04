#ifndef M1
#define M1

class motor1_class{
  public:
    motor1_class();
    void SETUPM1();
    void FOROWRDM1(int M1_speed);
    void BACKWORDM1(int M1_speed);
    void STOPM1();
};

extern motor1_class MOTOR1_RC;

#endif
