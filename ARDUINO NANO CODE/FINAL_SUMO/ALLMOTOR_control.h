#ifndef ALLMOTOR_e
#define ALLMOTOR_e

class ALLMOTOR_class{
  public:
    ALLMOTOR_class();
    void SETUPALLMOTOR();
    void ch1Forword_ch2Stop(int M1_speed,int M2_speed);
    void ch1Backword_ch2Stop(int M1_speed,int M2_speed);
    void ch1Stop_ch2Stop();
    void ch1Stop_ch2Right(int M1_speed,int M2_speed);
    void ch1Stop_ch2Left(int M1_speed,int M2_speed);
    void ch1Forword_ch2Right(int M1_speed,int M2_speed);
    void ch1Backword_ch2Right(int M1_speed,int M2_speed);
    void ch1Forword_ch2Left(int M1_speed,int M2_speed);
    void ch1Backword_ch2Left(int M1_speed,int M2_speed);
      
};

extern ALLMOTOR_class ALLMOTOR_JOY;

#endif
