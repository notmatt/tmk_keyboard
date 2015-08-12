static const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * Keymap: default lay in COLEMAK-ish, nut missing quotes, braces (see l2)
     *
     * +-----+---+---+---+---+---+---+    +---+---+---+---+---+---+-----+
     * | esc | 1 | 2 | 3 | 4 | 5 | - |    | = | 6 | 7 | 8 | 9 | 0 | udo |
     * +-----+---+---+---+---+---+---+    +---|---+---+---+---+---+-----+
     * | tab | Q | W | F | P | G |   |    |   | J | L | U | Y | ; | bak |
     * +-----+---+---+---+---+---|bak|    |CTL|---+---+---+---+---+-----+
     * | ctl | A | R | S | T | D |---+    +---| H | N | E | I | O | ent |
     * +-----+---+---+---+---+---+   |    |   +---+---+---+---+---+-----+
     * | sft | Z | X | C | V | B | NO|    |CMD| K | M | < | > | ? | sft |
     * +-----+---+---+---+---+---+---+    +---+---+---+---+---+---+-----+
     *       |fun|alt|cmd|ctl|sL2|            |sL2|lft|dwn| up|rgt|
     *       +---+---+---+---+---+            +---+---+---+---+---+
     *
     *                     +---+---+    +---+---+
     *                     |+L1|no |    |no |no |
     *                 +---+---+---+    +---+---+---+
     *                 |   |   |no |    |no |   |   |
     *                 |cmd|sft|---+    +---|ent|spc|
     *                 |   |   |no |    |no |(1)|   |
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
     * |     |F1 |F2 |F3 |F4 |F5 |F6 |    |F7 |F8 |F9 |F10|F11|F12|     |
     * +-----+---+---+---+---+---+---+    +---|---+---+---+---+---+-----+
     * |     |   | | | & | * | ` |   |    |   |   | { | } |   |   |     |
     * +-----+---+---+---+---+---|   |    |   |---+---+---+---+---+-----+
     * |     |   | + | - | = | @ |---+    +---| ' | ( | ) | " |   |     |
     * +-----+---+---+---+---+---+   |    |   +---+---+---+---+---+-----+
     * |     |   | % | / | ! | # |   |    |   | \ | [ | ] | / |   |     |
     * +-----+---+---+---+---+---+---+    +---+---+---+---+---+---+-----+
     *       |   |   |   |   |   |            |   |prv|   |   |nxt|
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
         ESC,    1,    2,    3,    4,    5, MINS,
         TAB,    Q,    W,    F,    P,    G, BSPC,
        FN23,    A,    R,    S,    T,    D,
        FN24,    Z,    X,    C,    V,    B, FN25,
         FN4, FN21, FN22, FN23,  FN2,
                                       FN1,  FN4,
                                              NO,
                                LGUI,  FN2,   NO,

         EQL,    6,    7,    8,    9,    0,   NO,
        FN23,    J,    L,    U,    Y, SCLN, BSPC,
                 H,    N,    E,    I,    O,  ENT,
        FN22,    K,    M, COMM,  DOT, SLSH, FN24,
                     FN2, LEFT, DOWN,   UP, RGHT,
          NO,   NO,
        RALT,
        RCTL,  FN2,  FN3
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
        TRNS,   F1,   F2,   F3,   F4,   F5,   F6,
        TRNS, TRNS,  FN7,  FN6,  FN8,  GRV, TRNS,
        TRNS, TRNS, FN10, MINS,  EQL, FN20,
        TRNS, TRNS, FN12, SLSH, FN13,  FN5, TRNS,
        TRNS, TRNS, TRNS, TRNS, TRNS,
                                      TRNS, TRNS,
                                            TRNS,
                                TRNS, TRNS, TRNS,

          F7,   F8,   F9,  F10,  F11,  F12, TRNS,
        TRNS,  GRV, FN14, FN15, TRNS, TRNS, TRNS,
              QUOT, FN16, FN17, FN18, SCLN, TRNS,
        TRNS, BSLS, LBRC, RBRC, SLSH, TRNS, TRNS,
                    TRNS, FN27, TRNS, TRNS, FN28,
        TRNS, TRNS,
        TRNS,
        TRNS, TRNS, TRNS
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
                    TRNS, FN27, TRNS, TRNS, FN28,
        TRNS, TRNS,
        TRNS,
        TRNS, TRNS, TRNS
    )
};

static const uint16_t PROGMEM fn_actions[] = {
    ACTION_DEFAULT_LAYER_SET(0),             // Set Layer 0 (Colematt)
    ACTION_DEFAULT_LAYER_SET(1),             // Set Layer 1 (Qwerty)
    ACTION_LAYER_MOMENTARY(2),               // FN2 - punct
    ACTION_LAYER_TAP_KEY(2, KC_SPC),         // FN3 - tap-space, hold punct
    ACTION_LAYER_MOMENTARY(3),               // FN4 - media

    /* punctuation layer */
    ACTION_MODS_KEY(MOD_LSFT, KC_3),         // # FN5
    ACTION_MODS_KEY(MOD_LSFT, KC_7),         // & FN6
    ACTION_MODS_KEY(MOD_LSFT, KC_BSLASH),    // | FN7
    ACTION_MODS_KEY(MOD_LSFT, KC_8),         // * FN8
    ACTION_MODS_KEY(MOD_LSFT, KC_6),         // ^ FN9
    ACTION_MODS_KEY(MOD_LSFT, KC_EQUAL),     // + FN10
    ACTION_MODS_KEY(MOD_LSFT, KC_GRV),       // ~ FN11
    ACTION_MODS_KEY(MOD_LSFT, KC_5),         // % FN12
    ACTION_MODS_KEY(MOD_LSFT, KC_1),         // ! FN13
    ACTION_MODS_KEY(MOD_LSFT, KC_LBRACKET),  // { FN14
    ACTION_MODS_KEY(MOD_LSFT, KC_RBRACKET),  // } FN15
    ACTION_MODS_KEY(MOD_LSFT, KC_9),         // ( FN16
    ACTION_MODS_KEY(MOD_LSFT, KC_0),         // ) FN17
    ACTION_MODS_KEY(MOD_LSFT, KC_QUOT),      // " FN18
    ACTION_MODS_KEY(MOD_LSFT, KC_MINUS),     // _ FN19
    ACTION_MODS_KEY(MOD_LSFT, KC_2),         // @ FN20

    ACTION_MODS_ONESHOT(MOD_LALT),           // FN21 - oneshot alt
    ACTION_MODS_ONESHOT(MOD_LGUI),           // FN22 - oneshot cmd
    ACTION_MODS_ONESHOT(MOD_LCTL),           // FN23 - oneshot ctrl
    ACTION_MODS_ONESHOT(MOD_LSFT),           // FN24 - oneshot shift
    ACTION_MODS_TAP_TOGGLE(MOD_LSFT),        // FN25 - tap-toggle shift
    ACTION_MODS(MOD_LALT | MOD_LSFT),    // FN26 - alt-shift 'select'

    ACTION_MODS_KEY(MOD_LGUI | MOD_LSFT, KC_LBRACKET),   // FN27 - cmd-{
    ACTION_MODS_KEY(MOD_LGUI | MOD_LSFT, KC_RBRACKET)   // FN28 - cnd-}
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
