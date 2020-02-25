void setup() {
  Serial.begin(9600);
  Serial1.begin(9600);   
  
  Reset();
  
  /*Reset();
  delay(450);
  Inicio_Paso();
  delay(370);
  Paso_Adelante();
  delay(100);
  Paso_Adelante();
  delay(100);
  Saludo();
  delay(450);
  Paso_Adelante();
  delay(100);
  Paso_Adelante();  
  Fin_Paso();
  //*/  
}

void Giro_Menos_45() {
  Serial1.println("#2P2100#27P2100#10P2100#4P1200#28P1800#9P1200T450");
  delay(450);
  Serial1.println("#2P2000#27P2000#10P2000T385");
  delay(370);
  Serial1.println("#31P2100#6P2100#23P2100#4P1500#28P1500#9P1500T450");
  delay(370);
  Serial1.println("#31P2000#6P2000#23P2000T385");
}

void Saludo() {
  Serial1.println("#2P1200#3P1500#6P1200#7P1650#10P1200#11P1500#22P1500#23P1200#26P1650#27P1200#30P1500#31P1200T450");
  delay(550);
  Serial1.println("#4P1100#5P1200#28P1800#32P1900#10P2300#23P2400#11P550#22P550#2P1200#4P1100#3P1500#30P1500#31P1200T450");
  delay(495);
  Serial1.println("#2P2000#3P2000#31P2300#30P2200T1500");
  delay(1501);
  Serial1.println("#32P1650#4P900T300");
  delay(295);
  Serial1.println("#2P1200#3P1400#31P1500#30P1500T1700");
  delay(1701);
  Serial1.println("#4P1700#31P2100#30P2200T1700");
  delay(1701);
  Serial1.println("#32P1800#4P1200#2P2100#3P2200T1700");//
  delay(1701);
  Serial1.println("#2P1100#3P1500T450");
  delay(460);
  Serial1.println("#30P2200T100");
  delay(100);
  Serial1.println("#30P2000T100");
  delay(100);
  Serial1.println("#30P2200T100");
  delay(100);
  Serial1.println("#30P2000T100");
  delay(100);
  Serial1.println("#30P2200T100");
  delay(100);
  Serial1.println("#30P2000T100");
  delay(100);
  Serial1.println("#30P2200T100");
  delay(100);
  Serial1.println("#30P2000T100");
  delay(100);
  Serial1.println("#30P2200T100");
  delay(100);
  Serial1.println("#30P2000T100");
  delay(100);
  Serial1.println("#30P2200T100");
  delay(700);
  Serial1.print("#31P1100#30P1500T450");
  delay(500);
  Reset();
}

void Inicio_Paso() {
  Serial1.println("#2P2300#27P2300#10P2300#4P1100#28P1900#9P1100#32P1500#5P1500#24P1500T365");
}

void Fin_Paso() {
  Serial1.println("#4P1500#28P1500#9P1500#2P2000#27P2000#10P2000T365");
}

void Paso_Adelante() {  
  Serial1.println("#2P2000#27P2000#10P2000T385");
  delay(370);
  Serial1.println("#31P2300#6P2300#23P2300#32P1900#5P1100#24P1900#4P1500#28P1500#9P1500T365");
  delay(370);
  Serial1.println("#31P2000#6P2000#23P2000T365");
  delay(370);
  Serial1.println("#2P2300#27P2300#10P2300#4P1100#28P1900#9P1100#32P1500#5P1500#24P1500T365");
  delay(370);
}



void Reset() {
  Serial1.println("#2P2000#3P1000#4P1500#5P1500#6P2000#7P1000#8P1500#9P1500#10P2000#11P1000#22P1000#23P2000#24P1500#25P1500#26P1000#27P2000#28P1500#29P1500#30P1000#31P2000#32P1500D1000T400");
}

void loop() {
}
