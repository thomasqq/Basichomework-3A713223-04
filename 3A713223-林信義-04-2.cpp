#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	int hour,min,sec,sectotol;
	
	printf("�п�J�`���:");
	scanf("%d",&sectotol);
	
	hour=sectotol/3600;
	min=(sectotol/60)-(hour*60);
	sec=sectotol-(min*60)-(hour*3600);
	
	printf("�����ɶ���:%d��%d��%d��\n",hour,min,sec);
	
	system("PAUSE");
	return 0;
}
