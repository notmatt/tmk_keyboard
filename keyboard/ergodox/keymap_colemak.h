static const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * Keymap: default lay in COLEMAK-ish, nut missing quotes, braces.
     *
     * +-----+---+---+---+---+---+---+    +---+---+---+---+---+---+-----+
     * | esc | 1 | 2 | 3 | 4 | 5 | = |    | ` | 6 | 7 | 8 | 9 | 0 | bak |
     * +-----+---+---+---+---+---+---+    +---|---+---+---+---+---+-----+
     * | tab | Q | W | F | P | G |   |    |   | J | L | U | Y | ; |  |  |
     * +-----+---+---+---+---+---|   |    |   |---+---+---+---+---+-----+
     * | ctl | A | R | S | T | D |---+    +---| H | N | E | I | O |  '  |
     * +-----+---+---+---+---+---+   |    |   +---+---+---+---+---+-----+
     * | sft | Z | X | C | V | B |   |    |   | K | M | < | > | ? | sft |
     * +-----+---+---+---+---+---+---+    +---+---+---+---+---+---+-----+
     *       |   |   |   |   |   |            |   |lft|dwn| up|rgt|
     *       +---+---+---+---+---+            +---+---+---+---+---+
     *
     *                     +---+---+    +---+---+
     *                     |   |+L1|    |   |   |
     *                 +---+---+---+    +---+---+---+
     *                 |   |   |alt|    |alt|   |   |
     *                 |cmd|l4 |---+    +---|ent|spc|
     *                 |   |(2)|ctl|    |ctl|(1)|   |
     *                 +---+---+---+    +---+---+---+
     *
     * (1) 'enter' on press, 'l4' on hold?
     * (2) symbol layer.
     *
     * Keymap: Layer 1 is QWERTY
     *
     * +-----+---+---+---+---+---+---+    +---+---+---+---+---+---+-----+
     * |  ^  | ^ | ^ | ^ | ^ | ^ | ^ |    | ^ | ^ | ^ | ^ | ^ | ^ |  ^  |
     * +-----+---+---+---+---+---+---+    +---|---+---+---+---+---+-----+
     * |  ^  | Q | W | E | R | T |   |    |   | Y | U | I | O | P |  \  |
     * +-----+---+---+---+---+---|   |    |   |---+---+---+---+---+-----+
     * |  ^  | A | S | D | F | G |---+    +---| H | J | K | L | ; |  '  |
     * +-----+---+---+---+---+---+   |    |   +---+---+---+---+---+-----+
     * |  ^  | Z | X | C | V | B |   |    |   | K | M | < | > | ? |  ^  |
     * +-----+---+---+---+---+---+---+    +---+---+---+---+---+---+-----+
     *       |   |   |   |   |   |            |   | ^ | ^ | ^ | ^ |
     *       +---+---+---+---+---+            +---+---+---+---+---+
     *
     *                     +---+---+    +---+---+
     *                     |   |~L1|    |   |   |
     *                 +---+---+---+    +---+---+---+
     *                 |   |   | ^ |    | ^ |   |   |
     *                 |^  | ^ |---+    +---| ^ | ^ |
     *                 |   |   | ^ |    | ^ |   |   |
     *                 +---+---+---+    +---+---+---+
     *
     * +-----+---+---+---+---+---+---+    +---+---+---+---+---+---+-----+
     * |     |   |   |   |   |   |   |    |   |   |   |   |   |   |     |
     * +-----+---+---+---+---+---+---+    +---|---+---+---+---+---+-----+
     * |     |   |   |   |   |   |   |    |   |   |   |   |   |   |     |
     * +-----+---+---+---+---+---|   |    |   |---+---+---+---+---+-----+
     * |     |   |   |   |   |   |---+    +---|   |   |   |   |   |     |
     * +-----+---+---+---+---+---+   |    |   +---+---+---+---+---+-----+
     * |     |   |   |   |   |   |   |    |   |   |   |   |   |   |     |
     * +-----+---+---+---+---+---+---+    +---+---+---+---+---+---+-----+
     *      |   |   |   |   |   |            |   |   |   |   |   |
     *      +---+---+---+---+---+            +---+---+---+---+---+
     *
     *                     +---+---+    +---+---+
     *                     |   |   |    |   |   |
     *                 +---+---+---+    +---+---+---+
     *                 |   |   |   |    |   |   |   |
     *                 |   |   |---+    +---|   |   |
     *                 |   |   |   |    |   |   |   |
     *                 +---+---+---+    +---+---+---+
     *
     *
     */

    KEYMAP( // L0: default
         ESC,    1,    2,    3,    4,    5,  EQL,
         TAB,    Q,    W,    F,    P,    G, BSPC,
        LCTL,    A,    R,    S,    T,    D,
        LSFT,    Z,    X,    C,    V,    B,    Z,
        LSFT, LGUI, LALT, LCTL,    Z,
                                        NO,  FN1,
                                            LALT,
                                LGUI, LSFT, LCTL,

         GRV,    6,    7,    8,    9,    0, BSPC,
         TAB,    J,    L,    U,    Y, SCLN, BSLS,
                 H,    N,    E,    I,    O, QUOT,
           Z,    K,    M, COMM,  DOT, SLSH, RSFT,
                       Z, LEFT, DOWN,   UP, RGHT,
          NO,   NO,
        RALT,
        RCTL,  ENT,  SPC
    ),

    KEYMAP( // L0: default
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
        TRNS,    Q,    W,    E,    R,    T, TRNS,
        TRNS,    A,    S,    D,    F,    G,
        TRNS,    Z,    X,    C,    V,    B, TRNS,
        TRNS, TRNS, TRNS, TRNS, TRNS,
                                      TRNS,  FN0,
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
    )
};

static const uint16_t PROGMEM fn_actions[] = {
    ACTION_LAYER_SET(0, ON_PRESS),    // Set Layer 0 (Colematt)
    ACTION_LAYER_SET(1, ON_PRESS)     // Set Layer 1 (Qwerty)
};
