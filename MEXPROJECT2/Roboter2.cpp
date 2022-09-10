// Autor: Evangelos Effraimoglou
// File :Roboter2

#include<iostream>
#include<string>
#include "ServoMotor.hpp"
#include "SerialCom.hpp"
#include "Pololu.hpp"
#include "Roboter2.hpp"
#include <unistd.h> 

/* **********************************************************
   *********************SERVO0*******************************
   *********************************************************** */
void Roboter2::  move_servo_0(Pololu conn,int degree ){
  
	try{

    		ServoMotor Servo0(0,5000,4200,&conn);
  		Servo0.setMinMaxDegree(-90,90);
		Servo0.setPositionInDeg(degree);

  
 
    
  
       


    		cout << "max. pos.:" << Servo0.getMaxPosInAbs()<<endl;
    		cout << "min. pos.: " << Servo0.getMinPosInAbs() <<endl;
    		cout << "get current pos.:" <<Servo0.getPositionInAbs() << endl;
	  }//try

  	catch(IException *e)
    	{
		string msg("Der  Servo 0 des 'ersten' Roboters hat nicht die entsprechende Position bekommen");
		msg += e->getMsg();

  

    	} //catch
 
      

  

  		return;
  };


	/* *********************************************
	   ***************SERVO1************************
	  ********************************************** */
  
void Roboter2::  move_servo_1 ( Pololu conn, int degree  )
{


	try
  	{

    		ServoMotor Servo1(1,4700,2700,&conn);
    		cout << "max. pos.:" << Servo1.getMaxPosInAbs()<<endl;
    		cout << "min. pos.: " << Servo1.getMinPosInAbs() <<endl;
    		cout << "get current pos.:" <<Servo1.getPositionInAbs() << endl;

    		Servo1.setMinMaxDegree(-90,90);
    		Servo1.setPositionInDeg(degree);
    


 
    
   	}//try

  	catch(IException *e)
   	{
		string msg("Der  Servo 1 des ersten Roboters  hat nicht die entsprechende Position bekommen");
		msg += e->getMsg();

	 
   	} //catch
 

  		return ;
};  // function


		//************************************************************
		// *******************************SERVO2**********************
		//************************************************************
void Roboter2::  move_servo_2(Pololu conn, int degree  ){
	
  
	try
	{

    		ServoMotor Servo2(2,6000,3800,&conn);
    		cout << "max. pos.:" << Servo2.getMaxPosInAbs()<<endl;
    		cout << "min. pos.: " << Servo2.getMinPosInAbs() <<endl;
    		cout << "get current pos.:" <<Servo2.getPositionInAbs() << endl;

    		Servo2.setMinMaxDegree(-90,90);
    
                Servo2.setPositionInDeg(degree);

 
    
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
void Roboter2::  move_servo_3(Pololu conn, int degree  ){
	
	try
	{

    		ServoMotor Servo3(3,6000,4400,&conn);
    		cout << "max. pos.:" << Servo3.getMaxPosInAbs()<<endl;
    		cout << "min. pos.: " << Servo3.getMinPosInAbs() <<endl;
    		cout << "get current pos.:" <<Servo3.getPositionInAbs() << endl;
		Servo3.setMinMaxDegree(-90,90);
		Servo3.setPositionInDeg(degree);
    	 } //try
	
      
  	catch(IException *e)
    	{
		string msg("Der Servo 3 hat nicht die entsprechende Position bekommen");
		msg += e->getMsg();
	
	} //catch
	return;
};
	void Roboter2 :: set_Move(int id,unsigned short newAcceleration, unsigned short newSpeed,Pololu conn)
{
 	try
   	{      int neutral;
	       int delta;
	 
              if(id==0)
	      {  neutral=1;
	          delta=1;
	      }
	      if( id==1)
	      {
		  neutral=1;
		  delta=1;
	      }
	      if(id==2)
	      {
		  neutral=1;
		  delta=1;
	      }
	      if(id==3)
	      {
		  neutral=1;
		  delta=1;
	      }
	      if( neutral<=4000 ||neutral>=7500)
	      {
		    cout<<"Die neutrale Position ueberschreitet die Grenzen";
	      }
	 
  		ServoMotor Servo(id,neutral,delta,&conn);

  		Servo.setAcceleration(newAcceleration);
  		Servo.setSpeed(newSpeed);
   	}
 
 	catch(IException *e)
   	{	string msg(" Die Einstellung der Geschwindigkeit und der Beschleunigung ist nicht möglich");
		msg += e->getMsg();
   	}
 		return;


 };
