#ifndef ROBOTER3_HPP_INCLUDED
#define ROBOTER3_HPP_INCLUDED



class Roboter3{
public:

  void move_servo_0(Pololu conn, bool Uhrzeigersinn );

  void move_servo_1(Pololu conn, bool Uhrzeigersinn);
  
  void move_servo_2(Pololu conn, bool Uhrzeigersinn);
  
  void move_servo_3(Pololu conn, bool Uhrzeigersinn);
  
  void set_move( unsigned short new Acceleration,unsigned short newSpeed, Pololu Conn);
  

};

#endif /* SERVOMOTOR_HPP_ */










