#include <stdio.h>
#include <conio.h>
#include <math.h>

void go()
{
    double height, height_meter, velocity, rotation_period;

    printf("\n [+] - Height(km) of the satellite from earth's surface : ");

    scanf("%lf", &height);

    // taking height to meters
    height_meter = height * 1000;

    velocity = sqrt(9.8*(6400000+height_meter)) / 1000;
    rotation_period = 2*3.1416*sqrt(pow(6400000+height_meter, 3)/(9.8*6400000*6400000))/3600;

    printf("\n\n [*] - Height from earth's surface : %lf km \n", height);
    printf("\n [*] - Velocity                    : %lf km/s \n", velocity);
    printf("\n [*] - Rotation period             : %lf Hours \n", rotation_period);

}


int main()
{
    printf("\n\t***  Satellite Velocity Calculator  ***\n");
    go();
    getch();
	return 0;
}
