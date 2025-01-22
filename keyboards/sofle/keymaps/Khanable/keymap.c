#include QMK_KEYBOARD_H

enum sofle_layers {
    _LETTERS,
    _GAME,
    _SLETTERS,
    _SYMBOLS,
    _NUMBERS,
    _FKEYS,
};

// enum custom_keycodes { KC_UNSFT_QUOTE = SAFE_RANGE };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_LETTERS] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_NO, KC_NO, LT(_FKEYS, KC_A), LT(_NUMBERS, KC_S), LT(_SYMBOLS, KC_D), LSFT_T(KC_F), KC_G, KC_H, RSFT_T(KC_J), LT(_SYMBOLS, KC_K), LT(_NUMBERS, KC_L), LT(_FKEYS, KC_SCLN), KC_NO, KC_NO, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_NO, KC_NO, KC_N, KC_M, KC_COMMA, KC_DOT, KC_SLSH, KC_NO, KC_NO, KC_NO, KC_LGUI, LALT_T(KC_ESC), LCTL_T(KC_BSPC), RCTL_T(KC_ENTER), RALT_T(KC_SPC), KC_RGUI, KC_NO, KC_NO),

    [_GAME] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_T, KC_Q, KC_W, KC_E, KC_R, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_NO, KC_NO, KC_LSFT, KC_A, KC_S, KC_D, KC_F, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_NO, KC_NO, KC_G, KC_Z, KC_X, KC_C, KC_V, KC_NO, KC_NO, KC_N, KC_M, KC_COMMA, KC_DOT, KC_SLSH, KC_NO, KC_NO, KC_NO, KC_LALT, KC_SPC, KC_LCTL, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),

    // [_SLETTERS] = LAYOUT(
    //   KC_NO,   KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,                     KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,  KC_NO,
    //   KC_NO,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                     KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,  KC_NO,
    //   KC_NO,   KC_A,   KC_S,    KC_D,    KC_F,    KC_G,                     KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN,  KC_NO,
    //   KC_NO,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B, KC_NO,     KC_NO,KC_N,    KC_M, KC_UNSFT_QUOTE, KC_QUOTE, KC_SLSH,  KC_NO,
    //                  KC_NO,KC_NO,KC_LGUI, LALT_T(KC_TAB), LCTL_T(KC_BSPC),      RCTL_T(KC_ENTER),  RALT_T(KC_SPC), KC_RGUI, KC_NO, KC_NO
    // ),
    //
    [_SYMBOLS] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, S(KC_EQUAL), S(KC_DOT), S(KC_COMMA), KC_NO, KC_NO, S(KC_9), S(KC_0), KC_MINUS, S(KC_MINUS), KC_NO, KC_NO, S(KC_BACKSLASH), S(KC_1), S(KC_8), S(KC_6), S(KC_GRAVE), KC_NO, S(KC_4), S(KC_5), KC_EQUAL, S(KC_7), KC_NO, KC_NO, S(KC_2), S(KC_3), KC_RIGHT_BRACKET, KC_LEFT_BRACKET, KC_NO, KC_NO, KC_NO, KC_NO, S(KC_LEFT_BRACKET), S(KC_RIGHT_BRACKET), KC_GRAVE, KC_BACKSLASH, KC_NO, KC_NO, KC_NO, KC_LGUI, LALT_T(KC_TAB), LCTL_T(KC_DEL), RCTL_T(KC_ENTER), RALT_T(KC_SPC), KC_RGUI, KC_NO, KC_NO),

    [_NUMBERS] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_7, KC_8, KC_9, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_4, KC_5, KC_6, KC_NO, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, KC_NO, KC_NO, KC_NO, KC_0, KC_1, KC_2, KC_3, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LGUI, LALT_T(KC_ESC), LCTL_T(KC_BSPC), RCTL_T(KC_ENTER), RALT_T(KC_SPC), KC_RGUI, KC_NO, KC_NO),

    [_FKEYS] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F12, KC_F7, KC_F8, KC_F9, KC_NO, KC_INS, S(KC_INS), KC_NO, KC_NO, KC_PRINT_SCREEN, KC_NO, KC_NO, KC_F11, KC_F4, KC_F5, KC_F6, KC_NO, KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_NO, KC_NO, KC_NO, KC_F10, KC_F1, KC_F2, KC_F3, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LGUI, LALT_T(KC_ESC), LCTL_T(KC_BSPC), RCTL_T(KC_ENTER), RALT_T(KC_SPC), KC_RGUI, KC_NO, KC_NO

                      )};

const key_override_t quote_key_override         = ko_make_with_layers(MOD_MASK_SHIFT, KC_DOT, KC_QUOTE, (1 << _LETTERS));
const key_override_t shifted_quote_key_override = ko_make_with_layers(MOD_MASK_SHIFT, KC_COMMA, S(KC_QUOTE), (1 << _LETTERS));
// not working
//  const key_override_t shifted_tab_key_override   = ko_make_with_layers(MOD_MASK_SHIFT, LALT_T(KC_ESC), S(KC_TAB), (1 << _LETTERS));

// This globally defines all key overrides to be used
const key_override_t *key_overrides[] = {&quote_key_override, &shifted_quote_key_override};

#ifdef COMBO_ENABLE
enum combo_events {
    TG_GAME_LAYER,
    GAME_LAYER_OSL_NUMBERS,
    GAME_LAYER_OSL_FKEYS,
    GAME_LAYER_TAB,
    GAME_LAYER_ESC,
    GAME_LAYER_B,
    GAME_LAYER_ENT,
    LETTERS_LAYER_ENT,
};

const uint16_t PROGMEM combo_tg_game_layer[]          = {KC_M, KC_COMMA, KC_DOT, KC_SLSH, COMBO_END};
const uint16_t PROGMEM combo_game_layer_osl_numbers[] = {KC_A, KC_S, KC_D, COMBO_END};
const uint16_t PROGMEM combo_game_layer_osl_fkeys[]   = {KC_T, KC_Q, KC_E, COMBO_END};
const uint16_t PROGMEM combo_game_layer_tab[]         = {KC_Q, KC_W, KC_E, COMBO_END};
const uint16_t PROGMEM combo_game_layer_esc[]         = {KC_LSFT, KC_A, KC_D, COMBO_END};
const uint16_t PROGMEM combo_game_layer_b[]           = {KC_G, KC_Z, KC_C, COMBO_END};
const uint16_t PROGMEM combo_game_layer_ent[]         = {KC_Z, KC_X, KC_C, COMBO_END};
const uint16_t PROGMEM combo_letters_layer_ent[]      = {KC_X, KC_C, KC_V, COMBO_END};

combo_t key_combos[] = {
    [TG_GAME_LAYER] = COMBO(combo_tg_game_layer, TG(_GAME)), [GAME_LAYER_OSL_NUMBERS] = COMBO(combo_game_layer_osl_numbers, OSL(_NUMBERS)), [GAME_LAYER_OSL_FKEYS] = COMBO(combo_game_layer_osl_fkeys, OSL(_FKEYS)), [GAME_LAYER_TAB] = COMBO(combo_game_layer_tab, KC_TAB), [GAME_LAYER_ESC] = COMBO(combo_game_layer_esc, KC_ESC), [GAME_LAYER_B] = COMBO(combo_game_layer_b, KC_B), [GAME_LAYER_ENT] = COMBO(combo_game_layer_ent, KC_ENTER), [LETTERS_LAYER_ENT] = COMBO(combo_letters_layer_ent, KC_ENTER),
};

bool combo_should_trigger(uint16_t combo_index, combo_t *combo, uint16_t keycode, keyrecord_t *record) {
    if ((layer_state_is(_LETTERS) || layer_state_is(_GAME)) && combo_index == TG_GAME_LAYER) {
        return true;
    }

    if (layer_state_is(_LETTERS) && combo_index == LETTERS_LAYER_ENT) {
        return true;
    }

    if (layer_state_is(_GAME) && (combo_index == GAME_LAYER_ENT || combo_index == GAME_LAYER_B || combo_index == GAME_LAYER_ESC || combo_index == GAME_LAYER_TAB || combo_index == GAME_LAYER_OSL_FKEYS || combo_index == GAME_LAYER_OSL_NUMBERS)) {
        return true;
    }

    return false;
}
#endif

#ifdef OLED_ENABLE
// static void print_right(void) {
//     oled_write_P(PSTR("\n\n"), false);
//     oled_write_P(PSTR("\n\n\n\n"), false);
//
//     oled_write_ln_P(PSTR("  WPM"), false);
//     oled_write_P(PSTR("  "), false);
//     oled_write_ln(get_u8_str(get_current_wpm(), '0'), false);
// }

static void print_left(void) {
    oled_write_P(PSTR("\n\n"), false);

    oled_write_ln_P(PSTR("B-Rad"), false);
    oled_write_P(PSTR("\n\n\n"), false);

    oled_write_ln_P(PSTR("LAYER"), false);
    switch (get_highest_layer(layer_state)) {
        case _LETTERS:
            oled_write_ln_P(PSTR("abcs"), false);
            break;
        case _GAME:
            oled_write_ln_P(PSTR("Game"), false);
            break;
        case _SLETTERS:
            oled_write_ln_P(PSTR("ABCs"), false);
            break;
        case _SYMBOLS:
            oled_write_ln_P(PSTR("Sym"), false);
            break;
        case _NUMBERS:
            oled_write_ln_P(PSTR("Num"), false);
            break;
        case _FKEYS:
            oled_write_ln_P(PSTR("Fn"), false);
            break;
        default:
            oled_write_ln_P(PSTR("Undef"), false);
    }
}

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    return OLED_ROTATION_270;
}

bool oled_task_user(void) {
    print_left();
    return false;
}

#endif

// bool process_record_user(uint16_t keycode, keyrecord_t *record) {
//     uint8_t mod_state = get_mods();
//
//
//     if (layer_state_is(_SLETTERS) && !(mod_state & MOD_BIT(KC_LSFT))) {
//         add_mods(MOD_BIT(KC_LSFT));
//     } else if (!layer_state_is(_SLETTERS) && (mod_state & MOD_BIT(KC_LSFT))) {
//         del_mods(MOD_BIT(KC_LSFT));
//     }
//
//     switch (keycode) {
//         case KC_UNSFT_QUOTE:
//             if (record->event.pressed) {
//                 tap_code(KC_QUOTE);
//             }
//             return false;
//     }
//
//     return true;
// }
