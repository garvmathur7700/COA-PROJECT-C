#include <FastLED.h>

#define LED_PIN     6
#define NUM_LEDS    3
#define BRIGHTNESS  100
#define LED_TYPE    WS2812B
#define COLOR_ORDER GRB

CRGB leds[NUM_LEDS];

void setup() {
  FastLED.addLeds<LED_TYPE, LED_PIN, COLOR_ORDER>(leds, NUM_LEDS).setCorrection(TypicalLEDStrip);
  FastLED.setBrightness(BRIGHTNESS);
}

void loop() {
  // Turn the first LED (yellow) on for 3 seconds
  leds[0] = CRGB::Yellow;
  FastLED.show();
  delay(3000);
  leds[0] = CRGB::Black;  // Turn off the LED
  FastLED.show();

  // Turn the second LED (red) on for 5 seconds
  leds[1] = CRGB::Red;
  FastLED.show();
  delay(5000);
  leds[1] = CRGB::Black;  // Turn off the LED
  FastLED.show();

  // Turn the third LED (green) on for 10 seconds
  leds[2] = CRGB::Green;
  FastLED.show();
  delay(10000);
  leds[2] = CRGB::Black;  // Turn off the LED
  FastLED.show();

  // End the program after displaying the sequence
  while (true) {
    // Do nothing
  }
}
