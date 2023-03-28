///CAMPAINHA DE LED.

int led = 12; // Variávl led referente a entrada 12.
int botao = 9; // Variáel botão referente a entrada 9.

//Variáel que conterá os estados do botão (0 LOW, 1 HIGH).
int estadoBotao = 0;

void setup()
{
  //Definindo digital 12 como saida.
  pinMode(led,OUTPUT);
  //Definindo digital 9 como entrada.
  pinMode(botao,INPUT);
}

void loop()
{
  estadoBotao = digitalRead(botao);
  
  //Botão precionado, acende led repetidamente uma vez por segundo.
  if (estadoBotao == HIGH) {
    digitalWrite(led,HIGH); 
    delay(1000);
    digitalWrite(led,LOW);
    delay(1000);
    digitalWrite(led,HIGH);
    delay(1000);
    digitalWrite(led,LOW);
    delay(1000);
    digitalWrite(led,HIGH);
    delay(300);
  } 
  
  //Botão não precionado, apaga o led.
  else {
    digitalWrite(led,LOW); 
  }
}