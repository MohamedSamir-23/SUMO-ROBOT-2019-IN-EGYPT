#ifndef CH1_M1
#define CH1_M1

class CH1_MOTOR1{
  public:
    CH1_MOTOR1();
    void SETUPCH1();
    int CH1_RC_signal();
};

extern CH1_MOTOR1 CH1_RC_MOTOR1;

#endif
