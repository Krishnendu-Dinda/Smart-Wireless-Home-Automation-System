#include<reg51.h>

sbit led1 = P2^0;
sbit led2 = P2^1;
unsigned char x;

void blt_init(){

TMOD= 0x20; //TIMER 1 ,MODE 2.

	SCON = 0x50;  //16-BIT TIMER MODE .

	TH1=0xFD; // BAUDRATE 9600 .

	TR1 = 1;  //TIMER 1 ON .


}
void main(){
	
	

  blt_init();
	P2=0;
	while(1){
while(RI==0);
	RI=0;
x= SBUF;

		if(x == 'A'){
		
		led1=1;
		}
			else if(x == 'B'){
			
			led1=0;
			
			}
		else if(x == 'C'){
			
			led2=1;
			
			}else if(x == 'D'){
			
			led2=0;
			
			}
			else{}
		}
			
	}