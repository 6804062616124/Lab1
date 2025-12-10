#include <stdio.h>
int main(void) {
	
	int mid, final, q1, q2, lab, time;
	float Mid, Final, Q1, Q2, Lab, Time;
	
	scanf("%d %d %d %d %d %d", &mid, &final, &q1, &q2, &lab, &time);
	
	Mid = (mid * 30 / 100);
	Final = (final * 35 / 120);
	Q1 = (q1 * 12 / 60);
	Q2 = (q2 * 13 / 60);
	Lab = (lab * 5 / 16);
	Time = (time * 5 / 16);
	
	printf("%10s=%8d => %5.2f\n", "Mid", mid, Mid);
	printf("%10s=%8d => %5.2f\n", "Final", final, Final);
	printf("%10s=%8d => %5.2f\n", "Q1", q1, Q1);
	printf("%10s=%8d => %5.2f\n", "Q2", q2, Q2);
	printf("%10s=%8d => %5.2f\n", "Lab", lab, Lab);
	printf("%10s=%8d => %5.2f\n", "Sit", time, Time);
	
	printf("***** %.2f *****", Mid + Final + Q1 + Q2 + Lab + Time);
	
	return 0;
}
