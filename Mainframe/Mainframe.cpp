// Mainframe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;
bool initialTest();
bool sensorsWorking();
bool roverWorking();
bool radioWorking();
bool radioPacketTest();
void detectLaunch();
/*
Program execution starts and begins here
*/
int main()
{
    cout << "Starting\n";
    if (initialTest() == true) {
        cout << "Initial test passed\n";
    }
    else {
        cout << "Something failed: ";
        if (!sensorsWorking()) {
            cout << "Sensors/sensor system failed.\n";
        } if (!roverWorking()) {
            cout << "Rover/rover system failed. (Blame YK)\n";
        } if(!radioWorking()){
            cout << "Radio transmitter failed.";
        } if (!radioPacketTest()&&radioWorking()) {
            cout << "Radio communication failed. No need to disassember the satellite (Likely a reciever fault/too far away)";
        }
    }
    return 0;
}
/*
Function to test all the hardware components.
Returns true if everything is working.
Returns if something(s) is(/are) not working.
*/
bool initialTest() {
    if (sensorsWorking()&&roverWorking()&&radioWorking()&&radioPacketTest()) {
        return true;
    }
    else {
        return false;
    }
}
/*
Function to test if all the
sensors in the satellite are 
working.
*/
bool sensorsWorking() {

}
/*
If this returns as false,
blame YK for not making
the rover perfect.
*/
bool roverWorking() {

}
/*
Tests if the radio transmitter
is working. If this doesn't work,
the satellite will not communicate
to the GROUND station. Worry not,
this will blink a (Radio isn't working)
light built somewhere in the satellite.
*/
bool radioWorking() {

}
/*
  Tests by sending a packet
  to the reciever over radio
  if this fails, then it is
  likely because the GROUND
  station's radio is
  unreachable.
 */
bool radioPacketTest() {

}
