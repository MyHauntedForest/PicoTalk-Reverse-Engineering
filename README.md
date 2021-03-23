# HB-5APP Skull / PicoTalk Reverse Enginering
For one of our props, we wanted to have a more realistic mouth, eye, and head animations for the [HB-5APP Skull](https://www.frightprops.com/talking-skull-with-mouth-and-eye-movement.html). Each skull has a [PicoTalk](https://www.frightideas.com/picotalk-3.html) control board in it. Our goal was to control the servos in the skull directly, without the PicoTalk, but we didn't know what servo values were being sent. In a afternoon we wrote some quick code to find those values per servo.

## The Servo Values
These values are used in conjunction with the [Arduino](https://www.arduino.cc/) servo library using `servo.writeMicroseconds(ms)`

| Servo Name 	| Position Min 	| Position Max 	|
|------------	|--------------	|--------------	|
| Eyes       	| 1368         	| 1696         	|
| Head       	| 1008         	| 2012         	|
| Mouth      	| 1328         	| 1584         	|
