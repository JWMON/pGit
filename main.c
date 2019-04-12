#include <stdio.h>

void sub1();
void sub2();
void sub3();

int main(){
	void sub2(){
		for(int i=0; i<10; i++){
			for(int j=0; j<10; j++){
				printf("*");
			}
		printf("\n");
		}
	};
	
	sub1();
	sub2();
	sub3();
	return 0;
}

