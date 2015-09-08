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
     *   | & * ` ~ [ ]
     * " - ( = { } + ) ; '
     * \ < > ! @ # / _ % ?
     * pointer ops: & * ->
     *
     * +-----+---+---+---+---+---+---+    +---+---+---+---+---+---+-----+
     * |     |F1 |F2 |F3 |F4 |F5 |F6 |    |F7 |F8 |F9 |F10|F11|F12|     |
     * +-----+---+---+---+---+---+---+    +---|---+---+---+---+---+-----+
     * |     |   | | | & | * | ` |   |    |   | ~ | [ | ] |   |   |     |
     * +-----+---+---+---+---+---|   |    |   |---+---+---+---+---+-----+
     * |     | " | - | ( | = | { |---+    +---| } | + | ) | ; | ' |     |
     * +-----+---+---+---+---+---+   |    |   +---+---+---+---+---+-----+
     * |     | \ | < | > | ! | @ |   |    |   | # | / | _ | % |   |     |
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
        FN25,    A,    R,    S,    T,    D,
        FN27,    Z,    X,    C,    V,    B, FN27,
         FN4, FN23, FN24, FN25,  FN2,
                                       FN1,  FN4,
                                              NO,
                                LGUI,  FN2,   NO,

         EQL,    6,    7,    8,    9,    0,   NO,
        FN25,    J,    L,    U,    Y, SCLN, BSPC,
                 H,    N,    E,    I,    O,  ENT,
        FN24,    K,    M, COMM,  DOT, SLSH, FN27,
                     FN2, LEFT, DOWN,   UP, RGHT,
          NO,   NO,
        RALT,
        RCTL,  FN2,  SPC
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
        TRNS,    Y,    U,    I,    O,    P, TRNS,
                 H,    J,    K,    L, SCLN, TRNS,
        TRNS,    N,    M, COMM,  DOT, SLSH, TRNS,
                    TRNS, TRNS, TRNS, TRNS, TRNS,
        TRNS, TRNS,
        TRNS,
        TRNS, TRNS, TRNS
    ),

    KEYMAP( // L2: punct
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
        TRNS, TRNS,  FN7,  FN6,  FN8,  GRV, TRNS,
        TRNS, FN18, MINS, FN16,  EQL, FN14,
        TRNS, BSLS, FN21, FN22, FN13, FN20, TRNS,
        TRNS, TRNS, TRNS, TRNS, TRNS,
                                      TRNS, TRNS,
                                            TRNS,
                                TRNS, TRNS, TRNS,

        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
        TRNS, FN11, LBRC, RBRC, TRNS, TRNS, TRNS,
              FN15, FN10, FN17, SCLN, QUOT, TRNS,
        TRNS,  FN5, SLSH, FN19, FN12, TRNS, TRNS,
                    TRNS, FN29, TRNS, TRNS, FN30,
        TRNS, TRNS,
        TRNS,
        TRNS, TRNS, TRNS
    ),

    KEYMAP( // L3: media
        TRNS,   F1,   F2,   F3,   F4,   F5,   F6,
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
        TRNS, TRNS, TRNS, TRNS, TRNS,
                                      TRNS, TRNS,
                                            TRNS,
                                TRNS, TRNS, TRNS,

          F7,   F8,   F9,  F10,  F11,  F12, TRNS,
        TRNS, TRNS, MUTE, VOLD, VOLU, TRNS, TRNS,
              TRNS, MPRV, MPLY, MNXT, TRNS, TRNS,
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
                    TRNS, FN29, TRNS, TRNS, FN30,
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
    ACTION_MODS_KEY(MOD_LSFT, KC_COMMA),     // < FN21
    ACTION_MODS_KEY(MOD_LSFT, KC_DOT),       // > FN22

    ACTION_MODS_ONESHOT(MOD_LALT),           // FN23 - oneshot alt
    ACTION_MODS_ONESHOT(MOD_LGUI),           // FN24 - oneshot cmd
    ACTION_MODS_ONESHOT(MOD_LCTL),           // FN25 - oneshot ctrl
    ACTION_MODS_ONESHOT(MOD_LSFT),           // FN26 - oneshot shift
    ACTION_MODS_TAP_TOGGLE(MOD_LSFT),        // FN27 - tap-toggle shift
    ACTION_MODS(MOD_LALT | MOD_LSFT),        // FN28 - alt-shift 'select'

    ACTION_MODS_KEY(MOD_LGUI | MOD_LSFT, KC_LBRACKET),   // FN29 - cmd-{
    ACTION_MODS_KEY(MOD_LGUI | MOD_LSFT, KC_RBRACKET)   // FN30 - cnd-}
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
