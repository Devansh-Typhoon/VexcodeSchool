#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
motor Frontleft = motor(PORT2, ratio18_1, false);
motor Frontright = motor(PORT6, ratio18_1, false);
motor Backleft = motor(PORT8, ratio18_1, true);
motor Backright = motor(PORT9, ratio18_1, true);
motor Intake = motor(PORT10, ratio18_1, false);
controller Controller1 = controller(primary);
motor Extension = motor(PORT4, ratio18_1, false);
motor CAM = motor(PORT11, ratio18_1, false);
motor Flywheel_1 = motor(PORT13, ratio6_1, true);
motor Flywheel_2 = motor(PORT18, ratio6_1, false);

// VEXcode generated functions
// define variable for remote controller enable/disable
bool RemoteControlCodeEnabled = true;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}