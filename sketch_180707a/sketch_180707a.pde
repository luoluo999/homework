import processing.serial.*;
Serial myPort;  
int lf = 10;  
String myString = null;  
PImage img;
void setup()  
{  
  size(1000, 695);
  img = loadImage("background1.png"); 
  background(125);    
  myPort = new Serial(this, "COM4", 9600);  
  myPort.clear();
}  
void draw()  
{  
  image(img, 0, 0);
  //rect(550, 0, 450, 150);  //night
  //rect(250, 50, 100, 150); //moon
  //rect(460, 55, 80, 80);   //star
  //rect(820, 400, 120, 180); //rabit
  //rect(260, 300, 500, 380); //tiger
  //rect(720, 160, 200, 100);//swallow
  //rect(80, 200, 170, 250); //pine tree
  //rect(0, 450, 260, 245); //sleep
  while (myPort.available() > 0)    
  { 
    myString = myPort.readStringUntil(lf);    
    if (myString!=null)  
    { 
      background(125);        
      text(myString, 10, 30);
    }
  }
}  
void mouseClicked()  
{ 
  if ((mouseX>=550)&(mouseX<=1100)&(mouseY>=0)&(mouseY<=150))  

  { 
    myPort.write("a"); //night
  } 
  if ((mouseX>=250)&(mouseX<=350)&(mouseY>=50)&(mouseY<=200))  

  { 
    myPort.write("b"); //moon
  } 
  if ((mouseX>=460)&(mouseX<=540)&(mouseY>=55)&(mouseY<=135))  

  { 
    myPort.write("c"); //star
  } 
  if ((mouseX>=820)&(mouseX<=940)&(mouseY>=400)&(mouseY<=580))  

  { 
    myPort.write("d"); //rabit
  } 
  if ((mouseX>=260)&(mouseX<=760)&(mouseY>=300)&(mouseY<=680))  

  { 
    myPort.write("e"); //tiger
  } 
  if ((mouseX>=720)&(mouseX<=920)&(mouseY>=160)&(mouseY<=260))  

  { 
    myPort.write("f"); //swallow
  } 
  if ((mouseX>=80)&(mouseX<=250)&(mouseY>=200)&(mouseY<=450))  

  { 
    myPort.write("g"); //pine tree
  } 
  if ((mouseX>=0)&(mouseX<=260)&(mouseY>=450)&(mouseY<=695))  

  { 
    myPort.write("h"); //sleep
  }
} 
