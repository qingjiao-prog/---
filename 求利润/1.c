#include<stdio.h>

int main() {
	double profit = 0;
	double bonus = 0;
	scanf_s("%d",&profit);
	
	//if-else 从上往下看，条件是从上往下增加的;
	//有重复的可令一个变量来代替，如bonus1=10000*0.1;bonus2=bonus1+10000*0.075;
	if (profit < 10000) {
		bonus = profit * 10;
	}
	else if (profit < 20000) {
		bonus = 10000 * 10+(profit-10000)*0.075;
	}
	else if (profit < 30000) {
		bonus = 10000 * 10 + 10000 * 0.075 +(profit - 20000) * 0.05;
	}

	return 0;
}