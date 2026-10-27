#ifndef SAFETY_H
#define SAFETY_H
typedef enum { SAFE = 0, CAUTION, WARNING, SENSOR_FAULT } SafetyState;
typedef struct { double distance_m, speed_kmh, acceleration_ms2; int ir_obstacle, distance_sensor_ok, motion_sensor_ok, speed_sensor_ok; } SensorData;
typedef struct { SafetyState state; double stopping_distance_m, ttc_s; int buzzer_on, red_led_on, amber_led_on, green_led_on; const char *message; } SafetyResult;
SafetyResult evaluate_safety(const SensorData *data);
const char *safety_state_name(SafetyState state);
#endif
