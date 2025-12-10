#include <stdio.h>
int main(void) {
	
	float p1, p2, p3, total, vat;
	float pro1, pro2, pro3;
	
	scanf("%f", &p1);
	total = total + p1;
	pro1 = total * 0.95;
	vat = pro1 * 1.07;
	printf("%.2f \n", vat);
	
	scanf("%f", &p2);
	total = total + p2;
	pro2 = total * 0.85;
	vat = pro2 * 1.07;
	printf("%.2f \n", vat);
	
	scanf("%f", &p3);
	total = total + p3;
	pro3 = total * 0.70;
	vat = pro3 * 1.07;
	printf("%.2f \n", vat);
	
	return 0;
}
