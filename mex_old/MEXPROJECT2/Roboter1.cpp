// Autor: Evangelos Effraimoglou
// File :Roboter1

#include<iostream>
#include<string>
#include "ServoMotor.hpp"
#include "SerialCom.hpp"
#include "Pololu.hpp"
#include "Roboter1.hpp"
#include "global.hpp"
#include <unistd.h> 
#include<chrono>
#include<thread>



 struct port  port2 ;
 struct mess mess2;
 
/* **********************************************************
   *********************SERVO0*******************************
   *********************************************************** */
   
 
   
void Roboter1::  move_servo_0( unsigned short position) {
    
         port2.portName = "/dev/serial/by-id/usb-Pololu_Corporation_Pololu_Mini_Maestro_12-Channel_USB_Servo_Controller_00308051-if00";  // Linux
  		Pololu conn(port2.portName, 9600);
		// Open connection to COM port.
  		conn.openConnection();
  		conn.getErrors();

     
	
	try{
                  
           ServoMotor Servo0(0,6016,3950,&conn);
           
            	Servo0.setSpeed(70);   
       
	   Servo0.setMinMaxDegree(-90,90);
	   
              
            port2.deg=Servo0.mapPosValue2DegValue(position);
                
            Servo0.setPositionInDeg(port2.deg);
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
  
void Roboter1::  move_servo_1 (  unsigned short position   )
{   port2.portName = "/dev/serial/by-id/usb-Pololu_Corporation_Pololu_Mini_Maestro_12-Channel_USB_Servo_Controller_00308051-if00";  // Linux
  		Pololu conn(port2.portName, 9600);
		// Open connection to COM port.
  		conn.openConnection();
  		conn.getErrors();

      

	try
  	{

    		ServoMotor Servo1(1,6016,3900,&conn);
    		cout << "max. pos.:" << Servo1.getMaxPosInAbs()<<endl;
    		cout << "min. pos.: " << Servo1.getMinPosInAbs() <<endl;
    		cout << "get current pos.:" <<Servo1.getPositionInAbs() << endl;
                Servo1.setSpeed(70);
             
    		Servo1.setMinMaxDegree(-90,90);
    	   port2.deg=Servo1.mapPosValue2DegValue(position);
    	  port2.deg=	Servo1.setPositionInDeg(port2.deg);
    
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
void Roboter1::  move_servo_2( unsigned short position  ){
	   
        port2.portName = "/dev/serial/by-id/usb-Pololu_Corporation_Pololu_Mini_Maestro_12-Channel_USB_Servo_Controller_00308051-if00";  // Linux
  		Pololu conn(port2.portName, 9600);
		// Open connection to COM port.
  		conn.openConnection();
  		conn.getErrors();

	try
	{

    		ServoMotor Servo2(2,5983,3935,&conn);
    		cout << "max. pos.:" << Servo2.getMaxPosInAbs()<<endl;
    		cout << "min. pos.: " << Servo2.getMinPosInAbs() <<endl;
    		cout << "get current pos.:" <<Servo2.getPositionInAbs() << endl;
                Servo2.setSpeed(70);
                Servo2.setAcceleration(50);
    		Servo2.setMinMaxDegree(-90,90);
    		
    		port2.deg=Servo2.mapPosValue2DegValue(position);
    
             port2.deg= Servo2.setPositionInDeg(port2.deg);
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
void Roboter1::  move_servo_3(unsigned short position ){
	
	  port2.portName = "/dev/serial/by-id/usb-Pololu_Corporation_Pololu_Mini_Maestro_12-Channel_USB_Servo_Controller_00308051-if00";  // Linux
  		Pololu conn(port2.portName, 9600);
		// Open connection to COM port.
  		conn.openConnection();
  		conn.getErrors();

	try
	{

    		ServoMotor Servo3(3,6720,2216,&conn);
    		cout << "max. pos.:" << Servo3.getMaxPosInAbs()<<endl;
    		cout << "min. pos.: " << Servo3.getMinPosInAbs() <<endl;
    		cout << "get current pos.:" <<Servo3.getPositionInAbs() << endl;
		
		Servo3.setSpeed(60);
		
		
		Servo3.setMinMaxDegree(-90,90);
		
		 port2.deg= Servo3.mapPosValue2DegValue(position);
		
		 Servo3.setPositionInDeg(port2.deg);
		 conn.closeConnection();   
		
    	 } //try
	
      
  	catch(IException *e)
    	{
		string msg("Der Servo 3 hat nicht die entsprechende Position bekommen");
		msg += e->getMsg();
	
	} //catch
	
               return ;

};


	void Roboter1 :: set_Move( unsigned short newSpeed,ServoMotor servo)
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
 

  void Roboter1:: to_the_left()
  
{
 
mess2.abweichung_0=34; // positiv
mess2.abweichung_1=75; //negativ
mess2.abweichung_2=25; //positiv
mess2.abweichung_3=4;  // positiv


mess2.position[0]=8000+mess2.abweichung_0;  // Position 0
mess2.position[1]=4715-mess2.abweichung_1;  // Position 1
mess2.position[2]=7319+mess2.abweichung_2;  // Position 2
mess2.position[3]=4504+mess2.abweichung_3;  // Position 3


move_servo_0(mess2.position[0]);

this_thread::sleep_for(chrono::milliseconds(1000));

 move_servo_1(mess2.position[1]);

this_thread::sleep_for(chrono::milliseconds(1000));

 move_servo_2( mess2.position[2]);
 

this_thread::sleep_for(chrono::milliseconds(1000));
  move_servo_3( mess2.position[3]);
  this_thread::sleep_for(chrono::milliseconds(1000));

   
 return ; 


};

void Roboter1:: to_the_right()
{
 
 mess2.abweichung_0=36; //negativ
 mess2.abweichung_1=3;   //negativ
 mess2.abweichung_2=31;   // positiv
 
 
mess2.position[0]=4877-mess2.abweichung_0;  // Position 0
mess2.position[1]=2991-mess2.abweichung_1;  // Position 1
mess2.position[2]=7894+ mess2.abweichung_2;  // Position 2
mess2.position[3]=4900-mess2.abweichung_3;  // Position 3


move_servo_0(mess2.position[0]);



 move_servo_1(mess2.position[1]);



 move_servo_2( mess2.position[2]);
 

this_thread::sleep_for(chrono::milliseconds(3000));
  move_servo_3( mess2.position[3]);
  
  this_thread::sleep_for(chrono::milliseconds(1000));

   
 return ; 

}


void Roboter1:: start_position( bool wahl)
{
 

mess2.position[0]=9984 -mess2.abweichung_0;  // Position 0
mess2.position[1]=6178+mess2.abweichung_1;  // Position 1
mess2.position[2]=2535+mess2.abweichung_2;  // Position 2

if (wahl==true)
{
mess2.position[3]=6720-mess2.abweichung_3;  // Position 3
}

else 
{
  mess2.position[3]=4900-mess2.abweichung_3;
}


 move_servo_3( mess2.position[3]);
 this_thread::sleep_for(chrono::milliseconds(1000));
 
 move_servo_2( mess2.position[2]);
 
 this_thread::sleep_for(chrono::milliseconds(1000));
move_servo_0(mess2.position[0]);

this_thread::sleep_for(chrono::milliseconds(1000));

 move_servo_1(mess2.position[1]);
 
 



 


 

   
 return ; 

}




void Roboter1:: passageway_mid( bool choice)
{
 

mess2.position[0]=6016 -mess2.abweichung_0;  // Position 0
mess2.position[1]=6178+mess2.abweichung_1;  // Position 1
mess2.position[2]=2048+mess2.abweichung_2;  // Position 2

if (choice==true)
{
mess2.position[3]=6720-mess2.abweichung_3;  // Position 3
}

else 
{
  mess2.position[3]=4900-mess2.abweichung_3;
}


 move_servo_3( mess2.position[3]);
 this_thread::sleep_for(chrono::milliseconds(1000));
 
 move_servo_2( mess2.position[2]);
 
 this_thread::sleep_for(chrono::milliseconds(1000));
move_servo_0(mess2.position[0]);

this_thread::sleep_for(chrono::milliseconds(1000));

 move_servo_1(mess2.position[1]);



 

   
 return ; 

}


void Roboter1:: passageway_prepare( bool choice)
{
 
mess2.abweichung_1= 40; //postiv
mess2.abweichung_2=15 ; // positiv
mess2.abweichung_3=3 ; //positiv  

mess2.position[0]=6016-mess2.abweichung_0;  // Position 0
mess2.position[1]=6178+mess2.abweichung_1;  // Position 1
mess2.position[2]=6828+mess2.abweichung_2;  // Position 2

if (choice==true)
{
mess2.position[3]=6495-mess2.abweichung_3;  // Position 3
}

else 
{
  mess2.position[3]=4900-mess2.abweichung_3;
}


 move_servo_3( mess2.position[3]);

 
 move_servo_2( mess2.position[2]);
 

move_servo_0(mess2.position[0]);



 move_servo_1(mess2.position[1]);



 

   
 return ; 

}









