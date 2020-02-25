void setup() {
  Serial1.begin(9600);
  
  //Reset();
  
  /*Serial1.println("#2P2300#10P2300#4P2000#9P1000T500");
  delay(505);
  Serial1.println("#2P2000#10P2000T100");
  delay(105);
  Serial1.println("#23P2300#31P2300#24P2000#32P1000T500");
  delay(505);
  Serial1.println("#23P2000#31P2000T100");
  delay(105);
  Serial1.println("#27P2300#10P2300#2P2300T100");
  delay(105);//*/
  //Serial1.println("#26P600#3P1700#2P1800T500");
  
}

void Crab() {
  
}

void Caminar() {
  Serial1.println("#2P2300#27P2300#10P2300#4P1300#28P1700#9P1300T1000#32P1300#5P1700#24P1300T520");
  delay(520);
  Serial1.println("#2P2000#27P2000#10P2000T520");
  delay(520);
  Serial1.println("#31P2300#6P2300#23P2300#4P1700#28P1300#9P1700#32P1700#5P1300#24P1700T520");
  delay(520);
  Serial1.println("#31P2000#6P2000#23P2000T520");
  delay(520);
}

void Accion1() {
  Serial1.println("#7P1700#3P1700#11P1700#22P1700#26P1700#30P1700#2P1300#6P1300#10P1300#23P1300#27P1300#31P1300T650");
  delay(650);
  Serial1.println("#5P1300#28P1700#22P1000#11P1000#23P2100#10P2100T650");
  delay(650);
  Serial1.println("#32P2100#31P2200#30P1800#4P1200#2P2000T650");
  delay(650);
  Serial1.println("#2P800#3P2200T600");//*/
  delay(600);
  Serial1.println("#30P2200T100");
  delay(100);
  Serial1.println("#30P1800T100");
  delay(100);
  Serial1.println("#30P2200T100");
  delay(100);
  Serial1.println("#30P1800T100");
  delay(100);
  Serial1.println("#30P2200T100");
  delay(100);
  Serial1.println("#30P1800T100");
  delay(100);
  Serial1.println("#30P2200T100");
  delay(100);
  Serial1.println("#30P1800T100");
  delay(100);
  Serial1.println("#30P2200T100");
  delay(100);
  Serial1.println("#30P1800T100");
  delay(100);
  Serial1.println("#30P2200T100");
  delay(100);
  Serial1.println("#30P1800T100");
  delay(600);
  Reset();
}

void Reset() {
  Serial1.println("#2P2000#3P1000#4P1500#5P1500#6P2000#7P1000#8P1500#9P1500#10P2000#11P1000#22P1000#23P2000#24P1500#25P1500#26P1000#27P2000#28P1500#29P1500#30P1000#31P2000#32P1500D1000T600");
}

void loop() {}
