// Autor: Evangelos Effraimoglou
// File :Roboter3.cpp 

#include<iostream>
#include<string>
#include "ServoMotor.hpp"
#include "SerialCom.hpp"
#include "Pololu.hpp"
#include "Roboter3.hpp"
#include <unistd.h> 
			//**********************************************
			// ***********SERVO0****************************
			//**********************************************
void Roboter3::  move_servo_0(Pololu conn, bool Uhrzeigersinn  ){

	
	try
	{

    		ServoMotor Servo0(0,5700,3600,&conn);
   		Servo0.setMinMaxDegree(-90,90);
		Servo0.setPositionInDeg(degree);

  
 
    
  


    		cout << "max. pos.:" << Servo0.getMaxPosInAbs()<<endl;
    		cout << "min. pos.: " << Servo0.getMinPosInAbs() <<endl;
    		cout << "get current pos.:" <<Servo0.getPositionInAbs() << endl;
	  
 	}// try
        catch(IException *e)
  	{
		string msg("Der  Servo 0 des 'ersten' Roboters hat nicht die entsprechende Position bekommen");
		msg += e->getMsg();

  

  	} // catch

        	return;
  };
		//********************************************************
		//********************* SERVO1****************************
		//********************************************************

void Roboter3::  move_servo_1(Pololu conn, int degree  ){

	try{


    		ServoMotor Servo1(1,6000,3600,&conn);
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

  

    	    }// catch 
		return ;
  };


		//*********************************************
		//*****************SERVO2**********************
		//*********************************************
void Roboter3::  move_servo_2(Pololu conn, int degree  ){
 
  
	try
	{

    		ServoMotor Servo2(2,6400,3600,&conn);
   	 	cout << "max. pos.:" << Servo2.getMaxPosInAbs()<<endl;
    		cout << "min. pos.: " << Servo2.getMinPosInAbs() <<endl;
    		cout << "get current pos.:" <<Servo2.getPositionInAbs() << endl;

    		Servo2.setMinMaxDegree(-90,90);
    		Servo2.setPositionInDeg(degree)
    


 
    
  	} // try
  	catch(IException *e)
    	{
		string msg("Der  Servo 2 des ersten Roboters hat nicht die entsprechende Position bekommen");
		msg += e->getMsg();

    	}// catch



  		return ;

  };


		//********************************************************
		//*******************Servo3*******************************
		//*********************************************************
void Roboter3::  move_servo_3(Pololu conn,int degree ){

	try
    	{
    	
    	ServoMotor Servo3(3,6400,3700,&conn);
    	cout << "max. pos.:" << Servo3.getMaxPosInAbs()<<endl;
    	cout << "min. pos.: " << Servo3.getMinPosInAbs() <<endl;
    	cout << "get current pos.:" <<Servo3.getPositionInAbs() << endl;

    	Servo3.setMinMaxDegree(-90,90);
    	Servo3.setPositionInDeg(degree);
    
	}// try
  	catch(IException *e)
    	{
		string msg("Der Servo 3 hat nicht die entsprechende Position bekommen");
		msg += e->getMsg();
    	}// catch
  
		return ;

  };


void Roboter3:: set_Move(int id,unsigned short newAcceleration, unsigned short newSpeed,Pololu conn)
{
 	try
   	{      int neutral;
	       int delta;
	 
              if(id==0)
	      {  neutral=5700;
	          delta=3600;
	      }
	      if( id==1)
	      {
		  neutral=6000;
		  delta=3600;
	      }
	      if(id==2)
	      {
		  neutral=6400;
		  deltra=3600;
	      }
	      if(id==3)
	      {
		  neutral=6400;
		  delta=3700;
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
   	{	string msg(" Die Einstellung der Geschwindigkeit und der Beschleunigung ist nicht möglich);
		msg += e->getMsg();
   	}
 		return;


 };
