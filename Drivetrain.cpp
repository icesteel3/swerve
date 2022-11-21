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
  void getDRIFTAmt(driftX, driftY) {
    if (driftY > 0) {          // top-half
      if (driftY >= .5) {
        frontLeftAmt = driftX+driftY;
        
    }
  }
}
