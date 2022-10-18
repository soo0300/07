#include<stdio.h>
#include<stdlib.h>

int counter;
void set_counter(){
	counter=20;
} 
int main(void){
	printf("counter=%d\n",counter);
	set_counter();
	printf("counter=%d",counter);
	
	return 0;

	
}
