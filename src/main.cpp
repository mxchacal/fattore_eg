#include <Arduino.h>
#include <MozziGuts.h>
#include <Oscil.h>
#include <EventDelay.h>
#include <ADSR.h>
#include <tables/sin8192_int8.h>
#include <mozzi_rand.h>
#include <mozzi_midi.h>

ADSR <CONTROL_RATE,AUDIO_RATE> envelope0;
ADSR <CONTROL_RATE,AUDIO_RATE> envelope1;
ADSR <CONTROL_RATE,AUDIO_RATE> envelope2;
ADSR <CONTROL_RATE,AUDIO_RATE> envelope3;

void setup() {
    // put your setup code here, to run once:
    randSeed(); // fresh random
    envelope0.setTimes(rand(300),rand(300),rand(300),rand(300));
    envelope1.setTimes(rand(300),rand(300),rand(300),rand(300));
    envelope2.setTimes(rand(300),rand(300),rand(300),rand(300));
    envelope3.setTimes(rand(300),rand(300),rand(300),rand(300)); 
}

void loop() {
    // put your main code here, to run repeatedly:
}
