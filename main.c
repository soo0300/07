#include<stdio.h>
#include<stdlib.h>

int main(void){
	int i;
	for(i=0; i<5; i++){
		int temp=1;
		printf("temp: %d\n",temp);
		temp++;
		/*temp 변수가 생성 소멸을 반복*/
	}
	
	int temp2;
	/*의도한대로 코드가 돌아가려면 temp2변수를 생존하게 끔*/
	for(i=0; i<5; i++){
		printf("temp2: %d\n",temp2);
		temp2++;
	}
	return 0;

	
}
