int led =13;
int led2 = 12;
int boton = 2;
int boton2 = 7;
int estado = 0;
int estado2 = 0;

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(boton, INPUT);
  
  pinMode(led2, OUTPUT);
  pinMode(boton2, INPUT);
  
}

void loop()
{
 estado = digitalRead(boton);
 estado2 = digitalRead(boton2);
  //si
  if (estado == HIGH){
    digitalWrite(led,HIGH);
   
    
  }
  else if(estado2 == HIGH){
     digitalWrite(led2,HIGH);
  }
  //de lo contrario
  else{
  digitalWrite(led,LOW);
  digitalWrite(led2,LOW);
  }
}