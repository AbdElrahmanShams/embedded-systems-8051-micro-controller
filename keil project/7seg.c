#include <reg51.h>

void wait(){
	int i;
	
	for (i = 0; i < 100 ;++i);
}

int main(){
	
int i = 0;
int j;	
char A[16] = {0x01,0x4f,0x12,0x06,0x4c,0x24,0x20,0x0f,0x00,0x0c,0x08,0x60,0x31,0x42,0x30,0x38};
	
	while(1){
		
		if (i == 16)
			i = 0;
		
		P2 = A[i++];
		
		for(j = 0; j < 1000; ++j){
			wait();
		}
	}
	
}