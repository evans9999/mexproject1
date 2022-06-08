// Autor: Evangelos Effraimoglou
// File: main.cpp

#include "SerialCom.hpp"
#include "Pololu.hpp"
#include "ServoMotor.hpp"
#include "Roboter1.hpp" 
#include <iostream>
#include <string>


using namespace std;

int main()
{

	    
		const char* portName = "/dev/ttyACM0";  // Linux
		Pololu conn(portName, 9600);
		// Open connection to COM port.
		conn.openConnection();
		conn.getErrors();


		// Define the servos of the robot manipulator
		Roboter1 robot1 ;
		
	        robot1.move_servo_0(conn );
	        


	


		conn.closeConnection();

	return 0;
}

