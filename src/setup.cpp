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
void moveForward(int distance, int velocity) { // distance in centimeters
    int turnDeg = distance * ticksPerCM;
    int leftEncVal = 0; // current left encoder value
    int rightEncVal = 0;
    int diff = leftEncVal - rightEncVal;

}

void turn(int degrees, int speed) { // degrees turned by bot
    int turnDeg = degrees * ticksPerDegree;
}


//---------------HELPER FUNCTIONS---------------
void setDriveVoltage(int left, int right) {
    driveLeftFront.move(left + right);
    driveLeftBack.move(left + right);
    driveRightFront.move(left - right);
    driveRightBack.move(left - right);
}

void setIntakeRollerVoltage(int power, int rollerDownPower, int rollerUpPower) {
    intakeLeft.move(127 * power);
    intakeRight.move(127 * power);
    rollerDown.move(127 * rollerDownPower);
    rollerUp.move(127 * rollerUpPower);
}
