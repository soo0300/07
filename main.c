#include<stdio.h>
#include<stdlib.h>

int inc(int counter); /*�Լ� ����!*/
int main(void){
	int i=5;
	printf("�Լ� ȣ�� �� i = %d\n",i);
	inc(i);
	printf("�Լ�ȣ�� ��1  i = %d\n",i);
	i=inc(i);
	printf("�Լ�ȣ�� ��2 i = %d\n",i);
		
	return 0;
	 
}
int inc(int counter){
	counter++;
	return counter;
}
