#include <Adafruit_NeoPixel.h>

// Which pin on the Arduino is connected to the NeoPixels?
#define LED_PIN    6

// How many NeoPixels are attached to the Arduino?
#define LED_COUNT 180

// Declare our NeoPixel strip object:
Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);
// Argument 1 = Number of pixels in NeoPixel strip
// Argument 2 = Arduino pin number (most are valid)
// Argument 3 = Pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)


// setup() function -- runs once at startup --------------------------------

char incomingByte;   // for incoming serial data

void setup() {


  strip.begin();           // INITIALIZE NeoPixel strip object (REQUIRED)
  strip.show();            // Turn OFF all pixels ASAP
  strip.setBrightness(100); // Set BRIGHTNESS to about 1/5 (max = 255)
  ArrowF(strip.Color(  0, 255,   0), 500);
  Serial.begin(9600); 
}


// loop() function -- runs repeatedly as long as board is on ---------------

void loop() {
  // send data only when you receive data:
  
        if (Serial.available() > 0) {
                // read the incoming byte:
                incomingByte = Serial.read();

                // say what you got:
                Serial.print("I received: ");
                Serial.println(incomingByte);
        }
        
         if (incomingByte == 'r' || incomingByte == 'R')
        {
          for(int i=0; i<4; i++){
            ArrowR(strip.Color(  0, 255,   0), 500); // Green
          }
          
        }
        if (incomingByte == 'l' || incomingByte == 'L')
        {
          for(int i=0; i<4; i++){
            ArrowL(strip.Color(  0, 255,   0), 500); // Green
          }
        }

        if (incomingByte == 'f' || incomingByte == 'F')
        {
          for(int i=0; i<4; i++){
            ArrowF(strip.Color(  0, 255,   0), 500); // Red
          }
        }
        
        if (incomingByte == 's' || incomingByte == 'S')
        {
          for(int i=0; i<4; i++){
            Stop(strip.Color(  255,0,   0), 500); // Red
          }
        }
        
        else
        {
        ArrowF(strip.Color(  0, 0,   255), 500); // Blue - Temporary 
        }
       
        
      
}


// Some functions of our own for creating animated effects -----------------

// Fill strip pixels one after another with a color. Strip is NOT cleared
// first; anything there will be covered pixel by pixel. Pass in color
// (as a single 'packed' 32-bit value, which you can get by calling
// strip.Color(red, green, blue) as shown in the loop() function above),
// and a delay time (in milliseconds) between pixels.

void colorWipe(uint32_t color, int wait) {
  for(int i=0; i<strip.numPixels(); i++) { // For each pixel in strip...
    strip.setPixelColor(i, color);         //  Set pixel's color (in RAM)
    strip.show();                          //  Update strip to match
    delay(wait);                           //  Pause for a moment
  }
}

void ArrowR(uint32_t color, int wait){
  strip.setPixelColor(43, color);
  strip.setPixelColor(51, color);
  strip.setPixelColor(52, color);
  strip.setPixelColor(67, color);
  strip.setPixelColor(68, color);
  strip.setPixelColor(69, color);
  for(int i=73; i<96; i++) {
    strip.setPixelColor(i, color);         
  }
   for(int i=97; i<108; i++) {
    strip.setPixelColor(i, color);         
  }
  strip.setPixelColor(115, color);
  strip.setPixelColor(116, color);
  strip.setPixelColor(117, color);
  strip.setPixelColor(123, color);
  strip.setPixelColor(124, color);
  strip.setPixelColor(139, color);
  strip.show();                           // Le mettre a la fin permet d'allumer tout en meme temps
  
  delay(wait);
  for(int i=0; i<strip.numPixels(); i++) {
    strip.setPixelColor(i,0);         
    
  }
  strip.show();
  delay(wait);
  
}


void ArrowL(uint32_t color, int wait){
  strip.setPixelColor(40, color);
  strip.setPixelColor(55, color);
  strip.setPixelColor(56, color);
  strip.setPixelColor(62, color);
  strip.setPixelColor(63, color);
  strip.setPixelColor(64, color);
  for(int i=72; i<83; i++) {
    strip.setPixelColor(i, color);         
  }
   for(int i=84; i<107; i++) {
    strip.setPixelColor(i, color);         
  }
  strip.setPixelColor(110, color);
  strip.setPixelColor(111, color);
  strip.setPixelColor(112, color);
  strip.setPixelColor(127, color);
  strip.setPixelColor(128, color);
  strip.setPixelColor(136, color);
  strip.show();                           // Le mettre a la fin permet d'allumer tout en meme temps
  
  delay(wait);
  for(int i=0; i<strip.numPixels(); i++) {
    strip.setPixelColor(i,0);         
    
  }
  strip.show();
  delay(wait);
  
}

void ArrowF(uint32_t color, int wait){
  strip.setPixelColor(5, color);
  strip.setPixelColor(6, color);
  for(int i=16; i<20; i++) {
    strip.setPixelColor(i, color);         
  }
   for(int i=27; i<33; i++) {
    strip.setPixelColor(i, color);         
  }
  for(int i=38; i<46; i++) {
    strip.setPixelColor(i, color);         
  }
   for(int i=49; i<59; i++) {
    strip.setPixelColor(i, color);         
  }
  for(int i=60; i<72; i++) {
    strip.setPixelColor(i, color);         
  }
  for(int i=76; i<80; i++) {
    strip.setPixelColor(i, color);         
  }
  for(int i=88; i<92; i++) {
    strip.setPixelColor(i, color);         
  }
  for(int i=100; i<104; i++) {
    strip.setPixelColor(i, color);         
  }
  for(int i=112; i<116; i++) {
    strip.setPixelColor(i, color);         
  }
  for(int i=124; i<128; i++) {
    strip.setPixelColor(i, color);         
  }
  for(int i=136; i<140; i++) {
    strip.setPixelColor(i, color);         
  }
  for(int i=148; i<152; i++) {
    strip.setPixelColor(i, color);         
  }
  for(int i=160; i<164; i++) {
    strip.setPixelColor(i, color);         
  }
  for(int i=172; i<176; i++) {
    strip.setPixelColor(i, color);         
  }
  
  strip.show();                           // Le mettre a la fin permet d'allumer tout en meme temps
  
  delay(wait);
  for(int i=0; i<strip.numPixels(); i++) {
    strip.setPixelColor(i,0);         
    
  }
  strip.show();
  delay(wait);
  
}

void Stop(uint32_t color, int wait){
  strip.setPixelColor(5, color);
  strip.setPixelColor(6, color);
  for(int i=16; i<20; i++) {
    strip.setPixelColor(i, color);         
  }
   for(int i=28; i<32; i++) {
    strip.setPixelColor(i, color);         
  }
  for(int i=40; i<44; i++) {
    strip.setPixelColor(i, color);         
  }
   for(int i=52; i<56; i++) {
    strip.setPixelColor(i, color);         
  }
  for(int i=64; i<68; i++) {
    strip.setPixelColor(i, color);         
  }
  for(int i=76; i<80; i++) {
    strip.setPixelColor(i, color);         
  }
  for(int i=88; i<92; i++) {
    strip.setPixelColor(i, color);         
  }
  for(int i=101; i<103; i++) {
    strip.setPixelColor(i, color);         
  }
  for(int i=137; i<139; i++) {
    strip.setPixelColor(i, color);         
  }
  for(int i=148; i<152; i++) {
    strip.setPixelColor(i, color);         
  }
  for(int i=160; i<164; i++) {
    strip.setPixelColor(i, color);         
  }
  for(int i=173; i<175; i++) {
    strip.setPixelColor(i, color);         
  }
  
  strip.show();                           // Le mettre a la fin permet d'allumer tout en meme temps
  
  delay(wait);
  for(int i=0; i<strip.numPixels(); i++) {
    strip.setPixelColor(i,0);         
    
  }
  strip.show();
  delay(wait);
  
}
