static const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * Keymap: default lay in COLEMAK-ish, nut missing quotes, braces (see l2)
     *
     * +-----+---+---+---+---+---+---+    +---+---+---+---+---+---+-----+
     * | esc | 1 | 2 | 3 | 4 | 5 | ` |    | = | 6 | 7 | 8 | 9 | 0 | bak |
     * +-----+---+---+---+---+---+---+    +---|---+---+---+---+---+-----+
     * | tab | Q | W | F | P | G |   |    |   | J | L | U | Y | ; |  |  |
     * +-----+---+---+---+---+---|bak|    |CMD|---+---+---+---+---+-----+
     * | ctl | A | R | S | T | D |---+    +---| H | N | E | I | O | ent |
     * +-----+---+---+---+---+---+   |    |   +---+---+---+---+---+-----+
     * | sft | Z | X | C | V | B |sL2|    |sL2| K | M | < | > | ? | sft |
     * +-----+---+---+---+---+---+---+    +---+---+---+---+---+---+-----+
     *       |   |   |   |   |sL2|            |sL2|lft|dwn| up|rgt|
     *       +---+---+---+---+---+            +---+---+---+---+---+
     *
     *                     +---+---+    +---+---+
     *                     |+L1|sL3|    |   |   |
     *                 +---+---+---+    +---+---+---+
     *                 |   |   |alt|    |alt|   |   |
     *                 |cmd|sft|---+    +---|ent|spc|
     *                 |   |   |ctl|    |ctl|(1)|   |
     *                 +---+---+---+    +---+---+---+
     *
     * (1) 'sL2' - layer modification.
     *
     * Keymap: Layer 1 is QWERTY
     *
     * +-----+---+---+---+---+---+---+    +---+---+---+---+---+---+-----+
     * |  ^  | ^ | ^ | ^ | ^ | ^ | ^ |    | ^ | ^ | ^ | ^ | ^ | ^ |  ^  |
     * +-----+---+---+---+---+---+---+    +---|---+---+---+---+---+-----+
     * |  ^  | Q | W | E | R | T |   |    |   | Y | U | I | O | P |  ^  |
     * +-----+---+---+---+---+---|   |    |   |---+---+---+---+---+-----+
     * |  ^  | A | S | D | F | G |---+    +---| H | J | K | L | ; |  ^  |
     * +-----+---+---+---+---+---+   |    |   +---+---+---+---+---+-----+
     * |  ^  | Z | X | C | V | B |   |    |   | K | M | < | > | ? |  ^  |
     * +-----+---+---+---+---+---+---+    +---+---+---+---+---+---+-----+
     *       |   |   |   |   |   |            |   | ^ | ^ | ^ | ^ |
     *       +---+---+---+---+---+            +---+---+---+---+---+
     *
     *                     +---+---+    +---+---+
     *                     |+L0|   |    |   |   |
     *                 +---+---+---+    +---+---+---+
     *                 |   |   | ^ |    | ^ |   |   |
     *                 |^  | ^ |---+    +---| ^ | ^ |
     *                 |   |   | ^ |    | ^ |   |   |
     *                 +---+---+---+    +---+---+---+
     *
     *
     * Keymap: Layer 2 is a symbol/punctuation layer
     *
     * +-----+---+---+---+---+---+---+    +---+---+---+---+---+---+-----+
     * |     |   |   |   |   |   |   |    |   |   |   |   |   |   |     |
     * +-----+---+---+---+---+---+---+    +---|---+---+---+---+---+-----+
     * |     |   | | | & | * |   |   |    |   |   | { | } |   |   |     |
     * +-----+---+---+---+---+---|   |    |   |---+---+---+---+---+-----+
     * |     |   | + | - | = | @ |---+    +---| ' | ( | ) | " |   |     |
     * +-----+---+---+---+---+---+   |    |   +---+---+---+---+---+-----+
     * |     |   | % | / | ! | # |   |    |   | \ | [ | ] | / |   |     |
     * +-----+---+---+---+---+---+---+    +---+---+---+---+---+---+-----+
     *       |   |   |   |   |   |            |   |   |   |   |   |
     *       +---+---+---+---+---+            +---+---+---+---+---+
     *
     *                     +---+---+    +---+---+
     *                     |+L0|   |    |   |   |
     *                 +---+---+---+    +---+---+---+
     *                 |   |   |   |    |   |   |   |
     *                 |   |   |---+    +---| - | _ |
     *                 |   |   |   |    |   |   |   |
     *                 +---+---+---+    +---+---+---+
     *
     * Keymap: Layer 3 - media.
     *
     * +-----+---+---+---+---+---+---+    +---+---+---+---+---+---+-----+
     * |     |   |   |   |   |   |   |    |   |   |   |   |   |   |     |
     * +-----+---+---+---+---+---+---+    +---|---+---+---+---+---+-----+
     * |     |   |   |   |   |   |   |    |   |   |MUT|VLD|VLU|   |     |
     * +-----+---+---+---+---+---|   |    |   |---+---+---+---+---+-----+
     * |     |   |   |   |   |   |---+    +---|   |PRV|PLY|NXT|   |     |
     * +-----+---+---+---+---+---+   |    |   +---+---+---+---+---+-----+
     * |     |   |   |   |   |   |   |    |   |   |   |   |   |   |     |
     * +-----+---+---+---+---+---+---+    +---+---+---+---+---+---+-----+
     *      |   |   |   |   |   |            |   |   |   |   |   |
     *      +---+---+---+---+---+            +---+---+---+---+---+
     *
     *                     +---+---+    +---+---+
     *                     |+L0|   |    |   |   |
     *                 +---+---+---+    +---+---+---+
     *                 |   |   |   |    |   |   |   |
     *                 |   |   |---+    +---|   |   |
     *                 |   |   |   |    |   |   |   |
     *                 +---+---+---+    +---+---+---+
     *
     * Other ideas for functions & keys:
     *   - common hotkeys; save, close.
     *     - those can map between OS-standard and, say, emacs.
     */

    KEYMAP( // L0: default
         ESC,    1,    2,    3,    4,    5,  GRV,
         TAB,    Q,    W,    F,    P,    G, BSPC,
        LCTL,    A,    R,    S,    T,    D,
        LSFT,    Z,    X,    C,    V,    B, FN17,
          NO,   NO,   NO,   NO, FN17,
                                       FN1, FN18,
                                            LALT,
                                LGUI, FN17, LCTL,

         EQL,    6,    7,    8,    9,    0, BSPC,
        RGUI,    J,    L,    U,    Y, SCLN, BSLS,
                 H,    N,    E,    I,    O,  ENT,
        FN17,    K,    M, COMM,  DOT, SLSH, RSFT,
                    FN17, LEFT, DOWN,   UP, RGHT,
          NO,   NO,
        RALT,
        RCTL, FN17,  SPC
    ),

    KEYMAP( // L1: QWERTY
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
        TRNS,    Q,    W,    E,    R,    T, TRNS,
        TRNS,    A,    S,    D,    F,    G,
        TRNS,    Z,    X,    C,    V,    B, TRNS,
        TRNS, TRNS, TRNS, TRNS, TRNS,
                                       FN0, TRNS,
                                            TRNS,
                                TRNS, TRNS, TRNS,

        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
        TRNS,    Y,    U,    I,    O,    P, BSLS,
                 H,    J,    K,    L, SCLN, QUOT,
        TRNS,    K,    M, COMM,  DOT, SLSH, TRNS,
                    TRNS, TRNS, TRNS, TRNS, TRNS,
        TRNS, TRNS,
        TRNS,
        TRNS, TRNS, TRNS
    ),

    KEYMAP( // L2: punct
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
        TRNS, TRNS,  FN4,  FN3,  FN5, TRNS, TRNS,
        TRNS, TRNS,  FN7, MINS,  EQL, FN19,
        TRNS, TRNS,  FN9, SLSH, FN10, FN20, TRNS,
        TRNS, TRNS, TRNS, TRNS, TRNS,
                                      TRNS, TRNS,
                                            TRNS,
                                TRNS, TRNS, TRNS,

        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
        TRNS, TRNS, FN11, FN12, TRNS, TRNS, TRNS,
              QUOT, FN13, FN14, FN15, SCLN, TRNS,
        TRNS, BSLS, LBRC, RBRC, SLSH, TRNS, TRNS,
                    TRNS, TRNS, TRNS, TRNS, TRNS,
        TRNS, TRNS,
        TRNS,
        TRNS, TRNS, FN16
    ),

    KEYMAP( // L3: media
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
        TRNS, TRNS, TRNS, TRNS, TRNS,
                                      TRNS, TRNS,
                                            TRNS,
                                TRNS, TRNS, TRNS,

        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
        TRNS, TRNS, MUTE, VOLD, VOLU, TRNS, TRNS,
              TRNS, MPRV, MPLY, MNXT, TRNS, TRNS,
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
                    TRNS, TRNS, TRNS, TRNS, TRNS,
        TRNS, TRNS,
        TRNS,
        TRNS, TRNS, TRNS
    )
};

static const uint16_t PROGMEM fn_actions[] = {
    ACTION_DEFAULT_LAYER_SET(0),    // Set Layer 0 (Colematt)
    ACTION_DEFAULT_LAYER_SET(1),     // Set Layer 1 (Qwerty)

    /* punctuation layer */
    ACTION_MODS_KEY(MOD_LSFT, KC_3),         // # FN2
    ACTION_MODS_KEY(MOD_LSFT, KC_7),         // & FN3
    ACTION_MODS_KEY(MOD_LSFT, KC_BSLASH),    // | FN4
    ACTION_MODS_KEY(MOD_LSFT, KC_8),         // * FN5
    ACTION_MODS_KEY(MOD_LSFT, KC_6),         // ^ FN6
    ACTION_MODS_KEY(MOD_LSFT, KC_EQUAL),     // + FN7
    ACTION_MODS_KEY(MOD_LSFT, KC_GRV),       // ~ FN8
    ACTION_MODS_KEY(MOD_LSFT, KC_5),         // % FN9
    ACTION_MODS_KEY(MOD_LSFT, KC_1),         // ! FN10
    ACTION_MODS_KEY(MOD_LSFT, KC_LBRACKET),  // { FN11
    ACTION_MODS_KEY(MOD_LSFT, KC_RBRACKET),  // } FN12
    ACTION_MODS_KEY(MOD_LSFT, KC_9),         // ( FN13
    ACTION_MODS_KEY(MOD_LSFT, KC_0),         // ) FN14
    ACTION_MODS_KEY(MOD_LSFT, KC_QUOT),      // " FN15
    ACTION_MODS_KEY(MOD_LSFT, KC_MINUS),     // _ FN16

    ACTION_LAYER_MOMENTARY(2),               // FN17 - punct
    ACTION_LAYER_MOMENTARY(3),               // FN18 - media

    ACTION_MODS_KEY(MOD_LSFT, KC_2),         // FN19 - @
    ACTION_MODS_KEY(MOD_LSFT, KC_3)          // FN20 - #
};

// void action_function(keyrecord_t *record, uint8_t id, uint8_t opt)
// {
//     print("action function called\n");
//     print("id = "); phex(id); print("\n");
//     print("opt = ");phex(opt); print("\n");

//     print("trying = "); phex(ACTION_LAYER_MOMENTARY(2)); print("\n");

//     send_keyboard_report();
// }


#define FN_ACTIONS_SIZE     (sizeof(fn_actions)   / sizeof(fn_actions[0]))

action_t keymap_fn_to_action(uint8_t keycode)
{
    action_t action;
    action.code = ACTION_NO;

    // print("keymap_fn_to_action called with: "); phex(keycode); print("\n");

    if (action.code == ACTION_NO && FN_INDEX(keycode) < FN_ACTIONS_SIZE) {
        action.code = pgm_read_word(&fn_actions[FN_INDEX(keycode)]);
    }

    return action;
}
