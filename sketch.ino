char a[6][5]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',',',' ','.','\''}, txt[100]={"\0"};
int x, y, i = 0, j = 0, p = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  Serial.println("Row:  0  Column: 0");
}

void loop() {
  // put your main code here, to run repeatedly:
  x = analogRead(A0);
  y = analogRead(A1);
  if  (x > 700 && y < 700) {i = ((i+1)%6); Serial.print("Row:  ");Serial.print(i);Serial.print("  Column: ");Serial.print(j);Serial.print("   Present letter: ");Serial.println(a[i][j]);}
  if  (x < 700 && y > 700) {j = ((j+1)%5); Serial.print("Row:  ");Serial.print(i);Serial.print("  Column: ");Serial.print(j);Serial.print("   Present letter: ");Serial.println(a[i][j]);}
  if  (x > 700 && y > 700) {txt[p] = a[i][j]; p++; Serial.println(txt); i = 0; j = 0;}
  delay(1500);
}
