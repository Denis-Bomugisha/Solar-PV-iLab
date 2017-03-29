void Movement(int x, int y, int z, int h)
{
  if(x==0 && y==0 && z==0 && h==0) 
  {
  

   switch (mov>0)
	{
	    case 1:
		for(r=0;r<mov;mov--)
      {
        myservo.write(mov);
        delay(100);
      }
		break;
	    case 0:
		myservo.write(0);
		break;
	}
  }
  else if(x==0 && y==0 && z==0 && h==1) {
   if(mov==20) myservo.write(mov);
    
    switch (mov>20)
	{
	    case 1:
		for(r=0;mov!=20;mov--)
      {
        myservo.write(mov);
        delay(100);
      }
		break;
	    case 0:
		for(r=0;mov!=20;mov++)
      {
        myservo.write(mov);
        delay(100);
      }
		break;
	}
   
  }
  
  else if(x==0 && y==0 && z==1 && h==0) {
     if(mov==40) myservo.write(mov);
    
    switch (mov>40)
	{
	    case 1:
		for(r=0;mov!=40;mov--)
      {
        myservo.write(mov);
        delay(100);
      }
		break;
	    case 0:
		for(r=0;mov!=40;mov++)
      {
        myservo.write(mov);
        delay(100);
      }
		break;
	}
 }
  
  else if(x==0 && y==0 && z==1 && h==1)  {
   if(mov==60) myservo.write(mov);
    
    switch (mov>60)
	{
	    case 1:
		for(r=0;mov!=60;mov--)
      {
        myservo.write(mov);
        delay(100);
      }
		break;
	    case 0:
		for(r=0;mov!=60;mov++)
      {
        myservo.write(mov);
        delay(100);
      }
		break;
	}
   
  }
  
  else if(x==0 && y==1 && z==0 && h==0) {
     if(mov==80) myservo.write(mov);
    
    switch (mov>80)
	{
	    case 1:
		for(r=0;mov!=80;mov--)
      {
        myservo.write(mov);
        delay(100);
      }
		break;
	    case 0:
		for(r=0;mov!=80;mov++)
      {
        myservo.write(mov);
        delay(100);
      }
		break;
	}
 }
  
  else if(x==0 && y==1 && z==0 && h==1)  {
   if(mov==100) myservo.write(mov);
    
    switch (mov>100)
	{
	    case 1:
		for(r=0;mov!=100;mov--)
      {
        myservo.write(mov);
        delay(100);
      }
		break;
	    case 0:
		for(r=0;mov!=100;mov++)
      {
        myservo.write(mov);
        delay(100);
      }
		break;
	}
   
  }
  
  else if(x==0 && y==1 && z==1 && h==0) {
     if(mov==120) myservo.write(mov);
    
    switch (mov>120)
	{
	    case 1:
		for(r=0;mov!=120;mov--)
      {
        myservo.write(mov);
        delay(100);
      }
		break;
	    case 0:
		for(r=0;mov!=120;mov++)
      {
        myservo.write(mov);
        delay(100);
      }
		break;
	}
 }
  
  else if(x==0 && y==1 && z==1 && h==1)  {
   if(mov==140) myservo.write(mov);
    
    switch (mov>140)
	{
	    case 1:
		for(r=0;mov!=140;mov--)
      {
        myservo.write(mov);
        delay(100);
      }
		break;
	    case 0:
		for(r=0;mov!=140;mov++)
      {
        myservo.write(mov);
        delay(100);
      }
		break;
	}
   
  }
  
  else if(x==1 && y==0 && z==0 && h==0) {
     if(mov==160) myservo.write(mov);
    
    switch (mov>160)
	{
	    case 1:
		for(r=0;mov!=160;mov--)
      {
        myservo.write(mov);
        delay(100);
      }
		break;
	    case 0:
		for(r=0;mov!=160;mov++)
      {
        myservo.write(mov);
        delay(100);
      }
		break;
	}
 }
  
  else if(x==1 && y==0 && z==0 && h==1)  {
   if(mov==179) myservo.write(mov);
    
    switch (mov>179)
	{
	    case 1:
		for(r=0;mov!=179;mov--)
      {
        myservo.write(mov);
        delay(100);
      }
		break;
	    case 0:
		for(r=0;mov!=179;mov++)
      {
        myservo.write(mov);
        delay(100);
      }
		break;
	}
   
  }
  
  }
