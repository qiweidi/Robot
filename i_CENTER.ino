// Function to write all servos to its neutral position
void centerPosition()  
{
  leftAnkle.write(100);
  rightAnkle.write(120);  
  leftHip.write(95);  
  rightHip.write(120); 
  leftShoulder.write(40); 
  rightShoulder.write(150); 
  delay(1000);
}//end centerPosition();

//void centerPosition()  
//{
  //leftAnkle.write(leftAnklePos);
  //rightAnkle.write(rightAnklePos);  
  //leftHip.write(leftHipPos);  
  //rightHip.write(rightHipPos); 
  //leftShoulder.write(leftShoulderPos); 
  //rightShoulder.write(rightShoulderPos); 
  //delay(1000);
//}//end centerPosition();


//Function to write only HIP and ANKLE servos to center position
void lowerCenter()                                                                                  
{
  leftAnkle.write(leftAnklePos);
  rightAnkle.write(rightAnklePos); 
  leftHip.write(leftHipPos); 
  rightHip.write(rightHipPos);  
}//end lowerCenter()
