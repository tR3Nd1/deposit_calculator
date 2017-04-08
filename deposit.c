#include <stdio.h>

int check (int inmoney, int time)
{
	if (inmoney >= 10000 && time <=365){
		return 0;
	}
	else return 1;
}


void check_per (int inmoney, int *percent)
{
	if (inmoney <= 100000 && inmoney >= 10000){
		*percent = 0;
	}
	else{
		*percent = 1;
	}
}


int main ()
{
	int inmoney, time, percent;
	float outmoney;
	do {	
		printf ("Введите сумму вклада:");
		scanf ("%d", &inmoney);	
		printf ("Введите время вклада:");
		scanf ("%d", &time);
	} while (check(inmoney, time)==1);

	
	check_per(inmoney, &percent);	
	if (percent == 0){
		if (time >= 0 && time <= 30){
			outmoney = inmoney*(9/10) - inmoney;
			printf ("%f", outmoney);
		}
		if (time >= 31 && time <= 120){
			outmoney = (inmoney/100)*2;
			printf ("%f", outmoney);
		}
		if (time >= 121 && time <= 240){
			outmoney = (inmoney/100)*6;
			printf ("%f", outmoney);
		}
		if (time >= 241 && time <= 365){
			outmoney = (inmoney/100)*12;
			printf ("%f", outmoney);
		}
	}
	else {
		if (time >= 0 && time <= 30){
			outmoney = inmoney*(9/10) - inmoney;
			printf ("%f", outmoney);
		}
		if (time >= 31 && time <= 120){
			outmoney = (inmoney/100)*3;
			printf ("%f", outmoney);
		}
		if (time >= 121 && time <= 240){
			outmoney = (inmoney/100)*8;
			printf ("%f", outmoney);
		}
		if (time >= 241 && time <= 365){
			outmoney = (inmoney/100)*15;
			printf ("%f", outmoney);
		}
	}



return 0;
}
