#include<stdio.h>

int main()

{
	
	float m,v,KE;
	printf("The mass is in kg");
	scanf("%f",&m);
	printf("The velocity is in m/s");
	scanf("%f",&v);
	
	KE=0.5*m*v*v;
	printf("The kinetic energy is in joule %f",KE);
	return -0;
}
