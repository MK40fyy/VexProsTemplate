#include "main.h"

//---------------INITIALISE DEVICES---------------
pros::Motor driveLeftFront(driveLeftFrontPort, pros::E_MOTOR_GEARSET_18, false, pros::E_MOTOR_ENCODER_DEGREES);
pros::Motor driveLeftBack(driveLeftBackPort, pros::E_MOTOR_GEARSET_18, false, pros::E_MOTOR_ENCODER_DEGREES);
pros::Motor driveRightFront(driveRightFrontPort, pros::E_MOTOR_GEARSET_18, true, pros::E_MOTOR_ENCODER_DEGREES);
pros::Motor driveRightBack(driveRightBackPort, pros::E_MOTOR_GEARSET_18, true, pros::E_MOTOR_ENCODER_DEGREES);

pros::Motor intakeLeft(intakeLeftPort, pros::E_MOTOR_GEARSET_18, false, pros::E_MOTOR_ENCODER_DEGREES);
pros::Motor intakeRight(intakeRightPort, pros::E_MOTOR_GEARSET_18, true, pros::E_MOTOR_ENCODER_DEGREES);
pros::Motor rollerUp(rollerUpPort, pros::E_MOTOR_GEARSET_18, false, pros::E_MOTOR_ENCODER_DEGREES);
pros::Motor rollerDown(rollerDownPort, pros::E_MOTOR_GEARSET_18, true, pros::E_MOTOR_ENCODER_DEGREES);

pros::Controller controller(pros::E_CONTROLLER_MASTER);


//---------------AUTONOMOUS FUNCTIONS---------------
void moveForward(int centimeters, int velocity) {

}

// degrees here is degrees turned by body
void turn(int degrees, int speed) {

}