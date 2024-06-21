#include QMK_KEYBOARD_H

enum layer_number {
  _COLEMAK = 0,
  _QWERTY,
  _L2,
  _L3,
  _L4,
  
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* COLEMAK
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | ` ~  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  -   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   F  |   P  |   B  |                    |   J  |   L  |   U  |   Y  |   ;  | Bksp |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LCtrl |   A  |   R  |   S  |   T  |   G  |-------.    ,-------|   M  |   N  |   E  |   I  |   O  |  '   |
 * |------+------+------+------+------+------|   [   |    |    ]  |------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   C  |   D  |   V  |-------|    |-------|   K  |   H  |   ,  |   .  |   /  |Enter |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI |LOWER | /Space  /       \RShift\  |RAISE | AltGr| Esc  |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */

 [_COLEMAK] = LAYOUT(
  KC_GRV,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
  KC_TAB,   KC_Q,   KC_W,    KC_F,    KC_P,    KC_B,                     KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN, KC_BSPC,
  KC_LCTL,  KC_A,   KC_R,    KC_S,    KC_T,    KC_G,                     KC_M,    KC_N,    KC_E,    KC_I,    KC_O,    KC_QUOT,
  KC_LSFT,  KC_Z,   KC_X,    KC_C,    KC_D,    KC_V, KC_LBRC,  KC_RBRC,  KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENT,
                        KC_LALT, KC_LGUI, MO(_L3), KC_SPC, KC_RSFT, MO(_L2), KC_ALGR, KC_ESC
),

/* QWERTY
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | ` ~  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  -   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  | Bksp |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LCtrl |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------|   [   |    |    ]  |------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |Enter |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI |LOWER | /Space  /       \RShift\  |RAISE | AltGr| Esc  |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */

 [_QWERTY] = LAYOUT(
  KC_GRV,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
  KC_TAB,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                     KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
  KC_LCTL,  KC_A,   KC_S,    KC_D,    KC_F,    KC_G,                     KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  KC_LSFT,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B, KC_LBRC,  KC_RBRC,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,  KC_ENT,
                        KC_LALT, KC_LGUI, MO(_L3), KC_SPC, KC_RSFT, MO(_L2), KC_ALGR, KC_ESC
),

/* L2
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |  F1  |  F2  |  F3  |  F4  |  F5  |                    |  F6  |  F7  |  F8  |  F9  |  F10 | F11  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |  7   |  8   |  9   |      |                    | PgUp | Home |  Up  | End  | Del  | F12  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |  4   |  5   |  6   |  .   |-------.    ,-------| PgDn | Left | Down | Right| Ins  |      |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |      |      |  1   |  2   |  3   |  0   |-------|    |-------|      |      |      |      |  \   |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   |      |      |      | /Bksp   /       \      \  | {L2} |      |      |
 *                   |      |      |      |/Shift  /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */

[_L2] = LAYOUT(
  _______,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                      KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10, KC_F11,
  _______, _______,    KC_7,    KC_8,    KC_9, _______,                    KC_PGUP, KC_HOME,   KC_UP,  KC_END,  KC_DEL, KC_F12,
  _______, _______,    KC_4,    KC_5,    KC_6, KC_PDOT,                    KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT,  KC_INS, _______,
  _______, _______,    KC_1,    KC_2,    KC_3,    KC_0,  _______, _______, _______, _______, _______, _______, KC_BSLS, _______,
                             _______, _______, _______, LSFT_T(KC_BSPC), _______, _______, KC_DEL, _______
),


/* L3
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |                    |      |  +   |  [   |  ]   |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------.    ,-------|      |  -   |  (   |  )   |  _   |  `   |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|    |-------|      |  =   |  <   |  >   |  \   |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | L4   |      | {L3} | /       /       \Bksp  \  |      |      |      |
 *                   |      |      |      |/       /         \ Shift\ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
[_L3] = LAYOUT(
  _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______,                   _______, KC_PLUS, KC_LBRC, KC_RBRC, _______, _______,
  _______, _______, _______, _______, _______, _______,                   _______, KC_MINS, KC_LPRN, KC_RPRN, KC_UNDS, KC_GRV,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_EQL,  KC_LT,   KC_GT,   KC_BSLS, _______,
                             MO(_L4), _______, _______, _______,  RSFT_T(KC_BSPC), XXXXXXX, _______, _______
),

/* L4
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |REBOOT|      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | FLASH|      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------.    ,-------|      |      |      |      |      |      |
 * |------+------+------+------+------+------|QWERTY |    |COLEMAK|------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|    |-------|      |      |      |      |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   |      |      |      | /       /       \      \  |      |      |      |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
[_L4] = LAYOUT(
QK_REBOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, DF(_QWERTY), DF(_COLEMAK), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                             XXXXXXX, XXXXXXX, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
),


};


// layer_state_t layer_state_set_user(layer_state_t state) {
//   return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
// }

//SSD1306 OLED update loop, make sure to enable OLED_ENABLE=yes in rules.mk
#ifdef OLED_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (is_keyboard_master()) {
    return OLED_ROTATION_270;
  } else {
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  }
}

// When you add source files to SRC in rules.mk, you can use functions.
const char *read_layer_state(void);
const char *read_logo(void);
void set_keylog(uint16_t keycode, keyrecord_t *record);
const char *read_keylog(void);
const char *read_keylogs(void);

// const char *read_mode_icon(bool swap);
// const char *read_host_led_state(void);
// void set_timelog(void);
// const char *read_timelog(void);

bool oled_task_user(void) {
  if (is_keyboard_master()) {
    oled_clear();
    if (default_layer_state & (1 << _QWERTY)) {
      oled_write_ln(" STD", false);
      oled_write_ln("", false);
    } else if (default_layer_state & (1 << _COLEMAK)) {
      oled_write_ln("COLE", false);
      oled_write_ln(" MAK", false);
    }

    if (layer_state & (1 << _L4)) {
      oled_write_ln(" SYS", false);
    } else if (layer_state & (1 << _L3)) {
      oled_write_ln(" L 3", false);
    } else if (layer_state & (1 << _L2)) {
      oled_write_ln(" L 2", false);
    } else {
      oled_write_ln("", false);
    }
   oled_write_ln("", false);

   led_t led_state = host_keyboard_led_state();
   if (led_state.num_lock) {
    oled_write_ln("numlk", false);
   }
  
    //oled_write_ln(read_layer_state(), false);
    // oled_write_ln(read_keylog(), false);
    // oled_write_ln(read_keylogs(), false);
    //oled_write_ln(read_mode_icon(keymap_config.swap_lalt_lgui), false);
    //oled_write_ln(read_host_led_state(), false);
    //oled_write_ln(read_timelog(), false);
  } else {
    oled_write(read_logo(), false);
  }
    return false;
}
#endif // OLED_ENABLE

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
#ifdef OLED_ENABLE
    set_keylog(keycode, record);
#endif
    // set_timelog();
  }
  return true;
}
