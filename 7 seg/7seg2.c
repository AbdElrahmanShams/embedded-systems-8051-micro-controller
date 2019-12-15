#include <reg51.h>
#include<mcs51/8051.h>
#define UNITS 10
#define TENS 6

void wait(){
	int i;
	for (i = 0; i < 100 ;++i);
}

int main(){
	
int i = 0 , j = 0;
int k;	
char A[10] = {0x81,0xcf,0x92,0x86,0xcc,0xa4,0xa0,0x8f,0x80,0x8c};
	
	while(1){
		
		for (i = 0 ;i < 6; ++i){
			P2 = A[i];
			
			for(j = 0; j < 10; ++j){
				P1 = A[j];
			
				for(k = 0; k < 750; ++k){
					wait();
				}
			}
		
		}
	}
	
}