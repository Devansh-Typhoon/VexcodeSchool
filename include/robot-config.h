using namespace vex;

extern brain Brain;

// VEXcode devices
extern motor Frontleft;
extern motor Frontright;
extern motor Backleft;
extern motor Backright;
extern motor Intake;
extern controller Controller1;
extern motor CAM;
extern motor Flywheel_1;
extern motor Flywheel_2;
extern digital_out DigitalOutA;
extern digital_out DigitalOutB;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );