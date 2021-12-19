/********ANKLE FUNCTIONS******************************************/

/******First Time********************************************/
void leftAnkleOut ()
{
 for (int i = 0; i < 15 ; i++ )
    { leftAnkle.write(leftAnklePos-i);   // left ankle out   
    delay(forDelay);} 
}

void rightAnkleOut()
{for (int i = 0; i < 10 ; i++ )
    {rightAnkle.write(rightAnklePos-i);   //right ankle out 
     delay(forDelay);}
}


void ankleOutFirst()
{
  leftAnkleOut();
   delay(delayOne);
   rightAnkleOut();
   delay(delayOne);
}

/******LOOP*****************************************************/
void ankleInLoop()
{
  for (int i = 0; i <25 ; i++)
{
  leftAnkle.write((leftAnklePos -10)+i);   
  rightAnkle.write((rightAnklePos-1)+i);
  delay(forDelay); }
}


void ankleOutLoop()
{
 for (int i = 0; i <25 ; i++ )
{
  rightAnkle.write((rightAnklePos+10)-i);   //right foot 
  if (i <= 20)
   {leftAnkle.write((leftAnklePos+10)-i);}
   delay(forDelay);  } 
}


///Dancing movemeny testing
 void ankleDanceLoop()
  {
  for (int i = 0; i <25 ; i++)
  {
  leftAnkle.write((leftAnklePos-30)-i);   
  rightAnkle.write((rightAnklePos-30)-i);
  delay(forDelay); }
  }

void ankleDanceOutLoop()
  {
  for (int i = 0; i <25 ; i++)
  {
  leftAnkle.write((leftAnklePos+30)+i);   
  rightAnkle.write((rightAnklePos+30)+i);
  delay(forDelay); }
  }
