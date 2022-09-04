
#include "mbed.h"

 
  DigitalOut C(D2);
  DigitalOut D(D3);
  DigitalOut E(D4);
  DigitalOut F(D5);
  DigitalOut G(D6);
  DigitalOut H(D7);
  DigitalOut I(D8);
  DigitalOut J(D9);
  DigitalOut K(D10);
  DigitalOut L(D11);
  DigitalOut M(D12);
  DigitalOut N(D13);

  DigitalIn bton(A0);

int estado_BT0, anterior_BT0;
int estado_BT1, anterior_BT1;
int cuenta=0;


void PUERTOZ(int a){//
    int Z[12];
    for(int i=0; i<=11; i++){
    Z[i]=a%2;
    a=a/0b10; 
    } 
    C=Z[0];
    D=Z[1];
    E=Z[2];
    F=Z[3];
    G=Z[4];
    H=Z[5];
    I=Z[6];
    J=Z[7];
    K=Z[8];
    L=Z[9];
    M=Z[10];
    N=Z[11];
    }

void bt1(void){
    estado_BT1=bton;
    if(!estado_BT1 && anterior_BT1){
        PUERTOZ(cuenta);
        cuenta++;  
    }
    anterior_BT1 = estado_BT1;
}

int main()
{
   while (true) {
    bt1();
    }
    
}
