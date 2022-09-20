#ifndef ROBOTER1_HPP_INCLUDED
#define ROBOTER1_HPP_INCLUDED



class Roboter1{
public:
  void move_servo_0( unsigned short position );

  void move_servo_1(unsigned short position);
  
  void move_servo_2( unsigned short position);
  
  void move_servo_3( unsigned short position);
  void  passageway_prepare( bool choice) ;
  
  
 
  
  
  void set_Move( unsigned short newSpeed, ServoMotor Servo);
  
   void to_the_left();
   void to_the_right();
   
   void start_position(bool wahl);
   void passageway_mid( bool choice);
   
};

#endif /* SERVOMOTOR_HPP_ */

