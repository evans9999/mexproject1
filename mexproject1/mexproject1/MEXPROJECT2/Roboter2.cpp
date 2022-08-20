// Autor: Evangelos Effraimoglou
// File :Roboter2

#include<iostream>
#include<string>
#include "ServoMotor.hpp"
#include "SerialCom.hpp"
#include "Pololu.hpp"
#include "Roboter2.hpp"
#include <unistd.h> 

// **********************************************************
// *********************SERVO0*******************************
//***********************************************************
void Roboter2::  move_servo_0(Pololu conn,bool Uhrzeigersinn  ){
  if(Uhrzeigersinn==true)
  {
  try{

    ServoMotor Servo0(2,6000,2500,&conn);
   

    Servo0.setMinMaxDegree(-90,90);

    Servo0.setPositionInDeg(90);

  
 
    
  
       


    cout << "max. pos.:" << Servo0.getMaxPosInAbs()<<endl;
    cout << "min. pos.: " << Servo0.getMinPosInAbs() <<endl;
    cout << "get current pos.:" <<Servo0.getPositionInAbs() << endl;
  }//try

  catch(IException *e)
    {
		string msg("Der  Servo 0 des 'ersten' Roboters hat nicht die entsprechende Position bekommen");
		msg += e->getMsg();

  

    } //catch
  }//if
  else
    {
    


  ServoMotor bServo0(0,4000,500,&conn);
   
  try
    {
    bServo0.setMinMaxDegree(-90,90);

    bServo0.setPositionInDeg(90);


 
    
    }//try

  catch(IException *e)
    {
		string msg("Der  Servo 0 des 'ersten' Roboters hat nicht die entsprechende Position bekommen");
		msg += e->getMsg();

  

    } //catch

  


 
    
    }//ELSE
	
      

  

  return;
  };
//*********************************************
// ***************SERVO1***********************
//*********************************************
  
void Roboter2::  move_servo_1 ( Pololu conn, bool Uhrzeigersinn  ){

if( Uhrzeigersinn== true)
{
  try{

    ServoMotor Servo1(1,6000,0,&conn);
    cout << "max. pos.:" << Servo1.getMaxPosInAbs()<<endl;
    cout << "min. pos.: " << Servo1.getMinPosInAbs() <<endl;
    cout << "get current pos.:" <<Servo1.getPositionInAbs() << endl;

    Servo1.setMinMaxDegree(-90,90);
    


 
    
  } //try

 catch(IException *e)
   {
		string msg("Der  Servo 1 des ersten Roboters  hat nicht die entsprechende Position bekommen");
		msg += e->getMsg();

	 
   } //catch
 } //if
  else
    {
		
  try
    {
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
    }//catch
} //else
  return ;
};  // function
//************************************************************
// *******************************SERVO2**********************
//************************************************************
void Roboter2::  move_servo_2(Pololu conn, bool Uhrzeigersinn  ){
	
  if (Uhrzeigersinn== true)
    {

  try{

    ServoMotor Servo2(2,6000,0,&conn);
    cout << "max. pos.:" << Servo2.getMaxPosInAbs()<<endl;
    cout << "min. pos.: " << Servo2.getMinPosInAbs() <<endl;
    cout << "get current pos.:" <<Servo2.getPositionInAbs() << endl;

    Servo2.setMinMaxDegree(-90,90);
    


 
    
  }//try
       
 catch(IException *e)
   {
		string msg("Der  Servo 2 des ersten Roboters hat nicht die entsprechende Position bekommen");
		msg += e->getMsg();
		
   }//catch
    }
  else {

   try{
		  ServoMotor bServo2(2,4500,0,&conn);
		   cout << "max. pos.:" << bServo2.getMaxPosInAbs()<<endl;
		   cout << "min. pos.: " << bServo2.getMinPosInAbs() <<endl;
		   cout << "get current pos.:" <<bServo2.getPositionInAbs() << endl;

   } //try

   catch(IException *e)
     {
		string msg("Der  Servo 1 des ersten Roboters  hat nicht die entsprechende Position bekommen");
		msg += e->getMsg();
  } //catch
}//else
  return ;

  };

//  ***************************************
//  ************SERVO3*********************
//  ***************************************
void Roboter2::  move_servo_3(Pololu conn, bool Uhrzeigersinn  ){
	if(Uhrzeigersinn==true)
	{

  try{

    ServoMotor Servo3(3,6000,0,&conn);
    cout << "max. pos.:" << Servo3.getMaxPosInAbs()<<endl;
    cout << "min. pos.: " << Servo3.getMinPosInAbs() <<endl;
    cout << "get current pos.:" <<Servo3.getPositionInAbs() << endl;

    Servo3.setMinMaxDegree(-90,90);
    


 
    
  } //try
	
      
  catch(IException *e)
    {
		string msg("Der Servo 3 hat nicht die entsprechende Position bekommen");
		msg += e->getMsg();

  

    } //catch
	} // if

   else
     {
 try{

    ServoMotor bServo3(3,4500,0,&conn);
    cout << "max. pos.:" << bServo3.getMaxPosInAbs()<<endl;
    cout << "min. pos.: " << bServo3.getMinPosInAbs() <<endl;
    cout << "get current pos.:"<< bServo3.getPositionInAbs() << endl;

    bServo3.setMinMaxDegree(-90,90);
    


 
    
 } //try
	
      
  catch(IException *e)
    {
		string msg("Der Servo 3 hat nicht die entsprechende Position bekommen");
		msg += e->getMsg();

    } //catch
     } //else
  return ;

  };
