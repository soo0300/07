#include<stdio.h>
#include<stdlib.h>

int main(void){
	int i;
	for(i=0; i<5; i++){
		int temp=1;
		printf("temp: %d\n",temp);
		temp++;
		/*temp ������ ���� �Ҹ��� �ݺ�*/
	}
	
	int temp2;
	/*�ǵ��Ѵ�� �ڵ尡 ���ư����� temp2������ �����ϰ� ��*/
	for(i=0; i<5; i++){
		printf("temp2: %d\n",temp2);
		temp2++;
	}
	return 0;

	
}
