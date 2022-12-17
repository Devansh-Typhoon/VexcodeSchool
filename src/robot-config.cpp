#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
motor Frontleft = motor(PORT1, ratio18_1, false);
motor Frontright = motor(PORT2, ratio18_1, false);
motor Backleft = motor(PORT3, ratio18_1, true);
motor Backright = motor(PORT4, ratio18_1, true);
motor Intake = motor(PORT8, ratio18_1, false);
controller Controller1 = controller(primary);
motor CAM = motor(PORT7, ratio18_1, false);
motor Flywheel_1 = motor(PORT5, ratio6_1, true);
motor Flywheel_2 = motor(PORT6, ratio6_1, false);
digital_out DigitalOutA = digital_out(Brain.ThreeWirePort.A);
digital_out DigitalOutB = digital_out(Brain.ThreeWirePort.B);

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