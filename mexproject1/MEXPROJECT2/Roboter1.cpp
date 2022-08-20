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

void Roboter1::  move_servo_0(Pololu conn,bool Uhrzeigersinn  ){
// im Uhrzeigersinn Servo0

  if( Uhrzeigersinn==true)
    {
  try{

    ServoMotor Servo0(0,6000,2500,&conn);
   

    Servo0.setMinMaxDegree(-90,90);

    Servo0.setPositionInDeg(90);

  
 
    
  


    cout << "max. pos.:" << Servo0.getMaxPosInAbs()<<endl;
    cout << "min. pos.: " << Servo0.getMinPosInAbs() <<endl;
    cout << "get current pos.:" <<Servo0.getPositionInAbs() << endl;
}
  catch(IException*e)
    {
	string msg("Der  Servo 0 des 'ersten' Roboters hat nicht die entsprechende Position bekommen");
		msg += e->getMsg();

    
      }
    } 
  else
    { try {
// gegenUhrzeigersinn Drehung Servo0
  ServoMotor bServo0(0,4000,500,&conn);
   

    bServo0.setMinMaxDegree(-90,90);

    bServo0.setPositionInDeg(90);


 
    
      }	catch(IException *e){
		string msg("Der  Servo 0 des 'ersten' Roboters hat nicht die entsprechende Position bekommen");
		msg += e->getMsg();

  

  }
    }
  return;
  };

//*********************************************************
// *******************Servo1*******************************
//*********************************************************

  void Roboter1::  move_servo_1(Pololu conn, bool Uhrzeigersinn  ){
//******************************************************************
// ******************Im Uhrzeigersinn Drehung Servo1****************
//******************************************************************

    if(Uhrzeigersinn==true)
      {
   try{

    ServoMotor Servo1(1,6000,0,&conn);
    cout << "max. pos.:" << Servo1.getMaxPosInAbs()<<endl;
    cout << "min. pos.: " << Servo1.getMinPosInAbs() <<endl;
    cout << "get current pos.:" <<Servo1.getPositionInAbs() << endl;

    Servo1.setMinMaxDegree(-90,90);
    Servo1.setPositionInDeg(90);

 cout << "max. pos.:" << Servo1.getMaxPosInAbs()<<endl;
    cout << "min. pos.: " << Servo1.getMinPosInAbs() <<endl;
    cout << "get current pos.:" <<Servo1.getPositionInAbs() << endl;
	
 
    
	}catch(IException *e){
		string msg("Der  Servo 1 des ersten Roboters  hat nicht die entsprechende Position bekommen");
		msg += e->getMsg();

  

  }
      }
    else {// gegen Uhrzeigersinn Drehung Servo1
	try{
		
	  ServoMotor bServo1(1,4000,0, &conn);  
	cout<< "max. pos.:" << bServo1.getMaxPosInAbs()<<endl;
	    cout<<"min. pos: " <<bServo1.getMinPosInAbs()<<endl;
		cout <<"get current pos.:" <<bServo1.getPositionInAbs()<<endl;
	}
	catch(IException *e) {
		string msg("Der  Servo 1 des ersten Roboters  hat nicht die entsprechende Position bekommen");
		msg += e->getMsg();}
    }

  return ;
  };

//*************************************************
// *********************SERVO2********************* 
//*************************************************	
  void Roboter1::  move_servo_2(Pololu conn,bool Uhrzeigersinn  ){

    ************************************************************** 
    //************** Im Uhrzeigersinn Drehung servo2**************
    //************************************************************	    
    if(Uhrzeigersinn==true){
  try{

    ServoMotor Servo2(2,6000,0,&conn);
    cout << "max. pos.:" << Servo2.getMaxPosInAbs()<<endl;
    cout << "min. pos.: " << Servo2.getMinPosInAbs() <<endl;
    cout << "get current pos.:" <<Servo2.getPositionInAbs() << endl;

    Servo2.setMinMaxDegree(-90,90);
    Servo2.setPositionInDeg(90);


 
    
	}catch(IException *e){
		string msg("Der  Servo 2 des ersten Roboters hat nicht die entsprechende Position bekommen");
		msg += e->getMsg();

  

 }
    }
    else{
   //****************************************************************************
  //********************** Gegen Uhrzeigersinn Drehung Servo2********************
  //*****************************************************************************	    
	    
	    
	try{
        
    ServoMotor bServo2(2,4000,0,&conn);
    cout << "max. pos.:" << bServo2.getMaxPosInAbs()<<endl;
    cout << "min. pos.: " << bServo2.getMinPosInAbs() <<endl;
    cout << "get current pos.:" <<bServo2.getPositionInAbs() << endl;

    bServo2.setMinMaxDegree(-90,90);
    bServo2.setPositionInDeg(90);


 
    
	}catch(IException *e){
		string msg("Der  Servo 2 des ersten Roboters hat nicht die entsprechende Position bekommen");
		msg += e->getMsg();

  }


    }
  
  
  
  
  return ;

  };

//************************************* SERVO3*******************
//***************************************************************
//***************************************************************
  void Roboter1::  move_servo_3(Pololu conn,bool Uhrzeigersinn  ){



    if(Uhrzeigersinn==true){
   //*****************************************************************
  //*************** Im UhrzeigerSinn  Drehung Servo3******************
  // *****************************************************************
  
  try{

    ServoMotor Servo3(3,6000,0,&conn);
    cout << "max. pos.:" << Servo3.getMaxPosInAbs()<<endl;
    cout << "min. pos.: " << Servo3.getMinPosInAbs() <<endl;
    cout << "get current pos.:" <<Servo3.getPositionInAbs() << endl;

    Servo3.setMinMaxDegree(-90,90);
    Servo3.setPositionInDeg(90);


 
    
	}catch(IException *e){
		string msg("Der Servo 3 hat nicht die entsprechende Position bekommen");
		msg += e->getMsg();
  }
    }
    else{
  
     //*********************************************
     //**** GegenUhrzeigersinn Drehung Servo3*******
     //*********************************************
	  
   try{

    ServoMotor bServo3(3,4000,0,&conn);
    cout << "max. pos.:" << bServo3.getMaxPosInAbs()<<endl;
    cout << "min. pos.: " << bServo3.getMinPosInAbs() <<endl;
    cout << "get current pos.:" <<bServo3.getPositionInAbs() << endl;

   bServo3.setMinMaxDegree(-90,90);
    bServo3.setPositionInDeg(90);


 
    
	}catch(IException *e){
		string msg("Der Servo 3 hat nicht die entsprechende Position bekommen");

  }
    }
  return ;

  };









 

 
