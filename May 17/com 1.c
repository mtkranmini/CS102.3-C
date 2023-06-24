#include <stdio.h>
#include <stdlib.h>

int main()
{
    //01
    int age;
    printf("HI, HOW OLD ARE YOU?");
    scanf("%d",&age);

    printf(" \n\n WELCOME %d\nLET\'S Be FRIEND!\n",age);

    printf("%5d%5d%5d\n\n", 2, 4,8);	//Right Align
	printf("%5d%5d%5d\n\n", 3, 9,27);	//Right Align
	printf("%5d%5d%5d\n\n", 4, 16,64);	//Right Align
	printf("\n\n\n");

    int x;
	float y;
	printf("Input  distance travelled in m: ");
	scanf("%d",&x);
	printf("Input  Time taken in s: ");
	scanf("%f", &y);
	printf("Average speed (m/s) %.3f ",x/y);
	printf("\n");

    float F, C;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &F); C = (5.0/9.0) * (F - 32);
    printf("\nTemperature in Celsius: %f\n", C);

    //float avaragespeed,distancetravelled,timetaken;
//    printf("enter distance");
//    scanf("%f",&distancetravelled);
//    printf("enter the time taken ");
//    scanf("%f",&timetaken);
//    avaragespeed=distancetravelled/timetaken;
//    printf("average speed is %.2f",avaragespeed);


    float avaragespeed,distancetravelled,timetaken;
    printf("enter distance");
    scanf("%d",&distancetravelled);
    printf("enter the time taken ");
    scanf("%d",&timetaken);
    avaragespeed=distancetravelled/timetaken;
    printf("average speed is %d",avaragespeed);



}
