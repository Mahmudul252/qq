#include <AFMotor.h>
AF_DCMotor frontLeft(1);
AF_DCMotor frontRight(4);
AF_DCMotor backLeft(2);
AF_DCMotor backRight(3);

int frontback;
int leftright;
int a1;
int a2;

void goForward()
{
    frontLeft.run(FORWARD);
    frontRight.run(FORWARD);
    backLeft.run(BACKWARD);
    backRight.run(BACKWARD);
}

void goBackward()
{
    frontLeft.run(BACKWARD);
    frontRight.run(BACKWARD);
    backLeft.run(FORWARD);
    backRight.run(FORWARD);
}

void turnLeft()
{
    frontLeft.run(BACKWARD);
    frontRight.run(FORWARD);
    backLeft.run(FORWARD);
    backRight.run(BACKWARD);
}

void turnRight()
{
    frontLeft.run(FORWARD);
    frontRight.run(BACKWARD);
    backLeft.run(BACKWARD);
    backRight.run(FORWARD);
}

void setup()
{

    frontLeft.setSpeed();
    backLeft.setSpeed();
    frontRight.setSpeed();
    backRight.setSpeed();
}
void setMotorSpeed(void speed)
{
    frontLeft.setSpeed(speed);
    backLeft.setSpeed(speed);
    frontRight.setSpeed(speed);
    backRight.setSpeed(speed);
}

void loop()
{
    a1 = analogRead(A1);
    a2 = analogRead(A2);
    frontback = map(a1, 0, 1023, 0, 255);
    leftright = map(a2, 0, 1023, 0, 255);

    // if (frontback > 150)
    // {
    //     goForward();
    // }
    // if (frontback < 80)
    // {
    //     goBackward();
    // }

    // if (leftright > 150)
    // {
    //     turnRight();
    // }

    // if (leftright < 80)
    // {
    //     turnLeft();
    // }
}