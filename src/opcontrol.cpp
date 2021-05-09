#include "main.h"

//---------------HELPER FUNCTIONS---------------
void setDriveVoltage(int leftY, int rightX) {
    driveLeftFront.move(leftY + rightX);
    driveLeftBack.move(leftY + rightX);
    driveRightFront.move(leftY - rightX);
    driveRightBack.move(leftY - rightX);
}

void setIntakeRollerVoltage(int power, int rollerDownPower, int rollerUpPower) {
    intakeLeft.move(127 * power);
    intakeRight.move(127 * power);
    rollerDown.move(127 * rollerDownPower);
    rollerUp.move(127 * rollerUpPower);
}

//---------------DRIVER FUNCTIONS---------------
void controlDrive() {
    int leftJoystickY = controller.get_analog(pros::E_CONTROLLER_ANALOG_LEFT_Y);
    int rightJoystickX = controller.get_analog(pros::E_CONTROLLER_ANALOG_RIGHT_X);
    if (abs(leftJoystickY) < 8) {
        leftJoystickY = 0;
    }
    if (abs(rightJoystickX) < 8) {
        rightJoystickX = 0;
    }

    int leftVoltage = leftJoystickY * leftJoystickY * leftJoystickY / (127 * 127);
    int rightVoltage = rightJoystickX * rightJoystickX * rightJoystickX / (127 * 127);

    setDriveVoltage(leftVoltage, rightVoltage);
}

void controlIntakeRoller() {
    int R1 = controller.get_digital(pros::E_CONTROLLER_DIGITAL_R1);
    int L1 = controller.get_digital(pros::E_CONTROLLER_DIGITAL_L1);
    int R2 = controller.get_digital(pros::E_CONTROLLER_DIGITAL_R2);
    int L2 = controller.get_digital(pros::E_CONTROLLER_DIGITAL_L2);
    int intakePower = (R1 - L1);
    int rollerDownPower = (R2 + R1 - L2);
    int rollerUpPower = (R2 - L2);
    setIntakeRollerVoltage(intakePower, rollerDownPower, rollerUpPower);
}