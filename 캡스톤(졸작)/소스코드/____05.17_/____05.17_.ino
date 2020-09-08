void setup() {   

pinMode(3, OUTPUT);  // 디지털 3번핀(스피커)을 출력모드로 설정.

pinMode(30, INPUT);  // 디지털 30번핀(버튼)을 입력모드로 설정. 

pinMode(31, INPUT);  // 디지털 31번핀(버튼)을 입력모드로 설정. 

pinMode(32, INPUT);  // 디지털 32번핀(버튼)을 입력모드로 설정. 

pinMode(33, INPUT);  // 디지털 33번핀(버튼)을 입력모드로 설정. 

pinMode(34, INPUT);  // 디지털 34번핀(버튼)을 입력모드로 설정. 

pinMode(35, INPUT);  // 디지털 35번핀(버튼)을 입력모드로 설정. 

pinMode(36, INPUT);  // 디지털 36번핀(버튼)을 입력모드로 설정. 

pinMode(37, INPUT);  // 디지털 37번핀(버튼)을 입력모드로 설정. 

pinMode(38, INPUT);  // 디지털 38번핀(버튼)을 입력모드로 설정. 

pinMode(39, INPUT);  // 디지털 39번핀(버튼)을 입력모드로 설정. 

pinMode(40, INPUT);  // 디지털 40번핀(버튼)을 입력모드로 설정. 

pinMode(41, INPUT);  // 디지털 41번핀(버튼)을 입력모드로 설정. 

pinMode(42, INPUT);  // 디지털 42번핀(버튼)을 입력모드로 설정. 

pinMode(43, INPUT);  // 디지털 43번핀(버튼)을 입력모드로 설정.

pinMode(44, INPUT);  // 디지털 44번핀(버튼)을 입력모드로 설정. 

pinMode(45, INPUT);  // 디지털 45번핀(버튼)을 입력모드로 설정. 

} 

 

void loop() {

if (digitalRead(30) == HIGH) {        // 만약 30번핀에 HIGH신호가 입력되면

tone (3, 262);             // 3번핀에 주파수 신호 361.6을 출력 = 도,C4

}

else if (digitalRead(31) == HIGH) {             // 그게아니라 31번에 HIGH 신호가 입력되면

tone (3, 294);            // 3번핀에 주파수 신호 393.7을 출력 = 레,D4

}

else if (digitalRead(32) == HIGH) {                        // 이하 생략

tone (3, 329.6);        //  미,E4

}

else if (digitalRead(33) == HIGH) {

tone (3, 349.2);      //   파,F4

}

else if (digitalRead(34) == HIGH) {

tone (3, 392.0);      //    솔,G4

}

else if (digitalRead(35) == HIGH) {

tone (3, 440.0);    //      라,A4

}

else if (digitalRead(36) == HIGH) {

tone (3, 493.9);    //    시,B4

}

else if (digitalRead(37) == HIGH) {

tone (3, 523.0);    //  도,C5

}

else if (digitalRead(38) == HIGH) {

tone (3, 587.3);    //  레,D5

}

else if (digitalRead(39) == HIGH) {

tone (3, 659.2);    //  미,E5

}

else if (digitalRead(40) == HIGH) {

tone (3, 698.4);    //  파,F5

}

else if (digitalRead(41) == HIGH) {

tone (3, 783.9);    //  솔,G5

}

else if (digitalRead(42) == HIGH) {

tone (3, 880,0);    //  라,A5

}

else if (digitalRead(43) == HIGH) {

tone (3, 987.7);    //  시,B5

}

else if (digitalRead(44) == HIGH) {

tone (3, 1046.5);    // 도,C6

}

else if (digitalRead(45) == HIGH) {

tone (3, 1174.6);    // 레,D6

}


else {

noTone(3);

}

}
