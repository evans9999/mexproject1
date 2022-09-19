// Autor: Evangelos Effraimoglou
// File: main.cpp

#include "SerialCom.hpp"
#include "Pololu.hpp"
#include "ServoMotor.hpp"
#include "Roboter1.hpp"
#include "Roboter2.hpp"
#include "Roboter3.hpp"
#include <iostream>
#include <string>


using namespace std;
#include<chrono>
#include<thread>
int robotic_option=1;
int main()
{


     

    

  	

			// Define the servos of  the robot manipulator
                      
		         Roboter2 robot2;
			 
			 
			
			 robot2.start_position(true);
			  robot2.to_the_left();
			  robot2.passageway(false);
			  robot2.to_the_right();
			  robot2.passageway(true);
			  robot2.start_position(true);
			 
                         	// Define the servos of the robot manipulator
  	Roboter1 robot1 ;
		
       robot1.start_position(true);
       
      robot1.passageway_mid(true);
       robot1.passageway_prepare(true);
  
    
       robot1.to_the_left();
       robot1.passageway_prepare(false);
       robot1.passageway_mid(false);
       robot1.to_the_right();
       robot1.passageway_mid(true);
       robot1.start_position(true);
       
			
				
    
  if(robotic_option=3)
    {
  //  Roboter3 

  		const char* portName="/dev/serial/by-id/usb-Pololu_Corporation_Pololu_Mini_Maestro_12-Channel_USB_Servo_Controller_00307944-if00";
			Pololu conn(portName,9600);
			conn.openConnection();
			conn.getErrors();
			// Define the servos of the robot manipulator

			Roboter3 robot3;
			robot3.move_servo_0(conn,0);
			conn.closeConnection(); 
        
    }			
	
}

