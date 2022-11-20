/*----------------------------------------------------------------------------*/    
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       VEX                                                       */
/*    Created:      Thu Sep 26 2019                                           */
/*    Description:  Competition Template                                      */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Frontleft            motor         2               
// Frontright           motor         6               
// Backleft             motor         8               
// Backright            motor         9               
// Intake               motor         10              
// Controller1          controller                    
// Extension            motor         4               
// CAM                  motor         11              
// Flywheel_1           motor         13              
// Flywheel_2           motor         18              
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"
#include "stdarg.h"
#include <iostream>
#include <string>
#include <sstream>
using namespace vex;

// A global instance of competition
competition Competition;
// template <typename T>
// std::string to_string(T value)
// {
//     std::ostringstream os ;
//     os << value ;
//     return os.str() ;
// }
int Brain_precision = 0, Console_precision = 0;

const char* printToConsole_numberFormat() {
  // look at the current precision setting to find the format string
  switch(Console_precision){
    case 0:  return "%.0f"; // 0 decimal places (1)
    case 1:  return "%.1f"; // 1 decimal place  (0.1)
    case 2:  return "%.2f"; // 2 decimal places (0.01)
    case 3:  return "%.3f"; // 3 decimal places (0.001)
    default: return "%f"; // use the print system default for everthing else
  }
}
// define your global instances of motors and other devices here

/*---------------------------------------------------------------------------*/
/*                          Pre-Autonomous Functions                         */
/*                                                                           */
/*  You may want to perform some actions before the competition starts.      */
/*  Do them in the following function.  You must return from this function   */
/*  or the autonomous and usercontrol tasks will not be started.  This       */
/*  function is only called once after the V5 has been rpmed on and        */
/*  not every time that the robot is disabled.                               */
/*---------------------------------------------------------------------------*/

void pre_auton(void) {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();

  // All activities that occur before the competition starts
  // Example: clearing encoders, setting servo positions, ...
}

/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                              Autonomous Task                              */
/*                                                                           */
/*  This task is used to control your robot during the autonomous phase of   */
/*  a VEX Competition.                                                       */
/*                                                                           */
/*  You must modify the code to add your own robot specific commands here.   */
/*---------------------------------------------------------------------------*/
void driveforward(float degree) {


  Frontleft.setVelocity(75,rpm);
  Frontright.setVelocity(75,rpm);
  Backleft.setVelocity(75,rpm);
  Backright.setVelocity(75,rpm);

  
  Frontleft.startRotateFor(forward, degree, turns);
  Frontright.startRotateFor(reverse, degree, turns);
  Backleft.startRotateFor(reverse, degree, turns);
  Backright.spinFor(forward, degree, turns);
  vex::task::sleep(100);
  

}

void drivebackward(float degree) {

  Frontleft.setVelocity(200,rpm);
  Frontright.setVelocity(200,rpm);
  Backleft.setVelocity(200,rpm);
  Backright.setVelocity(200,rpm);

  
  Frontleft.startRotateFor(reverse, degree, turns);
  Frontright.startRotateFor(fwd, degree, turns);
  Backleft.startRotateFor(fwd, degree, turns);
  Backright.spinFor(reverse, degree, turns);
  vex::task::sleep(100);

}

void driveleft(float degree) {

  Frontleft.setVelocity(200,rpm);
  Frontright.setVelocity(200,rpm);
  Backleft.setVelocity(200,rpm);
  Backright.setVelocity(200,rpm);

  
  Frontleft.startRotateFor(reverse, degree, turns);
  Frontright.startRotateFor(reverse, degree, turns);
  Backleft.startRotateFor(reverse, degree, turns);
  Backright.spinFor(reverse, degree, turns);
  vex::task::sleep(100);

}

void driveright(float degree) {

  Frontleft.setVelocity(200,rpm);
  Frontright.setVelocity(200,rpm);
  Backleft.setVelocity(200,rpm);
  Backright.setVelocity(200,rpm);

  
  Frontleft.startRotateFor(forward, degree, turns);
  Frontright.startRotateFor(forward, degree, turns);
  Backleft.startRotateFor(forward, degree, turns);
  Backright.spinFor(forward, degree, turns);
  vex::task::sleep(100);

} 
void rotateleft(float degree) {
  Frontleft.setVelocity(75,rpm);
  Frontright.setVelocity(75,rpm);
  Backleft.setVelocity(75,rpm);
  Backright.setVelocity(75,rpm);
      
  Frontleft.startRotateFor(reverse, degree, turns);
  Frontright.startRotateFor(reverse, degree, turns);
  Backleft.startRotateFor(fwd, degree, turns);
  Backright.spinFor(forward, degree, turns);
  vex::task::sleep(100);

}
void rotateright(float degree) {
  Frontleft.setVelocity(75,rpm);
  Frontright.setVelocity(75,rpm);
  Backleft.setVelocity(75,rpm);
  Backright.setVelocity(75,rpm);
      
  Frontleft.startRotateFor(fwd, degree, turns);
  Frontright.startRotateFor(fwd, degree, turns);
  Backleft.startRotateFor(reverse, degree, turns);
  Backright.spinFor(reverse, degree, turns);
  vex::task::sleep(100);

}

void strafetopright(float degree) {

  Frontleft.setVelocity(200,rpm);
  Frontright.setVelocity(0,rpm);
  Backleft.setVelocity(0,rpm);
  Backright.setVelocity(200,rpm);

  Frontleft.startRotateFor(forward, degree, turns);
  
  Backright.spinFor(reverse, degree, turns);
  vex::task::sleep(100);

}

void strafetopleft(float degree) {

  Frontleft.setVelocity(0,rpm);
  Frontright.setVelocity(200,rpm);
  Backleft.setVelocity(200,rpm);
  Backright.setVelocity(0,rpm);

  Frontright.startRotateFor(reverse, degree, turns);
  
  Backright.spinFor(forward, degree, turns);
  vex::task::sleep(100);

}

void strafebackright(float degree) {

  Frontleft.setVelocity(0,rpm);
  Frontright.setVelocity(200,rpm);
  Backleft.setVelocity(200,rpm);
  Backright.setVelocity(0,rpm);

  Frontleft.spinFor(reverse, degree, turns);
  
  Backright.spinFor(forward, degree, turns);
  vex::task::sleep(100);

}

void strafebackleft(float degree) {

  Frontleft.setVelocity(200,rpm);
  Frontright.setVelocity(0,rpm);
  Backleft.setVelocity(0,rpm);
  Backright.setVelocity(200,rpm);

  Frontleft.spinFor(reverse, degree, turns);
  
  Backright.spinFor(forward, degree, turns);
  vex::task::sleep(100);
}

void autonomous(void) {
  //Telling Flywheel to spin from the start
  Flywheel_1.spin(forward);
  Flywheel_1.setVelocity(95,percent);
  Flywheel_2.spin(forward);
  Flywheel_2.setVelocity(95,percent);


  // Getting the roller
  driveforward(0.15);
  Intake.spinFor(forward,0.2,turns);
  drivebackward(0.15);


  // Preparing to shoot
  rotateleft(0.1);

  // Waiting for Ramp up
  wait(1, sec);

  // Actually shooting 2 discs
  CAM.setVelocity(100,percent);
  CAM.spinFor(forward,360,degrees);
  wait(1.5, sec);
  CAM.spinFor(forward,360,degrees);
  wait(1.5, sec);

  // Preparing to go for discs
  driveleft(2.5);
  rotateleft(0.3);
    
  
  
 
  }
  


/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                              User Control Task                            */
/*                                                                           */
/*  This task is used to control your robot during the user control phase of */
/*  a VEX Competition.                                                       */
/*                                                                           */
/*  You must modify the code to add your own robot specific commands here.   */
/*---------------------------------------------------------------------------*/
 
 float proportional1;
 float proportional2;
 float target_rpm =0;
 float TotalError1;
 float TotalError2;
 float integral1;
 float integral2;
 float LastError1;
 float LastError2;
 float derivative1;
 float derivative2;
 float rpm1;
 float rpm2;
 int is_flywheel_running = 0;



// Flywheel Trigger function
void runflywheel() {
   if (is_flywheel_running ==0 ){ 
  is_flywheel_running = 1 ;
  target_rpm = 450;
   }

  else
   {
  is_flywheel_running = 0 ;
  target_rpm = 0;
  
   }
}

void spincam() {
  if ((Flywheel_1.velocity(rpm)) > 400) {
  CAM.setVelocity(100, percent);
  CAM.spinFor(forward,360,degrees);
}
}
   


void usercontrol(void) {
  // User control code here, inside the loop

  
  //Finally setting the values for the RPM
  Controller1.ButtonR1.pressed(runflywheel);
  Controller1.ButtonR2.pressed(spincam);

while (true) {
     

 

//commented by 
if(is_flywheel_running==1 or is_flywheel_running==0) {
  //Flywheel Code
  //just trying to stop myself from writing the whole Flywheel_1.velocity(rpm) part
  rpm1 = Flywheel_1.velocity(rpm);
  rpm2 = Flywheel_2.velocity(rpm);
  printf("Top");
  printf(";");
  printf("%.0f",static_cast<float>(is_flywheel_running));
  printf(";");
  printf("%.1f", (Flywheel_1.velocity(rpm)));
  printf(";");
  printf("%.1f", (Flywheel_2.velocity(rpm)));
  printf("\n");
  
  // error tells us how much difference there is between the rpm we need and the rpm its actually giving


  float error1 = (target_rpm - rpm1);
  float error2 = (target_rpm - rpm2);

  if (error1 and error2 != 0) {
  // Input Constants here
  // Kp is for proportional gain
  // Ki is integral gain
  // Kd is derivative gain
  float Kp = 0.175;
  float Ki = 0.00000001;
  float Kd = 0.3;


  // Proportional
  proportional1 = Kp*error1;
  proportional2 = Kp*error2;

  // Integral
  // Be very careful with this, because if you set this too high, we will kill the motors VERY fast
  TotalError1 = TotalError1 + error1;
  TotalError2 = TotalError2 + error2;
  integral1 = TotalError1 * Ki;
  integral2 = TotalError2 * Ki;

  if (TotalError1 > 50/Ki) {
  integral1 = 50/Ki;
  integral2 = 50/Ki;

  }


 // Derivative 

  derivative1 = (error1 - LastError1) * Kd;
  derivative2 = (error2 - LastError2) * Kd;
  LastError1 = error1;
  LastError2 = error2;
}

else if (error1 and error2 == 0) {
  proportional1 = 0;
  proportional2 = 0;
  integral1 = 0;
  integral2 = 0;
  derivative1 = 0;
  derivative2 = 0;
}
  
  if (is_flywheel_running==0 and (rpm1+proportional1 + integral1 + derivative1 <=25 or rpm2+proportional2 + integral2 + derivative2<=25)) {
      Flywheel_1.setVelocity(0,rpm);
      Flywheel_2.setVelocity(0,rpm);
  }
  else
  {
  Flywheel_1.setVelocity(rpm1+proportional1 + integral1 + derivative1, rpm);
  Flywheel_1.spin(forward);
  Flywheel_2.setVelocity(rpm2+proportional2 + integral2 + derivative2, rpm);
  Flywheel_2.spin(forward);
  }
}


// Flywheel Input for console
Controller1.ButtonR1.pressed(runflywheel);

//intake
if (Controller1.ButtonL1.pressing())
{ Intake.setVelocity(100, percent);
 Intake.spin(forward);
}
// this is for roller, but intake has to spin for this asw
else if (Controller1.ButtonL2.pressing())
{ Intake.setVelocity(40, percent);
Intake.spin(forward);
}
else {
  Intake.setVelocity(0,rpm);
}

//DRIVEBASE CODE DO NOT CHANGE

// Left Stick Controls
if (Controller1.Axis1.position() == 0 and Controller1.Axis2.position()==0)
{
    Frontleft.setVelocity((Controller1.Axis4.position() + Controller1.Axis3.position() - Controller1.Axis1.position())/(2*0.68) ,percent);
    Backright.setVelocity((Controller1.Axis4.position() + Controller1.Axis3.position() - Controller1.Axis1.position())/(2*0.68),percent);
    Frontright.setVelocity((Controller1.Axis4.position() - Controller1.Axis3.position() + Controller1.Axis1.position())/(2*0.68),percent);
    Backleft.setVelocity((Controller1.Axis4.position() - Controller1.Axis3.position() + Controller1.Axis1.position())/(2*0.68),percent);
    Frontright.spin(forward);
    Frontleft.spin(forward);
    Backright.spin(forward);
    Backleft.spin(forward);
    

    // turnleft
if (Controller1.Axis1.position() < 0) {

    Frontleft.setVelocity(100, percent);
    Frontright.setVelocity(100, percent);
    Backleft.setVelocity(100, percent);
    Backright.setVelocity(100, percent);
      Frontleft.spin(reverse);
      Frontright.spin(reverse);
      Backleft.spin(fwd);
      Backright.spin(forward);

    }

    //turnright

    else if (Controller1.Axis1.position() > 0) {
    
    Frontleft.setVelocity(100, percent);
    Frontright.setVelocity(100, percent);
    Backleft.setVelocity(100, percent);
    Backright.setVelocity(100, percent);
     Frontleft.spin(fwd);
     Frontright.spin(forward);
     Backleft.spin(reverse);
     Backright.spin(reverse);
     }
 
    };
// wait(20, msec);
  }
   wait(20, msec);
}
  // wait(20, msec);
    // wait(20, msec); // Sleep the task for a short amount of time to
                    // prevent wasted resources.
  


//
// Main will set up the competition functions and callbacks.
//
int main() {
  // Set up callbacks for autonomous and driver control periods.
  Competition.autonomous(autonomous);
  Competition.drivercontrol(usercontrol);

  // Run the pre-autonomous function.
  pre_auton();

  // Prevent main from exiting with an infinite loop.
  while (true) {
    wait(100, msec);
  }
}
