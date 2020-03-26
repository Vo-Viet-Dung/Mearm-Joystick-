#include<Servo.h>
Servo servo3;
Servo servo6;
Servo servo9;
Servo servo5;
int bientroX = A4 ; 
int bientroY = A5 ; 
int bientroX1 = A2 ; 
int bientroY1 = A3 ;
int button =2;
int button1 =3;
float tien = 1 ;
float lui = -1;
int a[4];

//-----------------------------------------------------------------    
void setup ()
{
      for(int i=0 ; i<4 ; i++)
      {
          a[i]=90; 
      }
      servo3.attach(3);
      pinMode(bientroX,INPUT);
      servo6.attach(6);
      pinMode(bientroY,INPUT);
      servo9.attach(7);
      pinMode(bientroX1,INPUT);
      servo5.attach(5);
      pinMode(bientroY1,INPUT);
      pinMode(button,INPUT);
      pinMode(button1,OUTPUT);
      Serial.begin(9600);
//      servo3.write(90);
//      servo5.write(90);
//      servo6.write(90);
//      servo9.write(90);

}
//-------------------------------------------------------------------

void loop ()
{
              int x = analogRead(bientroX);  // doc gia tri cua truc X
              int y = analogRead(bientroY);  // doc gia tri cua truc Y



//              int KEY = digitalRead(button);  // doc gia tri cua nut nhan
// ------------------------------------------------------------------
//@cap
//------------------------------------------------------------             
//              x=map(x,0,1023,0,180);
              
              if( x>700 && x<=1023)
              {
                a[0]=a[0]-2;
                if(a[0] < 0)
                {
                  a[0]=0;
                }
                servo3.write(a[0]);
              }
              else if(x<300 && x >=0)
              {
                  a[0]=a[0]+2;
                  if(a[0]>180)
                  {
                    a[0]=180;
                  }
                  servo3.write(a[0]);
              }
              else
              {
                  delay(10);
              }
                            
//-----------------------------------------------------       
//@quay trai-phai
//------------------------------------------------------       
              
              
//              y=map(y,1023,0,0,1023);
              if( y>700 && y<=1023)
              {
                a[1]=a[1]+lui;
                if(a[1] < 0)
                {
                  a[1]=0;
                }
                servo9.write(a[1]);
              }
              else if(y<300 && y >=0)
              {
                  a[1]=a[1]+tien;
                  if(a[1]>180)
                  {
                    a[1]=180;
                  }
                  servo9.write(a[1]);
              }
              else
              {
                  delay(10);
              }
//---------------------------------------------------------------
              
               int x1 = analogRead(bientroX1);  // doc gia tri cua truc X
              int y1= analogRead(bientroY1);  // doc gia tri cua truc Y
//              int KEY = digitalRead(button);  // doc gia tri cua nut nhan
//----------------------------------------------------------------
//              x1=map(x1,1023,0,0,1023);
              if( x1>700 && x1<=1023)
              {
                a[2]=a[2]+tien;
                if(a[2]>180)
                  {
                    a[2]=180;
                  }
                servo5.write(a[2]);
                
              }
              else if(x1<300 && x1 >=0)
              {
                  a[2]=a[2]+lui;
                  if(a[2] < 0)
                {
                  a[2]=0;
                }
                  servo5.write(a[2]);
                  
              }
              else
              {
                 delay(10);
              }            
//------------------------------------------------------------         
               Serial.println(x);
//              y1=map(y1,1023,0,0,1023);
              if( y1>700 && y1<=1023)
              {
                a[3]=a[3]+lui;
                if(a[3] < 0)
                {
                  a[3]=0;
                }
                servo6.write(a[3]);
                
              }
              else if(y1<300 && y1 >=0)
              {
                  a[3]=a[3] + tien;
                  if(a[3]>180)
                  {
                    a[3]=180;
                  }
                  servo6.write(a[3]);
                  
              }
              else 
              {
                  delay(10);
              }
  }
