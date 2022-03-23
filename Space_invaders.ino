// A basic everyday NeoPixel strip test program.

// NEOPIXEL BEST PRACTICES for most reliable operation:
// - Add 1000 uF CAPACITOR between NeoPixel strip's + and - connections.
// - MINIMIZE WIRING LENGTH between microcontroller board and first pixel.
// - NeoPixel strip's DATA-IN should pass through a 300-500 OHM RESISTOR.
// - AVOID connecting NeoPixels on a LIVE CIRCUIT. If you must, ALWAYS
//   connect GROUND (-) first, then +, then data.
// - When using a 3.3V microcontroller with a 5V-powered NeoPixel strip,
//   a LOGIC-LEVEL CONVERTER on the data line is STRONGLY RECOMMENDED.
// (Skipping these may work OK on your workbench but can fail in the field)

#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
 #include <avr/power.h> // Required for 16 MHz Adafruit Trinket
#endif

// Which pin on the Arduino is connected to the NeoPixels?
// On a Trinket or Gemma we suggest changing this to 1:
#define LED_PIN    6

// How many NeoPixels are attached to the Arduino?
#define LED_COUNT 180

// Declare our NeoPixel strip object:
Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);
// Argument 1 = Number of pixels in NeoPixel strip
// Argument 2 = Arduino pin number (most are valid)
// Argument 3 = Pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)
//   NEO_RGBW    Pixels are wired for RGBW bitstream (NeoPixel RGBW products)


// setup() function -- runs once at startup --------------------------------

void setup() {
  // These lines are specifically to support the Adafruit Trinket 5V 16 MHz.
  // Any other board, you can remove this part (but no harm leaving it):
#if defined(__AVR_ATtiny85__) && (F_CPU == 16000000)
  clock_prescale_set(clock_div_1);
#endif
  // END of Trinket-specific code.

  strip.begin();           // INITIALIZE NeoPixel strip object (REQUIRED)
  strip.show();            // Turn OFF all pixels ASAP
  strip.setBrightness(50); // Set BRIGHTNESS to about 1/5 (max = 255)
}


// loop() function -- runs repeatedly as long as board is on ---------------

void loop() {
  
  Invader(strip.Color( 20, 240,   20),strip.Color( 240, 0,   240),strip.Color( 240, 240,   240), 500);

  
}



void Invader(uint32_t color1,uint32_t color2,uint32_t color3, int wait){  //color1: invader color2 : bullet color3 : explosion

  // First slide
  strip.setPixelColor(1, color1);      // Invader
  strip.setPixelColor(10, color1);

  strip.setPixelColor(173, color2);      // Bullet
  strip.setPixelColor(174, color2);
  
  strip.show();                           
  delay(wait);
  
  for(int i=0; i<strip.numPixels(); i++) {
    strip.setPixelColor(i,0);          
  }
  strip.show();


  // Second slide
  strip.setPixelColor(0, color1);
  strip.setPixelColor(2, color1);
  strip.setPixelColor(9, color1);
  strip.setPixelColor(11, color1);
  strip.setPixelColor(15, color1);
  strip.setPixelColor(16, color1);
  strip.setPixelColor(19, color1);
  strip.setPixelColor(20, color1);

  strip.setPixelColor(161, color2);
  strip.setPixelColor(162, color2);
  strip.setPixelColor(173, color2);      // Bullet
  strip.setPixelColor(174, color2);
  
  strip.show();                           
  delay(wait);
  for(int i=0; i<strip.numPixels(); i++) {
    strip.setPixelColor(i,0);          
  }
  strip.show();


  // Third slide
  for(int i=1; i<11; i++) { 
    strip.setPixelColor(i, color1);        
  }
  strip.setPixelColor(14, color1);
  strip.setPixelColor(21, color1);
  strip.setPixelColor(25, color1);
  strip.setPixelColor(34, color1);

  strip.setPixelColor(149, color2);
  strip.setPixelColor(150, color2);
  strip.setPixelColor(161, color2);
  strip.setPixelColor(162, color2);
  strip.setPixelColor(173, color2);      // Bullet
  strip.setPixelColor(174, color2);
  
  strip.show();                           
  delay(wait);
  for(int i=0; i<strip.numPixels(); i++) {
    strip.setPixelColor(i,0);          
  }
  strip.show();


  // Forth slide
  for(int i=0; i<13; i++) { 
    strip.setPixelColor(i, color1);        
  }
  for(int i=14; i<22; i++) { 
    strip.setPixelColor(i, color1);        
  }
  strip.setPixelColor(23, color1);
  strip.setPixelColor(24, color1);
  strip.setPixelColor(33, color1);
  strip.setPixelColor(35, color1);
  strip.setPixelColor(39, color1);
  strip.setPixelColor(40, color1);
  strip.setPixelColor(43, color1);
  strip.setPixelColor(44, color1);

  strip.setPixelColor(137, color2);      
  strip.setPixelColor(138, color2);
  strip.setPixelColor(149, color2);    // Bullet
  strip.setPixelColor(150, color2);
  strip.setPixelColor(161, color2);
  strip.setPixelColor(162, color2);
  
  
  strip.show();                           
  delay(wait);
  for(int i=0; i<strip.numPixels(); i++) {
    strip.setPixelColor(i,0);          
  }
  strip.show();


  // Fifth slide
  for(int i=0; i<4; i++) { 
    strip.setPixelColor(i, color1);        
  }
  for(int i=4; i<8; i++) { 
    strip.setPixelColor(i, color1);        
  }
  for(int i=9; i<24; i++) { 
    strip.setPixelColor(i, color1);        
  }
  for(int i=25; i<35; i++) { 
    strip.setPixelColor(i, color1);        
  }
  strip.setPixelColor(38, color1);
  strip.setPixelColor(45, color1);
  strip.setPixelColor(49, color1);
  strip.setPixelColor(58, color1);

  strip.setPixelColor(125, color2);
  strip.setPixelColor(126, color2);
  strip.setPixelColor(137, color2);      
  strip.setPixelColor(138, color2);
  strip.setPixelColor(149, color2);    // Bullet
  strip.setPixelColor(150, color2);
  
  
  strip.show();                           
  delay(wait);
  for(int i=0; i<strip.numPixels(); i++) {
    strip.setPixelColor(i,0);          
  }
  strip.show();

  // Sixth slide
  for(int i=2; i<10; i++) { 
    strip.setPixelColor(i, color1);        
  }
  strip.setPixelColor(13, color1);
  strip.setPixelColor(14, color1);
  for(int i=16; i<20; i++) { 
    strip.setPixelColor(i, color1);        
  }
  strip.setPixelColor(21, color1);
  strip.setPixelColor(22, color1);
  for(int i=24; i<37; i++) { 
    strip.setPixelColor(i, color1);        
  }
  for(int i=38; i<46; i++) { 
    strip.setPixelColor(i, color1);        
  }
  strip.setPixelColor(47, color1);
  strip.setPixelColor(48, color1);
  strip.setPixelColor(50, color1);
  strip.setPixelColor(57, color1);
  strip.setPixelColor(59, color1);
  strip.setPixelColor(63, color1);
  strip.setPixelColor(64, color1);
  strip.setPixelColor(67, color1);
  strip.setPixelColor(68, color1);

   
  strip.setPixelColor(113, color2);
  strip.setPixelColor(114, color2);    // Bullet
  strip.setPixelColor(125, color2);
  strip.setPixelColor(126, color2);
  strip.setPixelColor(137, color2);      
  strip.setPixelColor(138, color2);
  
  
  strip.show();                           
  delay(wait);
  for(int i=0; i<strip.numPixels(); i++) {
    strip.setPixelColor(i,0);          
  }
  strip.show();

  // Seventh slide

  strip.setPixelColor(0, color1);
  strip.setPixelColor(3, color1);
  strip.setPixelColor(8, color1);
  strip.setPixelColor(11, color1);
  strip.setPixelColor(12, color1);

  for(int i=14; i<22; i++) { 
    strip.setPixelColor(i, color1);        
  }
  for(int i=23; i<27; i++) { 
    strip.setPixelColor(i, color1);        
  }
  for(int i=28; i<32; i++) { 
    strip.setPixelColor(i, color1);        
  }
  for(int i=33; i<48; i++) { 
    strip.setPixelColor(i, color1);        
  }
  for(int i=49; i<59; i++) { 
    strip.setPixelColor(i, color1);        
  }
  strip.setPixelColor(62, color1);
  strip.setPixelColor(69, color1);
  strip.setPixelColor(73, color1);
  strip.setPixelColor(82, color1);


  strip.setPixelColor(101, color2);
  strip.setPixelColor(102, color2);
  strip.setPixelColor(113, color2);
  strip.setPixelColor(114, color2);    // Bullet
  strip.setPixelColor(125, color2);
  strip.setPixelColor(126, color2);
  
  strip.show();                           
  delay(wait);
  for(int i=0; i<strip.numPixels(); i++) {
    strip.setPixelColor(i,0);          
  }
  strip.show();

 // Eighth slide

  strip.setPixelColor(2, color1);
  strip.setPixelColor(9, color1);
  strip.setPixelColor(15, color1);
  strip.setPixelColor(20, color1);

  for(int i=26; i<34; i++) { 
    strip.setPixelColor(i, color1);        
  }
  strip.setPixelColor(37, color1);
  strip.setPixelColor(38, color1);
  for(int i=40; i<44; i++) { 
    strip.setPixelColor(i, color1);        
  }
  strip.setPixelColor(45, color1);
  strip.setPixelColor(46, color1);
  for(int i=48; i<60; i++) { 
    strip.setPixelColor(i, color1);        
  }
  for(int i=62; i<70; i++) { 
    strip.setPixelColor(i, color1);        
  }
  strip.setPixelColor(71, color1);
  strip.setPixelColor(72, color1);
  strip.setPixelColor(74, color1);
  strip.setPixelColor(81, color1);
  strip.setPixelColor(83, color1);
  strip.setPixelColor(87, color1);
  strip.setPixelColor(88, color1);
  strip.setPixelColor(91, color1);
  strip.setPixelColor(92, color1);

  strip.setPixelColor(89, color2);
  strip.setPixelColor(90, color2);
  strip.setPixelColor(101, color2);
  strip.setPixelColor(102, color2);
  strip.setPixelColor(113, color2);
  strip.setPixelColor(114, color2);    // Bullet
  
  
  strip.show();                           
  delay(wait);
  for(int i=0; i<strip.numPixels(); i++) {
    strip.setPixelColor(i,0);          
  }
  strip.show();



  // Ninth slide

  strip.setPixelColor(14, color1);
  strip.setPixelColor(21, color1);
  strip.setPixelColor(24, color1);
  strip.setPixelColor(27, color1);
  strip.setPixelColor(32, color1);
  strip.setPixelColor(35, color1);
  strip.setPixelColor(36, color1);
  for(int i=38; i<46; i++) { 
    strip.setPixelColor(i, color1);        
  }
  for(int i=47; i<51; i++) { 
    strip.setPixelColor(i, color1);        
  }
  for(int i=52; i<56; i++) { 
    strip.setPixelColor(i, color1);        
  }
  for(int i=57; i<72; i++) { 
    strip.setPixelColor(i, color1);        
  }
  for(int i=73; i<83; i++) { 
    strip.setPixelColor(i, color1);        
  }
  strip.setPixelColor(86, color1);
  strip.setPixelColor(93, color1);
  strip.setPixelColor(97, color1);
  strip.setPixelColor(106, color1);

  strip.setPixelColor(77, color2);
  strip.setPixelColor(78, color2);    // Bullet
  strip.setPixelColor(89, color2);
  strip.setPixelColor(90, color2);
  strip.setPixelColor(101, color2);
  strip.setPixelColor(102, color2);
  
  
  
  strip.show();                           
  delay(wait);
  for(int i=0; i<strip.numPixels(); i++) {
    strip.setPixelColor(i,0);          
  }
  strip.show();


  // Tenth slide

  strip.setPixelColor(14, color3);
  strip.setPixelColor(20, color3);
  strip.setPixelColor(24, color3);
  strip.setPixelColor(28, color3);
  strip.setPixelColor(31, color3);
  
  strip.setPixelColor(35, color3);
  strip.setPixelColor(37, color3);
  strip.setPixelColor(46, color3);
  strip.setPixelColor(50, color3);
  strip.setPixelColor(57, color3);
  
  strip.setPixelColor(60, color3);
  strip.setPixelColor(71, color3);
  strip.setPixelColor(74, color3);   
  strip.setPixelColor(81, color3);
  strip.setPixelColor(85, color3);
  
  strip.setPixelColor(88, color3);
  strip.setPixelColor(91, color3);
  strip.setPixelColor(94, color3);   
  strip.setPixelColor(96, color3);
  strip.setPixelColor(99, color3);

  strip.setPixelColor(104, color3);
  strip.setPixelColor(107, color3);
  

  
  strip.show();                           
  delay(wait);
  for(int i=0; i<strip.numPixels(); i++) {
    strip.setPixelColor(i,0);          
  }
  strip.show();
  delay(wait);
  delay(wait);
 
}
