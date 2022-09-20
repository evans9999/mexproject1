// Autor: Evangelos Effraimoglou
// File :Roboter3

#include<iostream>
#include<string>
#include "ServoMotor.hpp"
#include "SerialCom.hpp"
#include "Pololu.hpp"
#include "Roboter3.hpp"
#include"global.hpp"
#include <unistd.h> 
#include<chrono>
#include<thread>



/* **********************************************************
   *********************SERVO0*******************************
   *********************************************************** */
   
 struct port  port3 ;
 struct mess mess3 ;
 
   
void Roboter3::  move_servo_0( unsigned short position) {
    
          port3.portName = "/dev/serial/by-id/usb-Pololu_Corporation_Pololu_Mini_Maestro_12-Channel_USB_Servo_Controller_00307944-if00";  // Linux
  		Pololu conn(port3.portName, 9600);
		// Open connection to COM port.
  		conn.openConnection();
  		conn.getErrors();

     
	
	try{
                  
           ServoMotor Servo0(0,6210,3586,&conn);
           
            	Servo0.setSpeed(40);   
       
	   Servo0.setMinMaxDegree(-90,90);
	   
              
            port3.deg=Servo0.mapPosValue2DegValue(position);
                
            Servo0.setPositionInDeg(port3.deg);
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
  
void Roboter3::  move_servo_1 (  unsigned short position   )
{   port3.portName = "/dev/serial/by-id/usb-Pololu_Corporation_Pololu_Mini_Maestro_12-Channel_USB_Servo_Controller_00307944-if00";  // Linux
  		Pololu conn(port3.portName, 9600);
		// Open connection to COM port.
  		conn.openConnection();
  		conn.getErrors();

      

	try
  	{

    		ServoMotor Servo1(1,6430,3340,&conn);
    		cout << "max. pos.:" << Servo1.getMaxPosInAbs()<<endl;
    		cout << "min. pos.: " << Servo1.getMinPosInAbs() <<endl;
    		cout << "get current pos.:" <<Servo1.getPositionInAbs() << endl;
                Servo1.setSpeed(70);
                Servo1.setAcceleration(50);
                
    		Servo1.setMinMaxDegree(-90,90);
    	   port3.deg=Servo1.mapPosValue2DegValue(position);
    	  port3.deg=	Servo1.setPositionInDeg(port3.deg);
    
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
void Roboter3::  move_servo_2( unsigned short position  ){
	   
        port3.portName = "/dev/serial/by-id/usb-Pololu_Corporation_Pololu_Mini_Maestro_12-Channel_USB_Servo_Controller_00307944-if00";  // Linux
  		Pololu conn(port3.portName, 9600);
		// Open connection to COM port.
  		conn.openConnection();
  		conn.getErrors();

	try
	{

    		ServoMotor Servo2(2,6112,3649,&conn);
    		cout << "max. pos.:" << Servo2.getMaxPosInAbs()<<endl;
    		cout << "min. pos.: " << Servo2.getMinPosInAbs() <<endl;
    		cout << "get current pos.:" <<Servo2.getPositionInAbs() << endl;
                Servo2.setSpeed(70);
                Servo2.setAcceleration(50);
    		Servo2.setMinMaxDegree(-90,90);
    		
    		port3.deg=Servo2.mapPosValue2DegValue(position);
    
                Servo2.setPositionInDeg(port3.deg);
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
void Roboter3::  move_servo_3(unsigned short position ){
	
	  port3.portName = "/dev/serial/by-id/usb-Pololu_Corporation_Pololu_Mini_Maestro_12-Channel_USB_Servo_Controller_00307944-if00";  // Linux
  		Pololu conn(port3.portName, 9600);
		// Open connection to COM port.
  		conn.openConnection();
  		conn.getErrors();

	try
	{

    		ServoMotor Servo3(3,3384,1000,&conn);
    		cout << "max. pos.:" << Servo3.getMaxPosInAbs()<<endl;
    		cout << "min. pos.: " << Servo3.getMinPosInAbs() <<endl;
    		cout << "get current pos.:" <<Servo3.getPositionInAbs() << endl;
		
		Servo3.setSpeed(20);
		
		
		Servo3.setMinMaxDegree(-90,90);
		
		 port3.deg= Servo3.mapPosValue2DegValue(position);
		
		 Servo3.setPositionInDeg(port3.deg);
		 conn.closeConnection();   
		
    	 } //try
	
      
  	catch(IException *e)
    	{
		string msg("Der Servo 3 hat nicht die entsprechende Position bekommen");
		msg += e->getMsg();
	
	} //catch
	
               return ;

};


	void Roboter3 :: set_Move( unsigned short newSpeed,ServoMotor servo)
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
 

  void Roboter3:: to_the_left()
  
{
 
mess3.abweichung_0=7;// pos
mess3.abweichung_1=0;// neg
mess3.abweichung_2=0;//neg
mess3.abweichung_3=0;

mess3.position[0]=8966+mess3.abweichung_0;  // Position 0
mess3.position[1]=5181-mess3.abweichung_1;  // Position 1
mess3.position[2]=6926-mess3.abweichung_2;  // Position 2
mess3.position[3]=2786-mess3.abweichung_3;  // Position 3


move_servo_0(mess3.position[0]);

this_thread::sleep_for(chrono::milliseconds(1000));

 move_servo_1(mess3.position[1]);

this_thread::sleep_for(chrono::milliseconds(1000));

 move_servo_2( mess3.position[2]);
 

this_thread::sleep_for(chrono::milliseconds(1000));
  move_servo_3( mess3.position[3]);
  this_thread::sleep_for(chrono::milliseconds(1000));

   
 return ; 


};

void Roboter3:: to_the_right()
{
 
 mess3.abweichung_0=5; //neg
  mess3.abweichung_1=17; //neg
  mess3.abweichung_2=28;  // pos
  mess3.abweichung_3=0;
mess3.position[0]=5558-mess3.abweichung_0;  // Position 0
mess3.position[1]=3402-mess3.abweichung_1;  // Position 1
mess3.position[2]=8645+ mess3.abweichung_2;  // Position 2
mess3.position[3]=2786-mess3.abweichung_3;  // Position 3



move_servo_1(mess3.position[1]);

this_thread::sleep_for(chrono::milliseconds(1000));
move_servo_0(mess3.position[0]);
this_thread::sleep_for(chrono::milliseconds(1000));

move_servo_2( mess3.position[2]);


this_thread::sleep_for(chrono::milliseconds(1000));


 

this_thread::sleep_for(chrono::milliseconds(1000));
  move_servo_3( mess3.position[3]);
  


   
 return ; 

}


void Roboter3:: start_position( bool wahl)
{
 
mess3.abweichung_0=0;
mess3.abweichung_1=0;
mess3.abweichung_2=0;
mess3.abweichung_3=0;

mess3.position[0]=2624 -mess3.abweichung_0;  // Position 0
mess3.position[1]=7741+mess3.abweichung_1;  // Position 1
mess3.position[2]=8414+mess3.abweichung_2;  // Position 2

if (wahl==true)
{
mess3.position[3]=3817-mess3.abweichung_3;  // Position 3
}

else 
{
  mess3.position[3]=2786-mess3.abweichung_3;
}


 move_servo_3( mess3.position[3]);
 this_thread::sleep_for(chrono::milliseconds(1000));
 
  move_servo_1(mess3.position[1]);
  
   this_thread::sleep_for(chrono::milliseconds(1000));
 
 move_servo_2( mess3.position[2]);
 
 this_thread::sleep_for(chrono::milliseconds(1000));
move_servo_0(mess3.position[0]);



 move_servo_1(mess3.position[1]);


 


 

   
 return ; 

}



void Roboter3:: passageway_to_the_left( bool choice)
{
 
 mess3.abweichung_0=0;
 mess3.abweichung_1=0;
 mess3.abweichung_2=0;
 mess3.abweichung_3=0;

mess3.position[0]=8833 -mess3.abweichung_0;  // Position 0
mess3.position[1]=7484+mess3.abweichung_1;  // Position 1
mess3.position[2]=8966+mess3.abweichung_2;  // Position 2

if (choice==true)
{
mess3.position[3]=3817-mess3.abweichung_3;  // Position 3
}

else 
{
  mess3.position[3]=2786-mess3.abweichung_3;
}


 move_servo_3( mess3.position[3]);
 this_thread::sleep_for(chrono::milliseconds(1000));
 
 move_servo_2( mess3.position[2]);
 
 this_thread::sleep_for(chrono::milliseconds(1000));
move_servo_0(mess3.position[0]);



 move_servo_1(mess3.position[1]);



 

   
 return ; 

}




void Roboter3:: passageway_to_the_right( bool choice)
{
 
 mess3.abweichung_0=0;
 mess3.abweichung_1=0;
 mess3.abweichung_2=0;
 mess3.abweichung_3=0;

mess3.position[0]=5647 -mess3.abweichung_0;  // Position 0
mess3.position[1]=3184+mess3.abweichung_1;  // Position 1
mess3.position[2]=9792+mess3.abweichung_2;  // Position 2

if (choice==true)
{
mess3.position[3]=3817-mess3.abweichung_3;  // Position 3
}

else 
{
  mess3.position[3]=2786-mess3.abweichung_3;
}


 move_servo_3( mess3.position[3]);
 this_thread::sleep_for(chrono::milliseconds(1000));
 
 move_servo_2( mess3.position[2]);
 
 this_thread::sleep_for(chrono::milliseconds(1000));
move_servo_0(mess3.position[0]);



 move_servo_1(mess3.position[1]);



 

   
 return ; 

}








   
