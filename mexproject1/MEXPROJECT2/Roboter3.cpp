// Autor: Evangelos Effraimoglou
// File :Roboter3.cpp 

#include<iostream>
#include<string>
#include "ServoMotor.hpp"
#include "SerialCom.hpp"
#include "Pololu.hpp"
#include "Roboter3.hpp"
#include <unistd.h> 


void Roboter3::  move_servo_0(Pololu conn, bool Uhrzeigersinn  ){

	if(Uhrzeigersinn==true)
	{
  try{

    ServoMotor Servo0(0,6000,2500,&conn);
   

    Servo0.setMinMaxDegree(-90,90);

    Servo0.setPositionInDeg(90);

  
 
    
  


    cout << "max. pos.:" << Servo0.getMaxPosInAbs()<<endl;
    cout << "min. pos.: " << Servo0.getMinPosInAbs() <<endl;
    cout << "get current pos.:" <<Servo0.getPositionInAbs() << endl;
	  
  }// try
  catch(IException *e)
  {
		string msg("Der  Servo 0 des 'ersten' Roboters hat nicht die entsprechende Position bekommen");
		msg += e->getMsg();

  

  } // catch

        }// if
	

	else
	  {

	    
	    try{
  ServoMotor bServo0(0,4000,500,&conn);
   

    bServo0.setMinMaxDegree(-90,90);

    bServo0.setPositionInDeg(90);


 
	    }//try
	 

	catch(IException *e)
	  {
		string msg("Der  Servo 0 des 'ersten' Roboters hat nicht die entsprechende Position bekommen");
		msg += e->getMsg();

  

	  }// catch
	  } //else

  return;
  };


void Roboter3::  move_servo_1(Pololu conn, bool Uhrzeigersinn  ){
 if(Uhrzegersinn ==true)
 {
  try{

    ServoMotor Servo1(1,6000,0,&conn);
    cout << "max. pos.:" << Servo1.getMaxPosInAbs()<<endl;
    cout << "min. pos.: " << Servo1.getMinPosInAbs() <<endl;
    cout << "get current pos.:" <<Servo1.getPositionInAbs() << endl;

    Servo1.setMinMaxDegree(-90,90);
    


 
    
    }//try

  catch(IException *e)
    {
		string msg("Der  Servo 1 des ersten Roboters  hat nicht die entsprechende Position bekommen");
		msg += e->getMsg();

  

    }// catch 
 }// if
	else {
		try{
		ServoMotor Servo1(1,4500.0,&conn);
	            cout << "max. pos.:" << Servo1.getMaxPosInAbs()<<endl;
    cout << "min. pos.: " << Servo1.getMinPosInAbs() <<endl;
    cout << "get current pos.:" <<Servo1.getPositionInAbs() << endl;

    Servo1.setMinMaxDegree(-90,90);
		}//try

	        catch( IException *e)
		{string msg("Der  Servo 1 des ersten Roboters  hat nicht die entsprechende Position bekommen");
		msg += e->getMsg();
		}//catch 
		         
	} // else

  return ;
  };

void Roboter3::  move_servo_2(Pololu conn, bool Uhrzeigersinn  ){
  if(Uhrzeigersinn==true)
  {
  try{

    ServoMotor Servo2(2,6000,0,&conn);
    cout << "max. pos.:" << Servo2.getMaxPosInAbs()<<endl;
    cout << "min. pos.: " << Servo2.getMinPosInAbs() <<endl;
    cout << "get current pos.:" <<Servo2.getPositionInAbs() << endl;

    Servo2.setMinMaxDegree(-90,90);
    


 
    
  } // try
  catch(IException *e)
    {
		string msg("Der  Servo 2 des ersten Roboters hat nicht die entsprechende Position bekommen");
		msg += e->getMsg();

    }// catch
  } // if

  else
    {

      try
   {

    ServoMotor Servo2(2,4000,0,&conn);
    cout << "max. pos.:" << Servo2.getMaxPosInAbs()<<endl;
    cout << "min. pos.: " << Servo2.getMinPosInAbs() <<endl;
    cout << "get current pos.:" <<Servo2.getPositionInAbs() << endl;

    Servo2.setMinMaxDegree(-90,90);
    


 
    
   }// try
      catch(IException *e)
	{
		string msg("Der  Servo 2 des ersten Roboters hat nicht die entsprechende Position bekommen");
		msg += e->getMsg();
	}// catch 
    }//else 
  return ;

  };

void Roboter3::  move_servo_3(Pololu conn,bool Uhrzeigersinn  ){
if(Uhrzeigersinn==true)
{
  try
    {

    ServoMotor Servo3(3,6000,0,&conn);
    cout << "max. pos.:" << Servo3.getMaxPosInAbs()<<endl;
    cout << "min. pos.: " << Servo3.getMinPosInAbs() <<endl;
    cout << "get current pos.:" <<Servo3.getPositionInAbs() << endl;

    Servo3.setMinMaxDegree(-90,90);
    


 
    
    }// ty
  catch(IException *e)
    {
		string msg("Der Servo 3 hat nicht die entsprechende Position bekommen");
		msg += e->getMsg();
    }// catch
  

 }// if
 else
   {
	
     try{

    ServoMotor Servo3(3,6000,0,&conn);
    cout << "max. pos.:" << Servo3.getMaxPosInAbs()<<endl;
    cout << "min. pos.: " << Servo3.getMinPosInAbs() <<endl;
    cout << "get current pos.:" <<Servo3.getPositionInAbs() << endl;

    Servo3.setMinMaxDegree(-90,90);
    


 
    
     } // try
     catch(IException *e)
       {
		string msg("Der Servo 3 hat nicht die entsprechende Position bekommen");
		msg += e->getMsg();
       } // catch 
   }// else
  return ;

  };


void Roboter3:: set_Move(unsigned short newAcceleration, unsigned short newSpeed,Pololu conn)
{
 try
   {
  ServoMotor Servo0(0,6000,2500,&conn);

  Servo0.setAcceleration(newAcceleration);
  Servo0.setSpeed(newSpeed);
   }
 
 catch(IException *e)
   {	string msg("Der Servo 3 hat nicht die entsprechende Position bekommen");
		msg += e->getMsg();
   }
 return;
}
