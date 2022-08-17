#ifndef ROBOTER1_HPP_INCLUDED
#define ROBOTER1_HPP_INCLUDED



class Roboter1{
public:

  void move_servo_0(Pololu conn, bool Uhrzeigersinn );

  void move_servo_1(Pololu conn, bool Uhrzeigersinn);
  
  void move_servo_2(Pololu conn, bool Uhrzeigersinn);
  
  void move_servo_3(Pololu conn,bool Uhrzeigersinn);
  

};

#endif /* SERVOMOTOR_HPP_ */

