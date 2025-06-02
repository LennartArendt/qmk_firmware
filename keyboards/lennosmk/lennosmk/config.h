#pragma once

#define EE_HANDS // Store which side I am in EEPROM

#define WS2812_DI_PIN GP22
#define WS2812_TIMING 1250
#define WS2812_T1H 900
#define WS2812_T0H 350
#define WS2812_TRST_US 280
#define WS2812_BYTE_ORDER WS2812_BYTE_ORDER_GRB
#define WS2812_DRIVER = vendor

#define SELECT_SOFT_SERIAL_SPEED 2 // 2 = 115200, 3 = 250000, 4 = 500000, 5 = 1000000


#define RGB_MATRIX_DEFAULT_ON true
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 150 // limits maximum brightness of LEDs to 200 out of 255. If not defined maximum brightness is set to 255
#define RGB_MATRIX_DEFAULT_HUE 0 // Sets the default hue value, if none has been set
#define RGB_MATRIX_DEFAULT_SAT 255 // Sets the default saturation value, if none has been set
#define RGB_MATRIX_DEFAULT_VAL 150 // Sets the default brightness value, if none has been set
#define RGB_MATRIX_DEFAULT_SPD 127 // Sets the default animation speed, if none has been set
#define RGB_MATRIX_HUE_STEP 8 // The value by which to increment the hue per adjustment action
#define RGB_MATRIX_SAT_STEP 16 // The value by which to increment the saturation per adjustment action
#define RGB_MATRIX_VAL_STEP 16 // The value by which to increment the brightness per adjustment action
#define RGB_MATRIX_SPD_STEP 16 // The value by which to increment the animation speed per adjustment action
#define RGB_MATRIX_LED_COUNT 62



#define ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN	
#define ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT	
#define ENABLE_RGB_MATRIX_BREATHING	
#define ENABLE_RGB_MATRIX_BAND_SAT	
#define ENABLE_RGB_MATRIX_BAND_VAL	
#define ENABLE_RGB_MATRIX_BAND_PINWHEEL_SAT