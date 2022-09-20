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
int robotic_option=3;
int main()
{


while(true)
{
Roboter2 robot2;
Roboter1 robot1 ;
 Roboter3 robot3 ;    
robot2.start_position(true);
robot1.start_position(true);
robot3.start_position(true);  	

			// Define the servos of  the robot manipulator
                      
		       
			 
		 
			
			
			  robot2.to_the_left();
			  robot2.passageway(false);
			  robot2.to_the_right();
			  robot2.passageway(true);
			  robot2.start_position(true);   
			 
                         	// Define the servos of the robot manipulator
  
		
  
      
     robot1.passageway_mid(true);
       robot1.passageway_prepare(true);
  
    
       robot1.to_the_left();
       robot1.passageway_prepare(false);
       robot1.passageway_mid(false);
       robot1.to_the_right();
      
       robot1.start_position(true);
       
							
    
 
   
  //  Roboter3 

      
    
    
      robot3.passageway_to_the_left(true);
      robot3.to_the_left();
      robot3.passageway_to_the_left(false);
      robot3.passageway_to_the_right(false);
       robot3.to_the_right();
      robot3.start_position(true);  
  	
      
    	
    
    }	
	
}

