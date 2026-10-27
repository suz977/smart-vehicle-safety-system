#include "safety.h"
#include <stdio.h>
int main(void){SensorData d[]={{45,40,.1,0,1,1,1},{12,35,-1,1,1,1,1},{4,30,-2.5,1,1,1,1},{18,25,-5.2,0,1,1,1},{-1,15,0,0,1,1,1}};const char*n[]={"Open road","Moderate obstacle","Close obstacle","Abrupt deceleration","Invalid distance"};for(unsigned i=0;i<sizeof d/sizeof d[0];i++){SafetyResult r=evaluate_safety(&d[i]);printf("%s: %s | stopping distance %.1f m | %s\n",n[i],safety_state_name(r.state),r.stopping_distance_m,r.message);}return 0;}
