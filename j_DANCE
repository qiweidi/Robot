//Fuction to dance
//void DANCE()
//{    
//ankleDanceLoop();
//delay(delayOne);

//ankleDanceOutLoop();
//delay(delayOne);





  
  



//firstTime = false;
//}//end forward()



//Servo *servos[] = {&leftAnkle, &leftHip, &leftShoulder, &rightAnkle, &rightHip, &rightShoulder};

void moveTo(int targetAngles[], long delayTime) {
    //int targetAngles[] = {50, 150, 30, 50, 150, 30};
    int currentAngles[] = {leftAnklePos, leftHipPos, leftShoulderPos, rightAnklePos, rightHipPos, rightShoulderPos};
    //int nextAngles[] = {leftAnklePos, leftHipPos, leftShoulderPos, rightAnklePos, rightHipPos, rightShoulderPos};
    for (int i = 0; i < 30; i++) {
       leftAnkle.write(currentAngles[0] + (targetAngles[0]-currentAngles[0])/30 * i);
       leftHip.write(currentAngles[1] + (targetAngles[1]-currentAngles[1])/30 * i);
       leftShoulder.write(currentAngles[2] + (targetAngles[2]-currentAngles[2])/30 * i);
       rightAnkle.write(currentAngles[3] + (targetAngles[3]-currentAngles[3])/30 * i);
       rightHip.write(currentAngles[4] + (targetAngles[4]-currentAngles[4])/30 * i);
       rightShoulder.write(currentAngles[5] + (targetAngles[5]-currentAngles[5])/30 * i);
        // ...
        delay(delayTime);
    }
    leftAnklePos = targetAngles[0];
    leftHipPos = targetAngles[1];
    leftShoulderPos = targetAngles[2];
    rightAnklePos = targetAngles[3];
    rightHipPos = targetAngles[4];
    rightShoulderPos = targetAngles[5];
    
}

void DANCE() {
   int targetAngles1[] = {100, 50, 180, 120, 80, 30};
   moveTo(targetAngles1, 1000.0/30);
   int targetAngles2[] = {100, 90,40, 120, 130, 100};
   moveTo(targetAngles2, 1000.0/30);
   //int targetAngles3[] = {100, 50, 40, 120, 80, 100};
   //moveTo(targetAngles3, 1000.0/30);
   //int targetAngles4[] = {
 
// … etc
}
