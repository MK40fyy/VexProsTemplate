#include "main.h"

#ifndef SETUP_H
#define SETUP_H
void setDriveVoltage(int left, int right);
void setIntakeRollerVoltage(int power, int rollerDownPower, int rollerUpPower);
void moveForward(int distance, int velocity);
void turn(int degrees, int speed);
#endif

//MISCELLANEOUS
#define ticksPerDegree 5 //how many degrees (ticks) the motors have to rotate –– to turn the bot 1 degree
// to measure this, rotate robot 10 times on the spot, record encoder value X, ticksPerDegree = X/3600
#define ticksPerCM 5 //how many degrees (ticks) the motors have to rotate –– to drive the bot 1 cm
#define minSpeed 15 // minimum speed required to move the robot
#define P 0.2
#define I
#define D 

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
