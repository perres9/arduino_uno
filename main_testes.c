// Pisque um LED

void setup()
{
  // define a ponta do led como saída
  pinMode(11,OUTPUT);
}

void loop()
{
  //Acende o LED
  digitalWrite(11,HIGH);
  
  // Aguarda o intervalo de tempo em ms
  delay(1000);
  
  //Apaga o LED
  digitalWrite(11,LOW);
  
  //Aguarda o intervalo de tempo em ms
  delay(1000);
  )
  
