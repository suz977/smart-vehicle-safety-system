#include "safety.h"
#include <assert.h>
#include <stdio.h>
static SensorData s(double dist,double speed,double accel,int ir){SensorData d={dist,speed,accel,ir,1,1,1};return d;}
int main(void){SensorData a=s(100,20,0,0);assert(evaluate_safety(&a).state==SAFE);SensorData b=s(3,35,0,1);assert(evaluate_safety(&b).state==WARNING);SensorData c=s(100,20,-5,0);assert(evaluate_safety(&c).state==CAUTION);SensorData d=s(-1,20,0,0);assert(evaluate_safety(&d).state==SENSOR_FAULT);SensorData e=s(100,20,0,0);e.distance_sensor_ok=0;assert(evaluate_safety(&e).state==SENSOR_FAULT);puts("All safety logic tests passed.");return 0;}
