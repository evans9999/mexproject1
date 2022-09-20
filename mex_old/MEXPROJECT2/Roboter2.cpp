// Autor: Evangelos Effraimoglou
// File :Roboter2

#include<iostream>
#include<string>
#include "ServoMotor.hpp"
#include "SerialCom.hpp"
#include "Pololu.hpp"
#include "Roboter2.hpp"
#include"global.hpp"
#include <unistd.h> 
#include<chrono>
#include<thread>



/* **********************************************************
   *********************SERVO0*******************************
   *********************************************************** */
   
 struct port  port1 ;
 struct mess mess1 ;
 
   
void Roboter2::  move_servo_0( unsigned short position) {
    
          port1.portName = "/dev/serial/by-id/usb-Pololu_Corporation_Pololu_Mini_Maestro_12-Channel_USB_Servo_Controller_00296033-if00";  // Linux
  		Pololu conn(port1.portName, 9600);
		// Open connection to COM port.
  		conn.openConnection();
  		conn.getErrors();

     
	
	try{
                  
           ServoMotor Servo0(0,5651,5060,&conn);
           
            	Servo0.setSpeed(40);   
       
	   Servo0.setMinMaxDegree(-90,90);
	   
              
            port1.deg=Servo0.mapPosValue2DegValue(position);
                
            Servo0.setPositionInDeg(port1.deg);
            conn.closeConnection();   
 
    
  
       


    	/*	cout << "max. pos.:" << Servo0.getMaxPosInAbs()<<endl;
    		cout << "min. pos.: " << Servo0.getMinPosInAbs() <<endl;
    		cout << "get current pos.:" <<Servo0.getPositionInAbs() << endl;*/
	  }//try

  	catch(IException *e)
    	{
		string msg("Der  Servo 0 des 'ersten' Roboters hat nicht die entsprechende Position bekommen");
		msg += e->getMsg();

  

    	} //catch
 
      
                 return ;
  

  };


	/* *********************************************
	   ***************SERVO1************************
	  ********************************************** */
  
void Roboter2::  move_servo_1 (  unsigned short position   )
{   port1.portName = "/dev/serial/by-id/usb-Pololu_Corporation_Pololu_Mini_Maestro_12-Channel_USB_Servo_Controller_00296033-if00";  // Linux
  		Pololu conn(port1.portName, 9600);
		// Open connection to COM port.
  		conn.openConnection();
  		conn.getErrors();

      

	try
  	{

    		ServoMotor Servo1(1,5451,4678,&conn);
    		cout << "max. pos.:" << Servo1.getMaxPosInAbs()<<endl;
    		cout << "min. pos.: " << Servo1.getMinPosInAbs() <<endl;
    		cout << "get current pos.:" <<Servo1.getPositionInAbs() << endl;
                Servo1.setSpeed(70);
                Servo1.setAcceleration(50);
                
    		Servo1.setMinMaxDegree(-90,90);
    	   port1.deg=Servo1.mapPosValue2DegValue(position);
    	  port1.deg=	Servo1.setPositionInDeg(port1.deg);
    
    conn.closeConnection();   
                  
                     
 
    
   	}//try

  	catch(IException *e)
   	{
		string msg("Der  Servo 1 des ersten Roboters  hat nicht die entsprechende Position bekommen");
		msg += e->getMsg();

	 
   	} //catch
 

  		return;
};  // function


		//************************************************************
		// *******************************SERVO2**********************
		//************************************************************
void Roboter2::  move_servo_2( unsigned short position  ){
	   
        port1.portName = "/dev/serial/by-id/usb-Pololu_Corporation_Pololu_Mini_Maestro_12-Channel_USB_Servo_Controller_00296033-if00";  // Linux
  		Pololu conn(port1.portName, 9600);
		// Open connection to COM port.
  		conn.openConnection();
  		conn.getErrors();

	try
	{

    		ServoMotor Servo2(2,5462,4038,&conn);
    		cout << "max. pos.:" << Servo2.getMaxPosInAbs()<<endl;
    		cout << "min. pos.: " << Servo2.getMinPosInAbs() <<endl;
    		cout << "get current pos.:" <<Servo2.getPositionInAbs() << endl;
                Servo2.setSpeed(70);
                Servo2.setAcceleration(50);
    		Servo2.setMinMaxDegree(-90,90);
    		
    		port1.deg=Servo2.mapPosValue2DegValue(position);
    
             port1.deg= Servo2.setPositionInDeg(port1.deg);
  conn.closeConnection();   
                  
    
  	}//try
       
 	catch(IException *e)
   	{
		string msg("Der  Servo 2 des ersten Roboters hat nicht die entsprechende Position bekommen");
		msg += e->getMsg();
		
  	 }//catch
  
 
  	return ; 

  };

		/*  ***************************************
	            ************SERVO3*********************
	            *************************************** */
void Roboter2::  move_servo_3(unsigned short position ){
	
	  port1.portName = "/dev/serial/by-id/usb-Pololu_Corporation_Pololu_Mini_Maestro_12-Channel_USB_Servo_Controller_00296033-if00";  // Linux
  		Pololu conn(port1.portName, 9600);
		// Open connection to COM port.
  		conn.openConnection();
  		conn.getErrors();

	try
	{

    		ServoMotor Servo3(3,5285,2346,&conn);
    		cout << "max. pos.:" << Servo3.getMaxPosInAbs()<<endl;
    		cout << "min. pos.: " << Servo3.getMinPosInAbs() <<endl;
    		cout << "get current pos.:" <<Servo3.getPositionInAbs() << endl;
		
		Servo3.setSpeed(30);
		Servo3.setAcceleration(50);
		
		Servo3.setMinMaxDegree(-90,90);
		
		 port1.deg= Servo3.mapPosValue2DegValue(position);
		
		 Servo3.setPositionInDeg(port1.deg);
		 conn.closeConnection();   
		
    	 } //try
	
      
  	catch(IException *e)
    	{
		string msg("Der Servo 3 hat nicht die entsprechende Position bekommen");
		msg += e->getMsg();
	
	} //catch
	
               return ;

};


	void Roboter2 :: set_Move( unsigned short newSpeed,ServoMotor servo)
{         
 	try
   	{      
	      
	 
	 
  		

  		
  		servo.setSpeed(newSpeed);
  		return ;
  	
   	}
 
 	catch(IException *e)
   	{	string msg(" Die Einstellung der Geschwindigkeit  ist nicht möglich");
		msg += e->getMsg();
   	}
 		


 };
 

  void Roboter2:: to_the_left()
  
{
 
mess1.abweichung_0=53;
mess1.abweichung_1=13;
mess1.abweichung_2=30;
mess1.abweichung_3=24;

mess1.position[0]=5373-mess1.abweichung_0;  // Position 0
mess1.position[1]=8894+mess1.abweichung_1;  // Position 1
mess1.position[2]=8224-mess1.abweichung_2;  // Position 2
mess1.position[3]=3441-mess1.abweichung_3;  // Position 3


move_servo_0(mess1.position[0]);

this_thread::sleep_for(chrono::milliseconds(1000));

 move_servo_1(mess1.position[1]);

this_thread::sleep_for(chrono::milliseconds(1000));

 move_servo_2( mess1.position[2]);
 

this_thread::sleep_for(chrono::milliseconds(3000));
  move_servo_3( mess1.position[3]);
  this_thread::sleep_for(chrono::milliseconds(1000));

   
 return ; 


};

void Roboter2:: to_the_right()
{
 
 mess1.abweichung_0=0;
  mess1.abweichung_1=0;
  mess1.abweichung_2=37;
  mess1.abweichung_3=24;
mess1.position[0]=3795-mess1.abweichung_0;  // Position 0
mess1.position[1]=2956-mess1.abweichung_1;  // Position 1
mess1.position[2]=8060+ mess1.abweichung_2;  // Position 2
mess1.position[3]=3441-mess1.abweichung_3;  // Position 3


move_servo_0(mess1.position[0]);



 move_servo_1(mess1.position[1]);

this_thread::sleep_for(chrono::milliseconds(1000));

 move_servo_2( mess1.position[2]);
 

this_thread::sleep_for(chrono::milliseconds(1000));
  move_servo_3( mess1.position[3]);
  


   
 return ; 

}


void Roboter2:: start_position( bool wahl)
{
 
mess1.abweichung_0=53;
mess1.abweichung_1=13;
mess1.abweichung_2=26;
mess1.abweichung_3=24;

mess1.position[0]=9235 -mess1.abweichung_0;  // Position 0
mess1.position[1]=8233+mess1.abweichung_1;  // Position 1
mess1.position[2]=1736+mess1.abweichung_2;  // Position 2

if (wahl==true)
{
mess1.position[3]=4300-mess1.abweichung_3;  // Position 3
}

else 
{
  mess1.position[3]=3441-mess1.abweichung_3;
}


 move_servo_3( mess1.position[3]);
 this_thread::sleep_for(chrono::milliseconds(1000));
 
 move_servo_2( mess1.position[2]);
 
 this_thread::sleep_for(chrono::milliseconds(1000));
move_servo_0(mess1.position[0]);



 move_servo_1(mess1.position[1]);


 


 

   
 return ; 

}



void Roboter2:: passageway( bool choice)
{
 
 mess1.abweichung_0=53;
 mess1.abweichung_1=13;
 mess1.abweichung_2=26;
 mess1.abweichung_3=24;

mess1.position[0]=5198 -mess1.abweichung_0;  // Position 0
mess1.position[1]=4910+mess1.abweichung_1;  // Position 1
mess1.position[2]=1736+mess1.abweichung_2;  // Position 2

if (choice==true)
{
mess1.position[3]=4300-mess1.abweichung_3;  // Position 3
}

else 
{
  mess1.position[3]=3600-mess1.abweichung_3;
}

this_thread::sleep_for(chrono::milliseconds(3000));
 
 move_servo_3( mess1.position[3]);
 this_thread::sleep_for(chrono::milliseconds(1000));
 
 move_servo_2( mess1.position[2]);
 
 this_thread::sleep_for(chrono::milliseconds(1000));
move_servo_0(mess1.position[0]);



 move_servo_1(mess1.position[1]);



 

   
 return ; 

}









   
