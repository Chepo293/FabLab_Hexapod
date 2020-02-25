void setup() {
  Serial.begin(9600);
  Serial1.begin(9600);  
  
  /*Reset();
  
  /*Giro_Menos_45();
  delay(450);
  Giro_Menos_45();
  delay(450);//*/
  
  /*Reset();
  delay(800);
  Paso_Adelante();
  delay(330);
  Paso_Adelante();
  delay(330);
  Paso_Adelante();
  delay(330);
  Paso_Adelante();
  delay(330);
  Reset();//*/
  
}

void Paso_Adelante() {
  Serial1.println("#2P1900#27P1900#10P1900#4P1090#28P1690#9P1320#32P1300#5P1500#24P1500T390");
  delay(500);
  Serial1.println("#2P1500#27P1500#10P1500T390");
  delay(500);
  Serial1.println("#31P1900#6P1900#23P1900#32P1700#5P1100#24P1900#4P1500#28P1500#9P1500T390");
  delay(500);
  Serial1.println("#31P1500#6P1500#23P1500T390");
}

void Giro_Menos_45() {
  Serial1.println("#2P1900#27P1900#10P1900#4P1200#28P1200#9P1200T400");
  delay(395);
  Serial1.println("#2P1500#27P1500#10P1500T400");
  delay(395);
  Serial1.println("#31P1900#6P1900#23P1900#4P1500#28P1500#9P1500T400");
  delay(395);
  Serial1.println("#31P1500#6P1500#23P1500T400");
}

void Giro_Mas_45() {
  Serial1.println("#31P1900#6P1900#23P1900#32P1800#5P1800#24P1800T800");
  delay(800);
  Serial1.println("#31P1500#6P1500#23P1500T800");
  delay(800);
  Serial.println("#2P1900#27P1900#10P1900#32P1500#5P1500#24P1500T800");
  delay(800);
  Serial1.println("#2P1500#27P1500#10P1500T800");
}

void Paso_Atras() {
  Serial1.println("#2P1900#27P1900#10P1900#4P1800#28P1200#9P1800#32P1500#5P1500#24P1500T800");
  delay(800);
  Serial1.println("#2P1500#27P1500#10P1500T800");
  delay(800);
  Serial1.println("#31P1900#6P1900#23P1900#32P1200#5P1800#24P1200#4P1500#28P1500#9P1500T800");
  delay(800);
  Serial1.println("#31P1500#6P1500#23P1500T800");
  delay(800);
}



void Reset() {
  Serial1.println("#2P1500#3P1500#4P1500#5P1500#6P1500#7P1500#8P1500#9P1500#10P1500#11P1500#22P1500#23P1500#24P1500#25P1500#26P1500#27P1500#28P1500#29P1500#30P1500#31P1500#32P1500D1000D100");
}

void loop() {
  /*Giro_Menos_45();
  delay(925);//*/
}
