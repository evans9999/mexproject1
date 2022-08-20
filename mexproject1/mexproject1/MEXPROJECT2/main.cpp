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

int main()
{
  // while(1)
 //   {
  	              	/* Roboter1  */     
  //	const char* portName = "/dev/ttyACM0";  // Linux
  //		Pololu conn(portName, 9600);
		// Open connection to COM port.
  //		conn.openConnection();
  //		conn.getErrors();


		// Define the servos of the robot manipulator
  //	Roboter1 robot1 ;
		
  //        robot1.move_servo_0(conn,true);
  //        	conn.closeConnection(); 
      
               //  Frage nach der Position 
	
	       // Position korrigieren 
	       // bewege servo0
	       // bewege servo1
	       // bewege servo2
	       // bewege servo3	
               // bewege roboter zurück 
	       // abfrage ob position passt 

					       	// Roboter2  

  	const char* portName="/dev/serial/by-id/usb-Pololu_Corporation_Pololu_Mini_Maestro_12-Channel_USB_Servo_Controller_00296033-if00";
			Pololu conn(portName,9600);
			// Open connection to COM port
			conn.openConnection();
			conn.getErrors();

			// Define the servos of  the robot manipulator

		         Roboter2 robot2;
			 robot2.move_servo_0(conn,true);
				conn.closeConnection();   
			


	    	// Roboter3 

  /*		const char* portName="/dev/serial/by-id/usb-Pololu_Corporation_Pololu_Mini_Maestro_12-Channel_USB_Servo_Controller_00307944-if00";
			Pololu conn(portName,9600);
			conn.openConnection();
			conn.getErrors();
			// Define the servos of the robot manipulator

			Roboter3 robot3;
			robot3.move_servo_0(conn,true);
			conn.closeConnection(); */
        
			//    }
	return 0;
}

