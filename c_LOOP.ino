/**LOOP*******************************************************************************/

void loop() 
{ 
  for(int i = 0; i < 5 ; i++)
  {ledBlink();}
  //delay(1000);
  
  
  //Move Forward
  for( int i = 0; i<20 ; i++ ) 
 {forward();
 
  }

  for( int i = 0; i<10 ; i++ ) 
 {handOut();
  }
 delay(1000);

 for( int i = 0; i<10 ; i++ ) 
 {DANCE();
 }
delay(1000);
 // back to neutral 
  centerPosition();
  }
