#pragma once

// #define FORCE_NKRO
#define TAPPING_TERM_PER_KEY
#define TAPPING_TERM_FAST 115
#define TAPPING_TERM 200

#define USB_POLLING_INTERVAL_MS 1

#ifdef RGB_MATRIX_ENABLE
    #define WS2812_DI_PIN B3
    #define RGB_MATRIX_LED_COUNT 42

    #define RGB_MATRIX_ANI_SPEED 42
    #define RGB_DISABLE_WHEN_USB_SUSPENDED

    #define RGBLIGHT_HUE_STEP 1
    #define RGBLIGHT_SAT_STEP 1
    #define RGBLIGHT_VAL_STEP 1

    #define RGB_MATRIX_KEYPRESSES
    #define ENABLE_RGB_MATRIX_NONE
    #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
    
#endif
