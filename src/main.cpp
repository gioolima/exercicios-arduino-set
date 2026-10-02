#include <Arduino.h>
#include <Bounce2.h>

Bounce btn = Bounce();


#define led 4
#define pinBotao 23
//bool estadoAnteriorB = 0;
//int contagem = 0;
//bool estadoAtualB;
bool estadoLed;
int duracao = 2000;
bool acionado = LOW;


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


//  btn.update();
//  if(!btn.read()){
//    if (btn.currentDuration() == 2000 && acionado == false){
//      estadoLed =! estadoLed;
//      acionado = true;
//
//    }    
//  }
//
//  if (btn.read()){
//    acionado = false;
//  }
//
//  digitalWrite(led, estadoLed);

// ex. 3 bounce

btn.update();
  
  if(btn.read() == LOW && btn.currentDuration() >= duracao && !acionado){
    digitalWrite(led, HIGH);
    delay(200);
    digitalWrite(led, LOW);
    
    acionado = true;
  }

  if (btn.rose()){
    if (!acionado) {
      estadoLed = !estadoLed;
      digitalWrite(led, estadoLed);
    }
    acionado = false; 

  }
  //qualquer alteração
  //Serial.println(btn.changed());
  //delay(1000);

  //retorna 1 quando o botão foi pressionado
  //Serial.println(btn.fell());

  //retorna o tempo do estado atual do botão
  //Serial.println(btn.currentDuration());
}

