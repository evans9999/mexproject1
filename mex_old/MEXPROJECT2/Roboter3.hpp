#ifndef ROBOTER3_HPP_INCLUDED
#define ROBOTER3_HPP_INCLUDED



class Roboter3{
public:

  void move_servo_0(Pololu conn, int degree );

  void move_servo_1(Pololu conn, int degree);
  
  void move_servo_2(Pololu conn, int degree);
  
  void move_servo_3(Pololu conn, int degree);
  
  void set_Move(int id  , unsigned short newAcceleration,unsigned short newSpeed, Pololu Conn);
  

};

#endif /* SERVOMOTOR_HPP_ */










