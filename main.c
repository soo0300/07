#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int flag=1;
	int y; 
	while(flag!=0){
		/* 
		int y; 
		y를 지역변수로 선언하면 while 문 밖에서 
		y 포함한 코드에서 오류남
		*/
		y=3;
		flag=0;
	}
	y=4;
}
