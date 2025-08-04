#include <assert.h>
#include <iostream>
using namespace std;

bool isInRange(float value, float min, float max, const string& message) {
  if (value < min || value > max) {
    cout << message << " out of range!\n";
    return false;
  }
  return true;
}

bool batteryIsOk(float temperature, float soc, float chargeRate) {
  bool temperatureOk = isInRange(temperature, 0, 45, "Temperature");
  bool socOk = isInRange(soc, 20, 80, "State of Charge");
  bool chargeRateOk = isInRange(chargeRate, 0, 0.8, "Charge Rate");

  return temperatureOk && socOk && chargeRateOk;
}
