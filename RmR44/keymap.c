#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
};



#define DUAL_FUNC_0 LT(7, KC_F7)
#define DUAL_FUNC_1 LT(10, KC_Z)
#define DUAL_FUNC_2 LT(7, KC_F5)
#define DUAL_FUNC_3 LT(6, KC_A)
#define DUAL_FUNC_4 LT(14, KC_Q)
#define DUAL_FUNC_5 LT(1, KC_L)
#define DUAL_FUNC_6 LT(5, KC_P)
#define DUAL_FUNC_7 LT(1, KC_F5)
#define DUAL_FUNC_8 LT(6, KC_S)
#define DUAL_FUNC_9 LT(4, KC_Y)
#define DUAL_FUNC_10 LT(12, KC_T)
#define DUAL_FUNC_11 LT(3, KC_E)
#define DUAL_FUNC_12 LT(13, KC_P)
#define DUAL_FUNC_13 LT(5, KC_F21)
#define DUAL_FUNC_14 LT(2, KC_2)
#define DUAL_FUNC_15 LT(6, KC_2)
#define DUAL_FUNC_16 LT(6, KC_F20)
#define DUAL_FUNC_17 LT(3, KC_S)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_Q,           KC_W,           KC_F,           KC_P,           KC_G,                                           KC_J,           KC_L,           KC_U,           KC_Y,           DUAL_FUNC_0,    KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_A,           KC_R,           KC_S,           KC_T,           KC_D,                                           KC_H,           KC_N,           KC_E,           KC_I,           KC_O,           KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_K,           KC_M,           DUAL_FUNC_1,    DUAL_FUNC_2,    DUAL_FUNC_3,    KC_TRANSPARENT, 
                                                    TT(2),          MT(MOD_LCTL, KC_TAB),                                MT(MOD_LSFT, KC_ENTER),LT(3, KC_SPACE)
  ),
  [1] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_PERC,        KC_ASTR,        KC_SLASH,       KC_NO,                                          KC_NO,          KC_7,           KC_8,           KC_9,           KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_ESCAPE,      KC_EQUAL,       KC_PLUS,        KC_MINUS,       KC_NO,                                          KC_0,           KC_1,           KC_2,           KC_3,           KC_BSPC,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_DOT,         KC_COMMA,       KC_DLR,         KC_NO,                                          KC_NO,          KC_4,           KC_5,           KC_6,           KC_NO,          KC_TRANSPARENT, 
                                                    TT(2),          KC_TRANSPARENT,                                 KC_TRANSPARENT, DUAL_FUNC_4
  ),
  [2] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_PERC,        KC_DLR,         DUAL_FUNC_5,    KC_RABK,        KC_PIPE,                                        KC_ASTR,        KC_LPRN,        KC_RPRN,        KC_LBRC,        KC_RBRC,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_ESCAPE,      KC_EXLM,        KC_PLUS,        KC_EQUAL,       KC_COLN,                                        KC_SCLN,        KC_LCBR,        KC_RCBR,        KC_GRAVE,       KC_BSPC,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_CIRC,        KC_TILD,        KC_HASH,        KC_AMPR,        KC_BSLS,                                        KC_AT,          LGUI(KC_DOT),   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, DUAL_FUNC_4
  ),
  [3] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, QK_LLCK,        TO(1),          TO(5),          TO(6),          KC_NO,                                          KC_PAGE_UP,     DUAL_FUNC_6,    KC_UP,          DUAL_FUNC_7,    LALT(KC_F4),    KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_ESCAPE,      KC_LEFT_ALT,    KC_LEFT_SHIFT,  KC_LEFT_GUI,    LCTL(LSFT(KC_K)),                                KC_PGDN,        KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_BSPC,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_DELETE,      KC_PC_CUT,      KC_PC_COPY,     KC_PC_PASTE,    TO(4),                                          LGUI(KC_D),     KC_HOME,        KC_END,         LCTL(LSFT(KC_R)),LSFT(KC_ENTER), KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, TO(0)
  ),
  [4] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LEFT_SHIFT,  KC_A,           KC_S,           KC_D,           KC_F,                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LEFT_CTRL,   KC_Z,           KC_X,           KC_C,           KC_V,                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_SPACE,       KC_I,                                           KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, QK_BOOT,        KC_AUDIO_MUTE,  KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_NO,                                          KC_NO,          DUAL_FUNC_8,    DUAL_FUNC_9,    DUAL_FUNC_10,   KC_SYSTEM_SLEEP,KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_ESCAPE,      KC_MEDIA_PREV_TRACK,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,LGUI(LSFT(KC_S)),                                DUAL_FUNC_11,   DUAL_FUNC_12,   DUAL_FUNC_13,   DUAL_FUNC_14,   KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_BRIGHTNESS_DOWN,KC_BRIGHTNESS_UP,KC_NO,                                          KC_NO,          DUAL_FUNC_15,   DUAL_FUNC_16,   DUAL_FUNC_17,   KC_NO,          KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, TO(0)
  ),
  [6] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          RGB_SPD,        RGB_SPI,        RGB_HUD,        RGB_HUI,                                        KC_NO,          DUAL_FUNC_6,    LALT(LCTL(LSFT(KC_3))),DUAL_FUNC_7,    KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_ESCAPE,      RGB_MODE_FORWARD,RGB_SLD,        TOGGLE_LAYER_COLOR,QK_DYNAMIC_TAPPING_TERM_UP,                                LCTL(LSFT(KC_X)),LALT(LCTL(LSFT(KC_9))),LALT(LCTL(LSFT(KC_GRAVE))),LALT(LCTL(LSFT(KC_0))),LCTL(KC_BSLS),  KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          RGB_VAD,        RGB_VAI,        QK_DYNAMIC_TAPPING_TERM_PRINT,QK_DYNAMIC_TAPPING_TERM_DOWN,                                KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, MT(MOD_LGUI, KC_TAB),                                KC_TRANSPARENT, TO(0)
  ),
  [7] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_ESCAPE,      KC_SCRL,        KC_LEFT_SHIFT,  KC_MS_BTN1,     KC_MS_BTN2,                                     KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_DELETE,      KC_PC_CUT,      KC_PC_COPY,     KC_PC_PASTE,    KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, 
                                                    KC_NUM,         KC_TRANSPARENT,                                 KC_NO,          KC_NUM
  ),
};


const uint16_t PROGMEM combo0[] = { KC_ESCAPE, KC_3, COMBO_END};
const uint16_t PROGMEM combo1[] = { KC_F, KC_P, COMBO_END};
const uint16_t PROGMEM combo2[] = { KC_S, MT(MOD_LCTL, KC_TAB), COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, TO(0)),
    COMBO(combo1, KC_LEFT_SHIFT),
    COMBO(combo2, TO(7)),
};


extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {133,139,185}, {129,238,150}, {32,73,233}, {28,255,238}, {21,252,202}, {13,250,187}, {133,139,185}, {129,238,150}, {32,73,233}, {28,255,238}, {21,252,202}, {13,250,187}, {133,139,185}, {129,238,150}, {32,73,233}, {28,255,238}, {21,252,202}, {13,250,187}, {133,139,185}, {129,238,150}, {32,73,233}, {28,255,238}, {21,252,202}, {13,250,187}, {13,250,187}, {3,228,174}, {30,78,255}, {30,78,255}, {30,78,255}, {30,78,255}, {30,78,255}, {30,78,255}, {30,78,255}, {30,78,255}, {30,78,255}, {30,78,255}, {30,78,255}, {30,78,255}, {30,78,255}, {30,78,255}, {30,78,255}, {30,78,255}, {30,78,255}, {30,78,255}, {30,78,255}, {30,78,255}, {30,78,255}, {30,78,255}, {30,78,255}, {30,78,255}, {30,78,255}, {30,78,255} },

    [1] = { {125,255,209}, {98,255,210}, {74,255,209}, {46,255,209}, {20,255,210}, {244,255,213}, {125,255,209}, {98,255,210}, {74,255,209}, {46,255,209}, {20,255,210}, {244,255,213}, {125,255,209}, {98,255,210}, {74,255,209}, {46,255,209}, {20,255,210}, {244,255,213}, {125,255,209}, {98,255,210}, {74,255,209}, {46,255,209}, {20,255,210}, {244,255,213}, {244,255,213}, {244,255,213}, {244,255,213}, {20,255,210}, {46,255,209}, {74,255,209}, {98,255,210}, {125,255,209}, {244,255,213}, {20,255,210}, {46,255,209}, {74,255,209}, {98,255,210}, {125,255,209}, {244,255,213}, {20,255,210}, {46,255,209}, {74,255,209}, {98,255,210}, {125,255,209}, {244,255,213}, {20,255,210}, {46,255,209}, {74,255,209}, {98,255,210}, {125,255,209}, {244,255,213}, {244,255,213} },

    [2] = { {125,255,209}, {98,255,210}, {74,255,209}, {46,255,209}, {20,255,210}, {244,255,213}, {125,255,209}, {98,255,210}, {74,255,209}, {46,255,209}, {20,255,210}, {244,255,213}, {125,255,209}, {98,255,210}, {74,255,209}, {46,255,209}, {20,255,210}, {244,255,213}, {125,255,209}, {98,255,210}, {74,255,209}, {46,255,209}, {20,255,210}, {244,255,213}, {244,255,213}, {244,255,213}, {244,255,213}, {20,255,210}, {46,255,209}, {74,255,209}, {98,255,210}, {125,255,209}, {244,255,213}, {20,255,210}, {46,255,209}, {74,255,209}, {98,255,210}, {125,255,209}, {244,255,213}, {20,255,210}, {46,255,209}, {74,255,209}, {98,255,210}, {125,255,209}, {244,255,213}, {20,255,210}, {46,255,209}, {74,255,209}, {98,255,210}, {125,255,209}, {244,255,213}, {244,255,213} },

    [3] = { {125,255,209}, {98,255,210}, {74,255,209}, {46,255,209}, {20,255,210}, {244,255,213}, {125,255,209}, {98,255,210}, {74,255,209}, {46,255,209}, {20,255,210}, {244,255,213}, {125,255,209}, {98,255,210}, {74,255,209}, {46,255,209}, {20,255,210}, {244,255,213}, {125,255,209}, {98,255,210}, {74,255,209}, {46,255,209}, {20,255,210}, {244,255,213}, {244,255,213}, {244,255,213}, {244,255,213}, {20,255,210}, {46,255,209}, {74,255,209}, {98,255,210}, {125,255,209}, {244,255,213}, {20,255,210}, {46,255,209}, {74,255,209}, {98,255,210}, {125,255,209}, {244,255,213}, {20,255,210}, {46,255,209}, {74,255,209}, {98,255,210}, {125,255,209}, {244,255,213}, {20,255,210}, {46,255,209}, {74,255,209}, {98,255,210}, {125,255,209}, {244,255,213}, {244,255,213} },

    [4] = { {125,255,209}, {98,255,210}, {74,255,209}, {46,255,209}, {20,255,210}, {244,255,213}, {125,255,209}, {98,255,210}, {74,255,209}, {46,255,209}, {20,255,210}, {244,255,213}, {125,255,209}, {98,255,210}, {74,255,209}, {46,255,209}, {20,255,210}, {244,255,213}, {125,255,209}, {98,255,210}, {74,255,209}, {46,255,209}, {20,255,210}, {244,255,213}, {244,255,213}, {244,255,213}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [5] = { {125,255,209}, {98,255,210}, {74,255,209}, {46,255,209}, {20,255,210}, {244,255,213}, {125,255,209}, {98,255,210}, {74,255,209}, {46,255,209}, {20,255,210}, {244,255,213}, {125,255,209}, {98,255,210}, {74,255,209}, {46,255,209}, {20,255,210}, {244,255,213}, {125,255,209}, {98,255,210}, {74,255,209}, {46,255,209}, {20,255,210}, {244,255,213}, {244,255,213}, {244,255,213}, {244,255,213}, {20,255,210}, {46,255,209}, {74,255,209}, {98,255,210}, {125,255,209}, {244,255,213}, {20,255,210}, {46,255,209}, {74,255,209}, {98,255,210}, {125,255,209}, {244,255,213}, {20,255,210}, {46,255,209}, {74,255,209}, {98,255,210}, {125,255,209}, {244,255,213}, {20,255,210}, {46,255,209}, {74,255,209}, {98,255,210}, {125,255,209}, {244,255,213}, {244,255,213} },

    [6] = { {125,255,209}, {98,255,210}, {74,255,209}, {46,255,209}, {20,255,210}, {244,255,213}, {125,255,209}, {98,255,210}, {74,255,209}, {46,255,209}, {20,255,210}, {244,255,213}, {125,255,209}, {98,255,210}, {74,255,209}, {46,255,209}, {20,255,210}, {244,255,213}, {125,255,209}, {98,255,210}, {74,255,209}, {46,255,209}, {20,255,210}, {244,255,213}, {244,255,213}, {244,255,213}, {244,255,213}, {20,255,210}, {46,255,209}, {74,255,209}, {98,255,210}, {125,255,209}, {244,255,213}, {20,255,210}, {46,255,209}, {74,255,209}, {98,255,210}, {125,255,209}, {244,255,213}, {20,255,210}, {46,255,209}, {74,255,209}, {98,255,210}, {125,255,209}, {244,255,213}, {20,255,210}, {46,255,209}, {74,255,209}, {98,255,210}, {125,255,209}, {244,255,213}, {244,255,213} },

    [7] = { {125,255,209}, {98,255,210}, {74,255,209}, {46,255,209}, {20,255,210}, {244,255,213}, {125,255,209}, {98,255,210}, {74,255,209}, {46,255,209}, {20,255,210}, {244,255,213}, {125,255,209}, {98,255,210}, {74,255,209}, {46,255,209}, {20,255,210}, {244,255,213}, {125,255,209}, {98,255,210}, {74,255,209}, {46,255,209}, {20,255,210}, {244,255,213}, {244,255,213}, {244,255,213}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
    case 5:
      set_layer_color(5);
      break;
    case 6:
      set_layer_color(6);
      break;
    case 7:
      set_layer_color(7);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {

    case DUAL_FUNC_0:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_QUOTE);
        } else {
          unregister_code16(KC_QUOTE);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_QUES);
        } else {
          unregister_code16(KC_QUES);
        }  
      }  
      return false;
    case DUAL_FUNC_1:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_COMMA);
        } else {
          unregister_code16(KC_COMMA);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_MINUS);
        } else {
          unregister_code16(KC_MINUS);
        }  
      }  
      return false;
    case DUAL_FUNC_2:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_DOT);
        } else {
          unregister_code16(KC_DOT);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_EXLM);
        } else {
          unregister_code16(KC_EXLM);
        }  
      }  
      return false;
    case DUAL_FUNC_3:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_SLASH);
        } else {
          unregister_code16(KC_SLASH);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_UNDS);
        } else {
          unregister_code16(KC_UNDS);
        }  
      }  
      return false;
    case DUAL_FUNC_4:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          layer_move(0);
        } else {
          layer_move(0);
        }
      } else {
        if (record->event.pressed) {
          layer_on(3);
        } else {
          layer_off(3);
        }  
      }  
      return false;
    case DUAL_FUNC_5:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_LABK);
        } else {
          unregister_code16(KC_LABK);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_SLASH);
        } else {
          unregister_code16(KC_SLASH);
        }  
      }  
      return false;
    case DUAL_FUNC_6:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LCTL(KC_PAGE_UP));
        } else {
          unregister_code16(LCTL(KC_PAGE_UP));
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_SHIFT);
        } else {
          unregister_code16(KC_LEFT_SHIFT);
        }  
      }  
      return false;
    case DUAL_FUNC_7:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LCTL(KC_PGDN));
        } else {
          unregister_code16(LCTL(KC_PGDN));
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_ALT);
        } else {
          unregister_code16(KC_LEFT_ALT);
        }  
      }  
      return false;
    case DUAL_FUNC_8:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F7);
        } else {
          unregister_code16(KC_F7);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F17);
        } else {
          unregister_code16(KC_F17);
        }  
      }  
      return false;
    case DUAL_FUNC_9:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F8);
        } else {
          unregister_code16(KC_F8);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F18);
        } else {
          unregister_code16(KC_F18);
        }  
      }  
      return false;
    case DUAL_FUNC_10:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F9);
        } else {
          unregister_code16(KC_F9);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F19);
        } else {
          unregister_code16(KC_F19);
        }  
      }  
      return false;
    case DUAL_FUNC_11:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F10);
        } else {
          unregister_code16(KC_F10);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F20);
        } else {
          unregister_code16(KC_F20);
        }  
      }  
      return false;
    case DUAL_FUNC_12:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F1);
        } else {
          unregister_code16(KC_F1);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F11);
        } else {
          unregister_code16(KC_F11);
        }  
      }  
      return false;
    case DUAL_FUNC_13:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F2);
        } else {
          unregister_code16(KC_F2);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F12);
        } else {
          unregister_code16(KC_F12);
        }  
      }  
      return false;
    case DUAL_FUNC_14:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F3);
        } else {
          unregister_code16(KC_F3);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F13);
        } else {
          unregister_code16(KC_F13);
        }  
      }  
      return false;
    case DUAL_FUNC_15:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F4);
        } else {
          unregister_code16(KC_F4);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F14);
        } else {
          unregister_code16(KC_F14);
        }  
      }  
      return false;
    case DUAL_FUNC_16:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F5);
        } else {
          unregister_code16(KC_F5);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F15);
        } else {
          unregister_code16(KC_F15);
        }  
      }  
      return false;
    case DUAL_FUNC_17:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F6);
        } else {
          unregister_code16(KC_F6);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_F16);
        } else {
          unregister_code16(KC_F16);
        }  
      }  
      return false;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}


