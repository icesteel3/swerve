#include <Motor.hpp>

class SwerveModule {
  bool inverted = false;
  float *lim;
public:
  void CreateMotor(new spark) {
    Motor* SwerveMotor = Motor::CreateMotor(&spark);
  }

  void SetInverted() {
    inverted =! inverted;
  }

  void SetLimit(float limit) {
    lim = limit;
  }

  void forward(float speed) {
    if (inverted) {
      SwerveMotor -> Set(-speed*lim);
    }
    else {
      SwerveMotor -> Set(speed*lim);
    }
  }
  void backwards(float speed) {
    if (inverted) {
      SwerveMotor -> Set(speed*lim);
    }
    else {
      SwerveMotor -> Set(-speed*lim);
    }
  }

};
