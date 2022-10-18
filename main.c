#include<stdio.h>
#include<stdlib.h>

int inc(int counter); /*함수 선언!*/
int main(void){
	int i=5;
	printf("함수 호출 전 i = %d\n",i);
	inc(i);
	printf("함수호출 후1  i = %d\n",i);
	i=inc(i);
	printf("함수호출 후2 i = %d\n",i);
		
	return 0;
	 
}
int inc(int counter){
	counter++;
	return counter;
}
