#define left_motor 0
#define right_motor 3
#define l_motor_factor 1
#define r_motor_factor 1
#define ticks 5500 // don't change
#define cm 70 // this will be different for each robot
#define ticks_per_cm ticks / cm
#define forward 1
#define backward -1

void drive(int speed, int cm_to_run, int direction);
