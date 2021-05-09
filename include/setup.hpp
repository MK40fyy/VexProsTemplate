#include "main.h"

//PORTS
#define driveLeftFrontPort 5
#define driveLeftBackPort 4
#define driveRightFrontPort 19
#define driveRightBackPort 8
#define intakeLeftPort 11
#define intakeRightPort 13
#define rollerUpPort 16
#define rollerDownPort 2

//DECLARE DEVICES
extern pros::Motor driveLeftFront;
extern pros::Motor driveLeftBack;
extern pros::Motor driveRightFront;
extern pros::Motor driveRightBack;

extern pros::Motor intakeLeft;
extern pros::Motor intakeRight;
extern pros::Motor rollerUp;
extern pros::Motor rollerDown;

extern pros::Controller controller;

//---------------AUTONOMOUS FUNCTIONS---------------
void moveForward(int centimeters, int velocity);
void turn(int degrees, int speed);
