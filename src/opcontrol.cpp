#include "main.h"

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

    int leftVoltage = leftJoystickY * 1 / (1);
    int rightVoltage = rightJoystickX * 1 / (1);

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