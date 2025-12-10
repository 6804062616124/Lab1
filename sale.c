#include <stdio.h>
int main(void) {
	
	float p1, p2, p3, total;
	float pro1, pro2, pro3;
	
	scanf("%f", &p1);
	total = total + p1;
	pro1 = total * 0.95;
	printf("%.2f \n", pro1);
	
	scanf("%f", &p2);
	total = total + p2;
	pro2 = total * 0.85;
	printf("%.2f \n", pro2);
	
	scanf("%f", &p3);
	total = total + p3;
	pro3 = total * 0.70;
	printf("%.2f \n", pro3);
	
	return 0;
}
