#include <stdio.h>
#include <conio.h>

main()
{
    printf("\n\t***  Satellite Velocity Calculator  ***\n");

    double height, v, t;

    printf("\n [+] - Height(km) of the satellite from earth's surface : ");
    scanf("%lf", &height);

    // taking height to meters
    height = height * 1000;

    v = sqrt(9.8*(6400000+height)) / 1000;
    printf("\nVelocity         : %lf km/s\n", v);

    t = 2*3.1416*sqrt(pow(6400000+height, 3)/(9.8*6400000*6400000))/3600;
    printf("\nRotation period  : %lf Hours\n", t);

    getch();
	return 0;
}
