#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
 #include <avr/power.h> // Required for 16 MHz Adafruit Trinket
#endif

#define LED_PIN    6

#define LED_COUNT 180

Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);

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


void loop() {
  // put your main code here, to run repeatedly:
  Message();
  HeartMessage (strip.Color( 250, 0,   0));
  //delay(5000);
  //for(int i=0; i<strip.numPixels(); i++) {
    //strip.setPixelColor(i,0);          
  //}
  //strip.show();
  delay(200);
}


void Message(){
  for(int i=37; i<47; i++) { 
    strip.setPixelColor(i, strip.Color( 250, 250,   250));        
  }
  for(int i=48; i<108; i++) { 
    strip.setPixelColor(i, strip.Color( 250, 250,   250));        
  }
  for(int i=109; i<119; i++) { 
    strip.setPixelColor(i,strip.Color( 250, 250,   250));        
  }
  for(int i=126; i<129; i++) { 
    strip.setPixelColor(i, strip.Color( 250, 250,   250));        
  }
  strip.setPixelColor(135, strip.Color( 250, 250,   250));
  strip.setPixelColor(136,strip.Color( 250, 250,   250));
  strip.setPixelColor(152,strip.Color( 250, 250,   250));
  strip.setPixelColor(153,strip.Color( 250, 250,   250));
 
  strip.show();                           
  
}

void HeartMessage(uint32_t color){
  strip.setPixelColor(52, color);
  strip.setPixelColor(54,color);
  for(int i=64; i<69; i++) { 
    strip.setPixelColor(i, color);        
  }
  for(int i=75; i<80; i++) { 
    strip.setPixelColor(i, color);        
  }
  for(int i=89; i<92; i++) { 
    strip.setPixelColor(i,color);        
  }

  strip.setPixelColor(101,color);
 
  strip.show(); 
  delay(500);
  
  strip.setPixelColor(52,  strip.Color( 250, 250,   250) );
  strip.setPixelColor(54, strip.Color( 250, 250,   250));
  for(int i=64; i<69; i++) { 
    strip.setPixelColor(i, strip.Color( 250, 250,   250));        
  }
  for(int i=75; i<80; i++) { 
    strip.setPixelColor(i,  strip.Color( 250, 250,   250));        
  }
  for(int i=89; i<92; i++) { 
    strip.setPixelColor(i, strip.Color( 250, 250,   250));        
  }
  strip.setPixelColor(101, strip.Color( 250, 250,   250));

  strip.setPixelColor(65, color );
  strip.setPixelColor(67, color);
  for(int i=76; i<79; i++) { 
    strip.setPixelColor(i, color);        
  }
  strip.setPixelColor(90, color);
  
  strip.show();                             
}
