//Ders 1 //Sadece Araba
#include <SoftwareSerial.h>
SoftwareSerial BTSerial(6, 7); // TX | RX

int solileri = 3; //yön sıkıntılı diye değiştirdik
int solgeri = 2;  //yön sıkıntılı diye değiştirdik
int sagileri = 4;
int saggeri = 5;

void setup()
{
  Serial.begin(9600);
  BTSerial.begin(9600);
  pinMode(solileri,OUTPUT);
  pinMode(solgeri,OUTPUT);
  pinMode(sagileri,OUTPUT);
  pinMode(saggeri,OUTPUT);
}

void loop()
{
  /*
  if (BTSerial.available())
  {
    Serial.write(BTSerial.read());

  }
  */

  digitalWrite(solileri,1);
  digitalWrite(solgeri,0);
  digitalWrite(sagileri,1);
  digitalWrite(saggeri,0);
}



//Ders 2
#include <SoftwareSerial.h>
SoftwareSerial BTSerial(6, 7); // TX | RX

int solileri = 3; //yön sıkıntılı diye değiştirdik
int solgeri = 2;  //yön sıkıntılı diye değiştirdik
int sagileri = 4;
int saggeri = 5;

void setup()
{
  Serial.begin(9600);
  BTSerial.begin(9600);
  pinMode(solileri,OUTPUT);
  pinMode(solgeri,OUTPUT);
  pinMode(sagileri,OUTPUT);
  pinMode(saggeri,OUTPUT);
}

void loop()
{
  /*
  if (BTSerial.available())
  {
    Serial.write(BTSerial.read());

  }
  */

  ileri();
  delay(2000);
  geri ();
  delay(2000);
}

void ileri()
{
  digitalWrite(solileri,1);
  digitalWrite(solgeri,0);
  digitalWrite(sagileri,1);
  digitalWrite(saggeri,0);
}

void geri()
{
  digitalWrite(solileri,0);
  digitalWrite(solgeri,1);
  digitalWrite(sagileri,0);
  digitalWrite(saggeri,1);
}

void dur()
{
  digitalWrite(solileri,0);
  digitalWrite(solgeri,0);
  digitalWrite(sagileri,0);
  digitalWrite(saggeri,0);
}

void sol()
{
  digitalWrite(solileri,0);
  digitalWrite(solgeri,0);
  digitalWrite(sagileri,1);
  digitalWrite(saggeri,0);
}

void sag()
{
  digitalWrite(solileri,1);
  digitalWrite(solgeri,0);
  digitalWrite(sagileri,0);
  digitalWrite(saggeri,0);
}



//Ders 3
//bluetooth 6666
#include <SoftwareSerial.h>
SoftwareSerial BTSerial(6, 7); // TX | RX

int solileri = 3; //yön sıkıntılı diye değiştirdik
int solgeri = 2;  //yön sıkıntılı diye değiştirdik
int sagileri = 4;
int saggeri = 5;
char karakter;

void setup()
{
  Serial.begin(9600);
  BTSerial.begin(9600);
  pinMode(solileri,OUTPUT);
  pinMode(solgeri,OUTPUT);
  pinMode(sagileri,OUTPUT);
  pinMode(saggeri,OUTPUT);
}

void loop()
{
  
  if (BTSerial.available())
  {
    //Serial.write(BTSerial.read());

    karakter = BTSerial.read();
    Serial.println(karakter);
    if (karakter == 'F') ileri();
    else if (karakter == 'B') geri();
    else if (karakter == 'L') sol();
    else if (karakter == 'R') sag();
    else if (karakter == 'S') dur();
  }

}

void ileri()
{
  digitalWrite(solileri,1);
  digitalWrite(solgeri,0);
  digitalWrite(sagileri,1);
  digitalWrite(saggeri,0);
}

void geri()
{
  digitalWrite(solileri,0);
  digitalWrite(solgeri,1);
  digitalWrite(sagileri,0);
  digitalWrite(saggeri,1);
}

void dur()
{
  digitalWrite(solileri,0);
  digitalWrite(solgeri,0);
  digitalWrite(sagileri,0);
  digitalWrite(saggeri,0);
}

void sol()
{
  digitalWrite(solileri,0);
  digitalWrite(solgeri,0);
  digitalWrite(sagileri,1);
  digitalWrite(saggeri,0);
}

void sag()
{
  digitalWrite(solileri,1);
  digitalWrite(solgeri,0);
  digitalWrite(sagileri,0);
  digitalWrite(saggeri,0);
}



//Ders 4
#include <SoftwareSerial.h>
SoftwareSerial BTSerial(6, 7); // TX | RX

//vın ile gnd

int solileri = 3; //yön sıkıntılı diye değiştirdik //tn2
int solgeri = 2;  //yön sıkıntılı diye değiştirdik //tn1
int sagileri = 4; //tn3
int saggeri = 5; //tn4
int solhiz = 9; //ena
int saghiz = 10; //anb
char karakter;

void setup()
{
  Serial.begin(9600);
  BTSerial.begin(9600);
  pinMode(solileri,OUTPUT);
  pinMode(solgeri,OUTPUT);
  pinMode(sagileri,OUTPUT);
  pinMode(saggeri,OUTPUT);
  analogWrite(solhiz,150);
  analogWrite(saghiz,150);
}

void loop()
{
  
  if (BTSerial.available())
  {
    //Serial.write(BTSerial.read());

    karakter = BTSerial.read();
    Serial.println(karakter);
    if (karakter == 'F') ileri();
    else if (karakter == 'B') geri();
    else if (karakter == 'L') sol();
    else if (karakter == 'R') sag();
    else if (karakter == 'S') dur();
  }

}

void ileri()
{
  digitalWrite(solileri,1);
  digitalWrite(solgeri,0);
  digitalWrite(sagileri,1);
  digitalWrite(saggeri,0);
}

void geri()
{
  digitalWrite(solileri,0);
  digitalWrite(solgeri,1);
  digitalWrite(sagileri,0);
  digitalWrite(saggeri,1);
}

void dur()
{
  digitalWrite(solileri,0);
  digitalWrite(solgeri,0);
  digitalWrite(sagileri,0);
  digitalWrite(saggeri,0);
}

void sol()
{
  digitalWrite(solileri,0);
  digitalWrite(solgeri,0);
  digitalWrite(sagileri,1);
  digitalWrite(saggeri,0);
}

void sag()
{
  digitalWrite(solileri,1);
  digitalWrite(solgeri,0);
  digitalWrite(sagileri,0);
  digitalWrite(saggeri,0);
}



//Ders 5 
//Ultrasonic ile

#include <Ultrasonic.h>
Ultrasonic ultrasonic(12,11); // (Trig PIN,Echo PIN)

#include <SoftwareSerial.h>
SoftwareSerial BTSerial(6, 7); // TX | RX

//vın ile gnd

int solileri = 3; //yön sıkıntılı diye değiştirdik //tn2
int solgeri = 2;  //yön sıkıntılı diye değiştirdik //tn1
int sagileri = 4; //tn3
int saggeri = 5; //tn4
int solhiz = 9; //ena
int saghiz = 10; //anb
char karakter;

int mesafe;

void setup()
{
  Serial.begin(9600);
  BTSerial.begin(9600);
  pinMode(solileri,OUTPUT);
  pinMode(solgeri,OUTPUT);
  pinMode(sagileri,OUTPUT);
  pinMode(saggeri,OUTPUT);
  analogWrite(solhiz,150);
  analogWrite(saghiz,150);

  pinMode(8,OUTPUT);
  digitalWrite(8,1); //ultrasonic vcc 5 volt
  
}

void loop()
{
  mesafe = ultrasonic.Ranging(CM); // CM or INC
  Serial.print(mesafe); 
  Serial.println(" cm" );
  
  if (BTSerial.available())
  {
    //Serial.write(BTSerial.read());

    karakter = BTSerial.read();
    Serial.println(karakter);
    if (karakter == 'F') ileri();
    else if (karakter == 'B') geri();
    else if (karakter == 'L') sol();
    else if (karakter == 'R') sag();
    else if (karakter == 'S') dur();
  }

}

void ileri()
{
  digitalWrite(solileri,1);
  digitalWrite(solgeri,0);
  digitalWrite(sagileri,1);
  digitalWrite(saggeri,0);
  analogWrite(solhiz,250);
  analogWrite(saghiz,250);

  if (mesafe < 20)
  {
    analogWrite(solhiz,0);
    analogWrite(saghiz,0);
  }
}

void geri()
{
  digitalWrite(solileri,0);
  digitalWrite(solgeri,1);
  digitalWrite(sagileri,0);
  digitalWrite(saggeri,1);
  analogWrite(solhiz,150);
  analogWrite(saghiz,150);
}

void dur()
{
  digitalWrite(solileri,0);
  digitalWrite(solgeri,0);
  digitalWrite(sagileri,0);
  digitalWrite(saggeri,0);
}

void sol()
{
  digitalWrite(solileri,0);
  digitalWrite(solgeri,0);
  digitalWrite(sagileri,1);
  digitalWrite(saggeri,0);
  analogWrite(solhiz,150);
  analogWrite(saghiz,150);
}

void sag()
{
  digitalWrite(solileri,1);
  digitalWrite(solgeri,0);
  digitalWrite(sagileri,0);
  digitalWrite(saggeri,0);
  analogWrite(solhiz,150);
  analogWrite(saghiz,150);
}



//Ders 6 
//Ultrasonic ile

#include <Ultrasonic.h>
Ultrasonic ultrasonic(12,11); // (Trig PIN,Echo PIN)

#include <SoftwareSerial.h>
SoftwareSerial BTSerial(6, 7); // TX | RX

//vın ile gnd

int solileri = 3; //yön sıkıntılı diye değiştirdik //tn2
int solgeri = 2;  //yön sıkıntılı diye değiştirdik //tn1
int sagileri = 4; //tn3
int saggeri = 5; //tn4
int solhiz = 9; //ena
int saghiz = 10; //anb
char karakter;

int mesafe;

void setup()
{
  Serial.begin(9600);
  BTSerial.begin(9600);
  pinMode(solileri,OUTPUT);
  pinMode(solgeri,OUTPUT);
  pinMode(sagileri,OUTPUT);
  pinMode(saggeri,OUTPUT);
  analogWrite(solhiz,150);
  analogWrite(saghiz,150);

  pinMode(8,OUTPUT);
  digitalWrite(8,1); //ultrasonic vcc 5 volt
  
}

void loop()
{
  mesafe = ultrasonic.Ranging(CM); // CM or INC
  Serial.print(mesafe); 
  Serial.println(" cm" );
  
  if (BTSerial.available())
  {
    //Serial.write(BTSerial.read());

    karakter = BTSerial.read();
    Serial.println(karakter);
    if (karakter == 'F')
    {
      if (mesafe < 20)
      {
        sag();
        delay(500);
      }
      else
      {
        ileri();
        delay(100);
      }
    }
    else if (karakter == 'B') geri();
    else if (karakter == 'L') sol();
    else if (karakter == 'R') sag();
    else if (karakter == 'S') dur();
  }

}

void ileri()
{
  digitalWrite(solileri,1);
  digitalWrite(solgeri,0);
  digitalWrite(sagileri,1);
  digitalWrite(saggeri,0);
  analogWrite(solhiz,250);
  analogWrite(saghiz,250);
}

void geri()
{
  digitalWrite(solileri,0);
  digitalWrite(solgeri,1);
  digitalWrite(sagileri,0);
  digitalWrite(saggeri,1);
  analogWrite(solhiz,150);
  analogWrite(saghiz,150);
}

void dur()
{
  digitalWrite(solileri,0);
  digitalWrite(solgeri,0);
  digitalWrite(sagileri,0);
  digitalWrite(saggeri,0);
}

void sol()
{
  digitalWrite(solileri,0);
  digitalWrite(solgeri,0);
  digitalWrite(sagileri,1);
  digitalWrite(saggeri,0);
  analogWrite(solhiz,150);
  analogWrite(saghiz,150);
}

void sag()
{
  digitalWrite(solileri,1);
  digitalWrite(solgeri,0);
  digitalWrite(sagileri,0);
  digitalWrite(saggeri,0);
  analogWrite(solhiz,150);
  analogWrite(saghiz,150);
}



//Ders 7 
//Joystick ile
#include <Ultrasonic.h>
Ultrasonic ultrasonic(12,11); // (Trig PIN,Echo PIN)

#include <SoftwareSerial.h>
SoftwareSerial BTSerial(6, 7); // TX | RX

//vın ile gnd

int solileri = 3; //yön sıkıntılı diye değiştirdik //tn2
int solgeri = 2;  //yön sıkıntılı diye değiştirdik //tn1
int sagileri = 4; //tn3
int saggeri = 5; //tn4
int solhiz = 9; //ena
int saghiz = 10; //anb
char karakter;

int mesafe;

int x, y; //Joystick
bool dortlu = false;
int sayac;

void setup()
{
  Serial.begin(9600);
  BTSerial.begin(9600);
  pinMode(solileri,OUTPUT);
  pinMode(solgeri,OUTPUT);
  pinMode(sagileri,OUTPUT);
  pinMode(saggeri,OUTPUT);
  analogWrite(solhiz,150);
  analogWrite(saghiz,150);

  pinMode(8,OUTPUT);
  digitalWrite(8,1); //ultrasonic vcc 5 volt

  //Joystickin Buttonu 
  pinMode(7, INPUT_PULLUP); //şimdilik bluetooth ile aynı yerde

  pinMode(6,OUTPUT); //lamba 
  pinMode(13,OUTPUT); //lamba gnd
  digitalWrite(13,0); 
}

void loop()
{
  //Joystick
  //Serial.println(analogRead(A0));
  x = analogRead(A0);
  y = analogRead(A1);
  //Serial.println("X : " + String(x) + " " + "Y : " + String(y));
  //Joystickin Buttonu
  //Serial.println(digitalRead(7));
  
  mesafe = ultrasonic.Ranging(CM); // CM or INC
  Serial.print(mesafe); 
  Serial.println(" cm" );

  //Joystick
  if (x<480) geri();
  else if (x>540) ileri();
  else if (y<480) sol();
  else if (y>540) sag();
  else dur();

  //Joystick Button
  Serial.println(digitalRead(7));
  if(digitalRead(7)==0)
  {
    while(digitalRead(7)==0)
    {
      delay(5);
      
    }
    dortlu = !dortlu;
  }
  sayac = millis() / 500;
  if(dortlu==false)
  {
    digitalWrite(6, sayac % 2);
  }
  else
  {
    digitalWrite(6, 0);
  }
  


  //Bluetooth
  if (BTSerial.available())
  {
    //Serial.write(BTSerial.read());

    karakter = BTSerial.read();
    Serial.println(karakter);
    if (karakter == 'F')
    {
      if (mesafe < 20)
      {
        sag();
        delay(500);
      }
      else
      {
        ileri();
        delay(100);
      }
    }
    else if (karakter == 'B') geri();
    else if (karakter == 'L') sol();
    else if (karakter == 'R') sag();
    else if (karakter == 'S') dur();
  }

}

void ileri()
{
  digitalWrite(solileri,1);
  digitalWrite(solgeri,0);
  digitalWrite(sagileri,1);
  digitalWrite(saggeri,0);
  analogWrite(solhiz,250);
  analogWrite(saghiz,250);
}

void geri()
{
  digitalWrite(solileri,0);
  digitalWrite(solgeri,1);
  digitalWrite(sagileri,0);
  digitalWrite(saggeri,1);
  analogWrite(solhiz,150);
  analogWrite(saghiz,150);
}

void dur()
{
  digitalWrite(solileri,0);
  digitalWrite(solgeri,0);
  digitalWrite(sagileri,0);
  digitalWrite(saggeri,0);
}

void sol()
{
  digitalWrite(solileri,0);
  digitalWrite(solgeri,0);
  digitalWrite(sagileri,1);
  digitalWrite(saggeri,0);
  analogWrite(solhiz,150);
  analogWrite(saghiz,150);
}

void sag()
{
  digitalWrite(solileri,1);
  digitalWrite(solgeri,0);
  digitalWrite(sagileri,0);
  digitalWrite(saggeri,0);
  analogWrite(solhiz,150);
  analogWrite(saghiz,150);
}