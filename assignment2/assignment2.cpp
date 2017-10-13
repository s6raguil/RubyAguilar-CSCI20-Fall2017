/* Ruby Aguilar
October 2, 2017
Assignment 2 the purpose is to a program that takes in a runner’s race time in minutes and seconds for a runner and computes 
and displays the speed in feet per seconds and meters per seconds. It should compare that to the first place times and tell 
the user the difference from the winner. Determine a runners splits for each ¼ mile.
*/

#include <iostream>
#include <string>
using namespace std;

class RunnerInfo {
    public:
        void SetTimeSec (int timeRunSec)
        void SetTimeMin (int timeRunMin)
        void SetDistFeet (double distRunFeet)
        void SetDistMet (double distRunMet)
        double GetSpeedFtPS () const;
        double GetSpeedMetPS () const;
        
    private: 
        int timeRunSec;
        int timeRunMin;
        int distRunFeet;
        int distRunMet;
};

void RunnerInfo::SetTime(int timeRunSecs) {
   timeRunSec = timeRunSec;  // timeRun refers to data member
   return;
}
void RunnerInfo::SetTime(int timeRunMin) {
   timeRunMin = timeRunMin;  // timeRun refers to data member
   return;
}

void RunnerInfo::SetDist(double distRunFeet) {
   distRunFeet = distRunFeet;
   return;
}

void RunnerInfo::SetDist(double distRunMet) {
   distRunMet = distRunMet;
   return;
}

double RunnerInfo::GetSpeedFtPS() const {
   return distRunFeet / timeRunSec; // feet / secs
}

double RunnerInfo::GetSpeedMetPS() const {
   return distRunMeters / timeRunSec; // meters / secs 
}


int main() {
   RunnerInfo runner1; // User-created object of class type RunnerInfo

   runner1.SetTime(360);
   runner1.SetDist()

   cout << "Runner's speed in ft per sec: " << runner1.GetSpeedFtPS() << endl;
   cout << "Runner's speed in Meters per sec: " << runner1.GetSpeedMetPS()<< endl;
}
    

