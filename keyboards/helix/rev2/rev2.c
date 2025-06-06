/* Copyright 2018 MakotoKurauchi
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include "rev2.h"

// Each keymap.c should use is_keyboard_master() instead of 'is_master'.
// But keep 'is_master' for a while for backwards compatibility
//  for the old keymap.c.
uint8_t is_master = false;

bool is_mac_mode(void) {
    // This is the opposite of the QMK standard, but we'll leave it for backwards compatibility.
    return keymap_config.swap_lalt_lgui == false;
}

void set_mac_mode_kb(bool macmode) {
    /* The result is the same as pressing the AG_NORM(=MAGIC_UNSWAP_ALT_GUI)/AG_SWAP(=MAGIC_SWAP_ALT_GUI) keys.
     * see
     *   https://github.com/qmk/qmk_firmware/blob/fb4a6ad30ea7a648acd59793ed4a30c3a8d8dc32/quantum/process_keycode/process_magic.c#L123-L124
     *   https://github.com/qmk/qmk_firmware/blob/fb4a6ad30ea7a648acd59793ed4a30c3a8d8dc32/quantum/process_keycode/process_magic.c#L80-L81
     */
    keymap_config.swap_lalt_lgui = keymap_config.swap_ralt_rgui = !macmode;
    eeconfig_update_keymap(&keymap_config);
}

void matrix_init_kb(void) {
    // Each keymap.c should use is_keyboard_master() instead of is_master.
    // But keep is_master for a while for backwards compatibility
    //  for the old keymap.c.
    is_master = is_keyboard_master();

    matrix_init_user();
};

void keyboard_post_init_kb(void) {
#if defined(DEBUG_MATRIX_SCAN_RATE)
    debug_enable = true;
#endif
    keyboard_post_init_user();
}

#ifdef OLED_ENABLE
void render_helix_logo(void) {
    static const char helix_logo[] PROGMEM ={
        0x80,0x81,0x82,0x83,0x84,0x85,0x86,0x87,0x88,0x89,0x8a,0x8b,0x8c,0x8d,0x8e,0x8f,0x90,0x91,0x92,0x93,0x94,
        0xa0,0xa1,0xa2,0xa3,0xa4,0xa5,0xa6,0xa7,0xa8,0xa9,0xaa,0xab,0xac,0xad,0xae,0xaf,0xb0,0xb1,0xb2,0xb3,0xb4,
        0xc0,0xc1,0xc2,0xc3,0xc4,0xc5,0xc6,0xc7,0xc8,0xc9,0xca,0xcb,0xcc,0xcd,0xce,0xcf,0xd0,0xd1,0xd2,0xd3,0xd4,
        0};
    oled_write_P(helix_logo, false);
}

bool oled_task_kb(void) {
    if (oled_task_user()) {
        /* keymap/user level oled_task_user() dose not exist */
        led_t led_state = host_keyboard_led_state();
        oled_write_P(led_state.num_lock ? PSTR("NUMLOCK") : PSTR("       "), false);
        oled_write_P(led_state.caps_lock ? PSTR("CAPS") : PSTR("    "), false);
        oled_write_P(led_state.scroll_lock ? PSTR("SCLK") : PSTR("    "), false);
        oled_advance_page(true);
        render_helix_logo();
    }
    return false;
}
#endif /* end of OLED_ENABLE */
