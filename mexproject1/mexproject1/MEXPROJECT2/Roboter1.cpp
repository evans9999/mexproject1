// Autor: Evangelos Effraimoglou
// File :Roboter 1 

#include<iostream>
#include<string>
#include "ServoMotor.hpp"
#include "SerialCom.hpp"
#include "Pololu.hpp"
#include "Roboter1.hpp"
#include <unistd.h> 
//*********************************************
//*****************SERVO0**********************
//*********************************************

void Roboter1::  move_servo_0(Pololu conn, int degree  ){


 
  try{

    ServoMotor Servo0(0,6000,4500,&conn);
   

    Servo0.setMinMaxDegree(-90,90);

    Servo0.setPositionInDeg( degree);

    cout << "max. pos.:" << Servo0.getMaxPosInAbs()<<endl;
    cout << "min. pos.: " << Servo0.getMinPosInAbs() <<endl;
    cout << "get current pos.:" <<Servo0.getPositionInAbs() << endl;
}
  catch(IException*e)
    {
	string msg("Der  Servo 0 des 'ersten' Roboters hat nicht die entsprechende Position bekommen");
		msg += e->getMsg();

    
    } // catch 
 
 
    
  return;
  };

//*********************************************************
// *******************Servo1*******************************
//*********************************************************

 void Roboter1::  move_servo_1(Pololu conn, int degree  ){


	try
   {

   		ServoMotor Servo1(1,6000,4500,&conn);
    		cout << "max. pos.:" << Servo1.getMaxPosInAbs()<<endl;
    		cout << "min. pos.: " << Servo1.getMinPosInAbs() <<endl;
    		cout << "get current pos.:" <<Servo1.getPositionInAbs() << endl;

    		Servo1.setMinMaxDegree(-90,90);
    		Servo1.setPositionInDeg(degree);

 		cout << "max. pos.:" << Servo1.getMaxPosInAbs()<<endl;
    		cout << "min. pos.: " << Servo1.getMinPosInAbs() <<endl;
    		cout << "get current pos.:" <<Servo1.getPositionInAbs() << endl;
	
   }// try
    
   	catch(IException *e)
      
  {
		string msg("Der  Servo 1 des ersten Roboters  hat nicht die entsprechende Position bekommen");
		msg += e->getMsg();

  

   }// catch
  		return;
  };

		/* 	*************************************************
		 	*********************SERVO2********************** 
			************************************************* */	
  

void Roboter1::  move_servo_2(Pololu conn,int degree  )
{

      
   
	try
 	 {

    		ServoMotor Servo2(2,6000,4500,&conn);
    		cout << "max. pos.:" << Servo2.getMaxPosInAbs()<<endl;
    		cout << "min. pos.: " << Servo2.getMinPosInAbs() <<endl;
    		cout << "get current pos.:" <<Servo2.getPositionInAbs() << endl;

    		Servo2.setMinMaxDegree(-90,90);
    		Servo2.setPositionInDeg(degree);


 
    
  	} // try
  	catch(IException *e)
 	 {
		string msg("Der  Servo 2 des ersten Roboters hat nicht die entsprechende Position bekommen");
		msg += e->getMsg();

  	  }//catch

  		return ;

  };

			/* ************************************ SERVO3*******************
			   **************************************************************
			   *************************************************************** */
void Roboter1::  move_servo_3(Pololu conn, int degree ){

	try
  	{

		ServoMotor Servo3(3,6000,2000,&conn);
    		cout << "max. pos.:" << Servo3.getMaxPosInAbs()<<endl;
    		cout << "min. pos.: " << Servo3.getMinPosInAbs() <<endl;
    		cout << "get current pos.:" <<Servo3.getPositionInAbs() << endl;

    		Servo3.setMinMaxDegree(-90,90);
    		Servo3.setPositionInDeg(degree);
   	}//try
  	catch(IException *e)
  	{
		string msg("Der Servo 3 hat nicht die entsprechende Position bekommen");
		msg += e->getMsg();
  	}// catch
   		 return ;

  };

void Roboter1:: set_Move(int id,unsigned short newAcceleration, unsigned short newSpeed,Pololu conn)
{
 	try
   	{
  		ServoMotor Servo(id,6000,2500,&conn);

  		Servo.setAcceleration(newAcceleration);
  		Servo.setSpeed(newSpeed);
   	}
 
 	catch(IException *e)
   	{	string msg("Der Servo 3 hat nicht die entsprechende Position bekommen");
		msg += e->getMsg();
   	}
 		return;
}







 

 
