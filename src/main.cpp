#include <Arduino.h>
#include <Bounce2.h>

Bounce btn = Bounce();


#define led 4
#define pinBotao 23
//bool estadoAnteriorB = 0;
//int contagem = 0;
//bool estadoAtualB;
bool estadoLed;



void setup() {
  pinMode(led, OUTPUT);
  //pinMode(pinBotao, INPUT_PULLUP);
  btn.attach( pinBotao ,  INPUT_PULLUP ); 
  Serial.begin(115200);

}

void loop() {

//  estadoAtualB = digitalRead(pinBotao);
//  
//
//  if(estadoAnteriorB == 1 && estadoAtualB == 0){ 
//    contagem++;
//    Serial.println(contagem);
//    estadoLed=!estadoLed;
//  }
//    
//
//
//  estadoAnteriorB = estadoAtualB;
//
//  digitalWrite(led, estadoLed);


//ex. 1 bounce
//  btn.update();
//  
//
//  if (btn.fell()){
//    estadoLed =! estadoLed;
//  }
//  
//  digitalWrite(led, estadoLed);

//ex. 2 bounce


btn.update();

if(btn.fell()){
  if(btn.currentDuration)

}
 

  
  //qualquer alteração
  //Serial.println(btn.changed());
  //delay(1000);

  //retorna 1 quando o botão foi pressionado
  //Serial.println(btn.fell());

  //retorna o tempo do estado atual do botão
  //Serial.println(btn.currentDuration());
}

