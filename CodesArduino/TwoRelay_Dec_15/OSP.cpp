// #include "WProgram.h" // Arduino < 1.0
#include <Arduino.h> //Arduino >= 1.0
#include "OSP.h"

int step_resolution = 3200; 
int goto_delay = 20;
int dir1, step1, dir2, step2; 
int stepx;
int stepy;
int low;
int high;
int x_rev_set = 0;
int y_rev_set = 0;
float valx;
float valy;
float _pgrad_x;
float _pgrad_y;

int stepx_new;
int stepy_new;
float degsH;
float degsV;
float degsH_new;
float degsV_new;


OSP::OSP(){
    stopper=0;
}

void OSP::setMotorsPins(int step1, int dir1, int enable1, int step2, int dir2, int enable2)
{
	pinMode(step1, OUTPUT);  
  pinMode(dir1, OUTPUT); 
  pinMode(enable1, OUTPUT); 
  pinMode(step2, OUTPUT); 
  pinMode(dir2, OUTPUT);
  pinMode(enable2, OUTPUT); 
  
  digitalWrite(step1, LOW); 
  digitalWrite(step2, LOW); 
  digitalWrite(enable1, LOW); 
  digitalWrite(enable2, LOW); 
  delayMicroseconds(50); 
  digitalWrite(dir1, HIGH); 
  digitalWrite(dir2, HIGH); 

  
  Serial.println("Setting up Motor pins..done");
  
  digitalWrite(enable1, HIGH); 
  delay(100);
  digitalWrite(enable1, LOW); 
  digitalWrite(enable2, HIGH); 
  delay(100);
  digitalWrite(enable2, LOW); 
  delay(1000);
}


void OSP::init()
{
  low = 0;
  high = step_resolution; //Motor driver switch setting;

  _pgrad_x=(float)((float)(high-low)/360);
  _pgrad_y=(float)((float)(high-low)/180);

  stepx=0;
  stepy=0;
  low = 0;
  high = 0;
  x_rev_set = 0;
  y_rev_set = 0;
  valx = 0;
  valy = 0;
  _pgrad_x = 0;
  _pgrad_y = 0;
  stepx_new = 0;
  stepy_new = 0;
  degsH = 0;
  degsV = 0;
  degsH_new = 0;
  degsV_new = 0;
}

int OSP::getPX() //Steps per revolution on X axis
{
  return x_rev_set = step_resolution; //Change this as per the switch setting on the driver
}


int OSP::getPY() //Steps per revolution on Y axis
{
  return y_rev_set = step_resolution; //Change this as per the switch setting on the driver
}
     
bool OSP::movx(bool dir, int step1, int dir1, float x_step, bool text) 
  {
    int bytes_recv = 0;        
    char comm[5]="nost";
    comm[bytes_recv++] = Serial.read();
    int stopp=1; // flag for validating step mode 
    //Serial.println("Sudhakar");
    //Serial.println(step1);
    //Serial.println(dir);
    x_step = abs(x_step); 
    while((strcmp(comm, "stop")!=0 || stopper) && (stopp==1) && (x_step>0))
    //while((strcmp(comm, "stop")!=0 || stopper))
   {
   
    if(delayValue==0)
    {
      stopp=0;
      }

    x_step--;
         
    if(dir==1)
    {      
      if(stepx>=step_resolution)
        stepx=step_resolution;
        
      else {
        digitalWrite(dir1, LOW); // digitalWrite(dir1, LOW); 
        digitalWrite(step1, HIGH);
        delay(delayValue); 
        digitalWrite(step1, LOW);
        delay(delayValue);
        stepx++;
        }
    }
    else
    {
      if(stepx<=0)
        stepx = 0;
        
        else {
         digitalWrite(dir1, HIGH); // digitalWrite(dir1, HIGH);
         digitalWrite(step1, HIGH);
         delay(delayValue); 
         digitalWrite(step1, LOW);
         delay(delayValue);
         stepx--;  
        }
        
     }
     
   while(Serial.available() > 0)
      comm[bytes_recv++] = Serial.read();
    if(bytes_recv>4)
      break;   
}
  return true;
}


  
bool OSP::movy(bool dir,  int step2, int dir2, float y_step, bool text) 
{
    int bytes_recv = 0;        
    char comm[5]="nost";
    comm[bytes_recv++] = Serial.read();
    int stopp=1;
    y_step = abs(y_step); 
    //Serial.println(y_step); 
    
    while((strcmp(comm, "stop")!=0 || stopper) && (stopp==1) && (y_step>0))
        {
       if(delayValue==0)
    {
      stopp=0;
      }

      
      //if(text==true){
        //y_step = abs(y_step); 
        y_step--;
        //Serial.println(y_step);
        //Serial.read();

        //Serial.print("garbage: ");
        //Serial.println(Serial.read());
        //Serial.flush(); 
         //Serial.print("garbage4: ");
        //Serial.println(Serial.read());
       //}
       //Serial.println(delayValue);
    if(dir==0)
    {
      if(stepy>=step_resolution/4){
        stepy=step_resolution/4;
        //Serial.println("Resolution 0"); 
      }
        
      else {
        //Serial.println("Write 0"); 
        digitalWrite(dir2, HIGH); 
        digitalWrite(step2, HIGH); 
        delay(delayValue);
        digitalWrite(step2, LOW);  
        delay(delayValue); 
        stepy++; 
      }
    }
    else
    {
      if(stepy<=0)
      {
       stepy=0;
        //Serial.println("y<0"); 
      }
        else {
          //Serial.println("Write 1"); 
          digitalWrite(dir2, LOW); 
          digitalWrite(step2, HIGH); 
          delay(delayValue); 
          digitalWrite(step2, LOW);  
          delay(delayValue); 
          stepy--; 
        }
        
      }
//Serial.print("stepy=");
//Serial.println(stepy);
   while(Serial.available() > 0)
     comm[bytes_recv++] = Serial.read();
    if(bytes_recv>4)
      break;  
}   
    //Serial.println("done_movu");
  return true;
}

float OSP::getX()
{
  float valx;
  valx = stepx*(float)(360.00/step_resolution*1.0);
  valx = (float)(M_PI/180)*valx;
  return valx;
}


float OSP::getY()
{
  float valy;
  valy = stepy*(float)(360.00/step_resolution*1.0);
  valy = (float)(M_PI/180)*valy;
  return valy;
}


int OSP::getPx()
{
  return stepx; 
}


int OSP::getPy()
{
  return stepy;
}


float OSP::_rad2deg(float rad){
  return  (float) (180.00/M_PI)*rad;
}

float OSP::_deg2rad(float deg){
  return (float) (M_PI/180.00)*deg;
}

void OSP::goToRads(float x_rad, float y_rad) 
{
  
  float degsH = _rad2deg(x_rad);
  float degsV = _rad2deg(y_rad);

_moveTo(degsH,degsV);
  
}

void OSP::_moveTo(float x, float y, char* method)
{
  stepx_new = (step_resolution*x)/360; //map to counts
  stepy_new = (step_resolution*y)/360; //map to counts
  
  stepx=stepx_new-stepx;
  stepy=stepy_new-stepy;
  
  _moveXY(stepx,stepy,true);
  stepx=stepx_new;
  stepy=stepy_new;  
}

bool OSP::_moveXY(float x, float y, bool nodelay)
{
   if(y>step_resolution/4) //Check this. It might be a problem
      y = step_resolution/4; // This is to limit the tilt Motor to 90 degrees. 
  
  if(x<0)
      digitalWrite(11, HIGH); // HIGH      
    else
      digitalWrite(11, LOW); 

      
  for(int count=0;count<round(abs(x));count++)
  {       
    digitalWrite(12, HIGH); 
    delay(goto_delay); 
    digitalWrite(12, LOW);  
    delay(goto_delay);
  }

  
    if(y<0)
      digitalWrite(8, LOW);
    else
      digitalWrite(8, HIGH); 

      
  for(int count=0;count<round(abs(y));count++)
  {

    
    digitalWrite(9, HIGH); 
    delay(goto_delay); 
    digitalWrite(9, LOW); 
    delay(goto_delay);
  }
return true ;
  }

void OSP::_moveEqua(int x, int y)
  {
    
  }

