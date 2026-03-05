/*
 * Polish Programmers keyboard layout key definitions for ZMK.
 * Polish Programmers layout is identical to US QWERTY for standard keys.
 * Polish diacritics are accessed via AltGr (Right Alt) + letter.
 *
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ` │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ = │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ [ │ ] │  \  │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤
 * │      │ A │ S │ D │ F │ G │ H │ J │ K │ L │ ; │ ' │        │
 * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬────────┤
 * │        │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ / │        │
 * └────────┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴────────┘
 */

// === Symbols (direct keycodes, no modifier needed) ===
#define PL_SQUOT APOS            // '
#define PL_MINUS MINUS           // -
#define PL_EQL   EQUAL           // =
#define PL_LBKT  LBKT            // [
#define PL_RBKT  RBKT            // ]
#define PL_BSLH  BSLH            // backslash
#define PL_FSLH  FSLH            // /
#define PL_BKTK  GRAVE           // `
#define PL_SEMI  SEMI            // ;

// === Shifted symbols ===
#define PL_EXCL  LS(N1)          // !
#define PL_AT    LS(N2)          // @
#define PL_HASH  LS(N3)          // #
#define PL_USD   LS(N4)          // $
#define PL_PERC  LS(N5)          // %
#define PL_CARET LS(N6)          // ^
#define PL_AND   LS(N7)          // &
#define PL_AST   LS(N8)          // *
#define PL_LPAR  LS(N9)          // (
#define PL_RPAR  LS(N0)          // )
#define PL_UNDER LS(MINUS)       // _
#define PL_PLUS  LS(EQUAL)       // +
#define PL_LBRC  LS(LBKT)        // {
#define PL_RBRC  LS(RBKT)        // }
#define PL_PIPE  LS(BSLH)        // |
#define PL_TILDE LS(GRAVE)       // ~
#define PL_DQUOT LS(APOS)        // "
#define PL_LESS  LS(COMMA)       // <
#define PL_GREAT LS(DOT)         // >
#define PL_QUES  LS(FSLH)        // ?
#define PL_COLON LS(SEMI)        // :

// === Polish diacritics (AltGr + letter) ===
#define PL_AOGONEK RA(A)         // ą
#define PL_CACUTE  RA(C)         // ć
#define PL_EOGONEK RA(E)         // ę
#define PL_LSTROKE RA(L)         // ł
#define PL_NACUTE  RA(N)         // ń
#define PL_OACUTE  RA(O)         // ó
#define PL_SACUTE  RA(S)         // ś
#define PL_ZACUTE  RA(X)         // ź  (AltGr+X, not AltGr+Z!)
#define PL_ZDOT    RA(Z)         // ż
