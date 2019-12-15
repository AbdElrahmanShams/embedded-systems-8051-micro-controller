#include <reg51.h>
#include<mcs51/8051.h>

void wait(){
	int i;
	
	for (i = 0; i < 100 ;++i);
}

int main(){
	
int i = 0;
int j;	
char A[10] = {0x01,0x4f,0x12,0x06,0x4c,0x24,0x20,0x0f,0x00,0x0c};
	
	while(1){
		
		if (i == 10)
			i = 0;
		
		P2 = A[i++];
		
		for(j = 0; j < 1000; ++j){
			wait();
		}
	}
	
}