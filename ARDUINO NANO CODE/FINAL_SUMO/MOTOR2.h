#ifndef M2
#define M2

class motor2_class {
  public:
    motor2_class();
    void SETUPM2();
    void FOROWRDM2(int M2_speed);
    void BACKWORDM2(int M2_speed);
    void STOPM2();
};

extern motor2_class MOTOR2_RC;

#endif
