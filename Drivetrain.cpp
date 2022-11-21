#include "swervedrive.hpp"

class Drive {
  SwerveModule* frontLeft;
  SwerveModule* frontRight;
  SwerveModule* backLeft;
  SwerveModule* backRight;

  float frontLeftAmt;
  float frontRightAmt;
  float backLeftAmt;
  float backRightAmt;

  frontRight -> SetInverted();
  backRight -> SetInverted();

public:
  void getTokyoDRIFTAmt(driftX, driftY) {
    if (driftY > 0) {          // top-half
      frontLeftAmt = (driftX+1)*.5
    }
  }
}
