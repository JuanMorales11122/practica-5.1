#include <Keypad.h>
#define esperar delay(1000);
char A=10,B=11,C=12,D=13,E=2,F=3,G=4;
char D1 = 5;
const byte filas = 4;
const byte columnas = 4;
char letras[filas][columnas]= {
{'1','2','3','A'},
{'4','5','6','B'},
{'7','8','9','C'},
{'*','0','#','D'}

};

byte pinesf[filas] = {A0,A1,A2,A3};
byte pinesc[columnas] = {6,7,8,9};
Keypad teclado = Keypad(makeKeymap(letras),pinesf,pinesc,filas,columnas);
char estado;

void setup(){
Serial.begin(9600);
}

void loop(){
estado = teclado.getKey();
Serial.println(estado);

if(estado == '1'){
numero1;
esperar;
apagar;
}

if(estado == '2'){
numero2;
esperar;
apagar;
}

if(estado == '3'){
numero3;
esperar;
apagar;
}

if(estado == '4'){
numero4;
esperar;
apagar;
}

if(estado == '5'){
numero5;
esperar;
apagar;
}

if(estado == '6'){
numero6;
esperar;
apagar;
}

 if(estado == '7'){
numero7;
esperar;
apagar;
}

 if(estado == '8'){
numero8;
esperar;
apagar;
}
 
 if(estado == '9'){
numero9;
esperar;
apagar;
}
 

 if(estado == '0'){
numero0;
esperar;
apagar;
}  

 if(estado == 'A'){
letraA;
esperar;
apagar;
}  

 if(estado == 'B'){
letraB;
esperar;
apagar;
}  
  
 if(estado == 'C'){
letraC;
esperar;
apagar;
}  
  
 if(estado == 'D'){
letraD;
esperar;
apagar;
}  
  
 if(estado == '#'){
letraE;
esperar;
apagar;
}
  
 if(estado == '*'){
letraF;
esperar;
apagar;
}  
  
}


//FUNCIONES

void numero1(){
 digitalWrite(B,HIGH);
 digitalWrite(C,HIGH);
 digitalWrite(D1,HIGH);
}
void numero2(){
  digitalWrite(A,HIGH);
  digitalWrite(B,HIGH);
  digitalWrite(D,HIGH);
  digitalWrite(E,HIGH);
  digitalWrite(G,HIGH);
  digitalWrite(D1,HIGH);
}
void numero3(){
  digitalWrite(A,HIGH);
  digitalWrite(B,HIGH);
  digitalWrite(C,HIGH);
  digitalWrite(D,HIGH);
  digitalWrite(G,HIGH);
  digitalWrite(D1,HIGH);
}
void numero4(){
  digitalWrite(B,HIGH);
  digitalWrite(C,HIGH);
  digitalWrite(F,HIGH);
  digitalWrite(G,HIGH);
  digitalWrite(D1,HIGH);
}
void numero5(){
  digitalWrite(A,HIGH);
  digitalWrite(C,HIGH);
  digitalWrite(D,HIGH);
  digitalWrite(F,HIGH);
  digitalWrite(G,HIGH);
  digitalWrite(D1,HIGH);
}
void numero6(){
  digitalWrite(A,HIGH);
  digitalWrite(C,HIGH);
  digitalWrite(D,HIGH);
  digitalWrite(E,HIGH);
  digitalWrite(F,HIGH);
  digitalWrite(G,HIGH);
  digitalWrite(D1,HIGH);
}
void numero7(){
  digitalWrite(A,HIGH);
  digitalWrite(B,HIGH);
  digitalWrite(C,HIGH);
  digitalWrite(D1,HIGH);
}
void numero8(){
  digitalWrite(A,HIGH);
  digitalWrite(B,HIGH);
  digitalWrite(C,HIGH);
  digitalWrite(D,HIGH);
  digitalWrite(E,HIGH);
  digitalWrite(F,HIGH);
  digitalWrite(G,HIGH);
  digitalWrite(D1,HIGH);
}

void numero9(){
  digitalWrite(A,HIGH);
  digitalWrite(B,HIGH);
  digitalWrite(C,HIGH);
  digitalWrite(D,HIGH);
  digitalWrite(F,HIGH);
  digitalWrite(G,HIGH);
  digitalWrite(D1,HIGH);
}
void numero0(){
  digitalWrite(A,HIGH);
  digitalWrite(B,HIGH);
  digitalWrite(C,HIGH);
  digitalWrite(D,HIGH);
  digitalWrite(E,HIGH);
  digitalWrite(F,HIGH);
  digitalWrite(D1,HIGH);
}
void letraA(){
  digitalWrite(A,HIGH);
  digitalWrite(B,HIGH);
  digitalWrite(C,HIGH);
  digitalWrite(F,HIGH);
  digitalWrite(E,HIGH);
  digitalWrite(G,HIGH);
  digitalWrite(D1,HIGH);
}
void letraB(){
  digitalWrite(C,HIGH);
  digitalWrite(D,HIGH);
  digitalWrite(E,HIGH);
  digitalWrite(F,HIGH);
  digitalWrite(G,HIGH);
  digitalWrite(D1,HIGH);
}
void letraC(){
  digitalWrite(A,HIGH);
  digitalWrite(D,HIGH);
  digitalWrite(E,HIGH);
  digitalWrite(F,HIGH);
  digitalWrite(D1,HIGH);
}
void letraD(){
  digitalWrite(B,HIGH);
  digitalWrite(C,HIGH);
  digitalWrite(D,HIGH);
  digitalWrite(E,HIGH);
  digitalWrite(G,HIGH);
  digitalWrite(D1,HIGH);
}
void letraE(){
  digitalWrite(A,HIGH);
  digitalWrite(D,HIGH);
  digitalWrite(E,HIGH);
  digitalWrite(F,HIGH);
  digitalWrite(G,HIGH);
  digitalWrite(D1,HIGH);
}
void letraF(){
  digitalWrite(A,HIGH);
  digitalWrite(E,HIGH);
  digitalWrite(F,HIGH);
  digitalWrite(G,HIGH);
  digitalWrite(D1,HIGH);
}
void apagar(){
  digitalWrite(A,LOW);
  digitalWrite(B,LOW);
  digitalWrite(C,LOW);
  digitalWrite(D,LOW);
  digitalWrite(E,LOW);
  digitalWrite(F,LOW);
  digitalWrite(G,LOW);
  digitalWrite(D1,LOW);
}

