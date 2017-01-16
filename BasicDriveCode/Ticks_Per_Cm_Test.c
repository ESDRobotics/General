#include "kipr/botball.h"
#include "Ticks_Per_Cm_Test.h"
#include <stdio.h>

int main() {
    drive(100, 100, forward);

    return 0;
}

void drive(int speed, int cm_to_run, int direction) {
    int ticks_to_run = ticks_per_cm * cm_to_run;

    clear_motor_position_counter(left_motor);
    while(abs(get_motor_position_counter(left_motor)) < ticks_to_run) {
        motor(left_motor, speed*l_motor_factor*direction);
        motor(right_motor, speed*r_motor_factor*direction);
        msleep(50);

        printf("Ticks: %d", get_motor_position_counter(left_motor));
        /*
            %d = integers
            %f = decimal numbers
        */
    }

    ao();
}
