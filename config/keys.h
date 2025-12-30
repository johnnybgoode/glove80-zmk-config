/*                               GLOVE80 KEY MATRIX / LAYOUT MAPPING
 ╭────────────────────╮       ╭────────────────────╮ ╭────────────────────╮       ╭────────────────────╮
 │  0   1   2   3   4 ╰───┬───╯  5   6   7   8   9 │ │ LF5 LF4 LF3 LF2 LF1╰───┬───╯ RF1 RF2 RF3 RF4 RF5│
 │ 10  11  12  13  14  15 │ 16  17  18  19  20  21 │ │ LN5 LN4 LN3 LN2 LN1 LN0│ RN0 RN1 RN2 RN3 RN4 RN5│
 │ 22  23  24  25  26  27 │ 28  29  30  31  32  33 │ │ LU5 LU4 LU3 LU2 LU1 LU0│ RU0 RU1 RU2 RU3 RU4 RU5│
 │ 34  35  36  37  38  39 │ 40  41  42  43  44  45 │ │ LH5 LH4 LH3 LH2 LH1 LH0│ RH0 RH1 RH2 RH3 RH4 RH5│
 │ 46  47  48  49  50  51 │ 58  59  60  61  62  63 │ │ LL5 LL4 LL3 LL2 LL1 LL0│ RL0 RL1 RL2 RL3 RL4 RL5│
 │ 64  65  66  67  68 ╭───┴───╮ 75  76  77  78  79 │ │ LB5 LB4 LB3 LB2 LB1╭───┴───╮ RB1 RB2 RB3 RB4 RB5│
 ╰───────────┬────────┴───┬───┴────────┬───────────╯ ╰───────────┬────────┴───┬───┴────────┬───────────╯
             │ 52  53  54 │ 55  56  57 │                         │ LT1 LT2 LT3│ RT3 RT2 RT1│
             │ 69  70  71 │ 72  73  74 │                         │ LT4 LT5 LT6│ RT6 RT5 RT4│
             ╰────────────┴────────────╯                         ╰────────────┴────────────╯
 */

#define LF1  4  // left-function row
#define LF2  3
#define LF3  2
#define LF4  1
#define LF5  0

#define RF1  5  // right-function row
#define RF2  6
#define RF3  7
#define RF4  8
#define RF5  9

#define LN0 15  // left-number row
#define LN1 14
#define LN2 13
#define LN3 12
#define LN4 11
#define LN5 10

#define RN0 16  // right-number row
#define RN1 17
#define RN2 18
#define RN3 19
#define RN4 20
#define RN5 21

#define LU0 27  // left-upper row
#define LU1 26
#define LU2 25
#define LU3 24
#define LU4 23
#define LU5 22

#define RU0 28  // right-upper row
#define RU1 29
#define RU2 30
#define RU3 31
#define RU4 32
#define RU5 33

#define LH0 39  // left-home row
#define LH1 38
#define LH2 37
#define LH3 36
#define LH4 35
#define LH5 34

#define RH0 40  // right-home row
#define RH1 41
#define RH2 42
#define RH3 43
#define RH4 44
#define RH5 45

#define LL0 51  // left-lower row
#define LL1 50
#define LL2 49
#define LL3 48
#define LL4 47
#define LL5 46

#define RL0 58  // right-lower row
#define RL1 59
#define RL2 60
#define RL3 61
#define RL4 62
#define RL5 63

#define LB1 68  // left-bottom row
#define LB2 67
#define LB3 66
#define LB4 65
#define LB5 64

#define RB1 75  // right-bottom row
#define RB2 76
#define RB3 77
#define RB4 78
#define RB5 79

#define LT1 52  // left thumb keys
#define LT2 53
#define LT3 54
#define LT4 69
#define LT5 70
#define LT6 71

#define RT1 57  // right thumb keys
#define RT2 56
#define RT3 55
#define RT6 72
#define RT5 73
#define RT4 74

/* Key positions */
#define POS_LH_C6R1 0
#define POS_LH_C5R1 1
#define POS_LH_C4R1 2
#define POS_LH_C3R1 3
#define POS_LH_C2R1 4
#define POS_RH_C2R1 5
#define POS_RH_C3R1 6
#define POS_RH_C4R1 7
#define POS_RH_C5R1 8
#define POS_RH_C6R1 9
#define POS_LH_C6R2 10
#define POS_LH_C5R2 11
#define POS_LH_C4R2 12
#define POS_LH_C3R2 13
#define POS_LH_C2R2 14
#define POS_LH_C1R2 15
#define POS_RH_C1R2 16
#define POS_RH_C2R2 17
#define POS_RH_C3R2 18
#define POS_RH_C4R2 19
#define POS_RH_C5R2 20
#define POS_RH_C6R2 21
#define POS_LH_C6R3 22
#define POS_LH_C5R3 23
#define POS_LH_C4R3 24
#define POS_LH_C3R3 25
#define POS_LH_C2R3 26
#define POS_LH_C1R3 27
#define POS_RH_C1R3 28
#define POS_RH_C2R3 29
#define POS_RH_C3R3 30
#define POS_RH_C4R3 31
#define POS_RH_C5R3 32
#define POS_RH_C6R3 33
#define POS_LH_C6R4 34
#define POS_LH_C5R4 35
#define POS_LH_C4R4 36
#define POS_LH_C3R4 37
#define POS_LH_C2R4 38
#define POS_LH_C1R4 39
#define POS_RH_C1R4 40
#define POS_RH_C2R4 41
#define POS_RH_C3R4 42
#define POS_RH_C4R4 43
#define POS_RH_C5R4 44
#define POS_RH_C6R4 45
#define POS_LH_C6R5 46
#define POS_LH_C5R5 47
#define POS_LH_C4R5 48
#define POS_LH_C3R5 49
#define POS_LH_C2R5 50
#define POS_LH_C1R5 51
#define POS_LH_T1 52
#define POS_LH_T2 53
#define POS_LH_T3 54
#define POS_RH_T3 55
#define POS_RH_T2 56
#define POS_RH_T1 57
#define POS_RH_C1R5 58
#define POS_RH_C2R5 59
#define POS_RH_C3R5 60
#define POS_RH_C4R5 61
#define POS_RH_C5R5 62
#define POS_RH_C6R5 63
#define POS_LH_C6R6 64
#define POS_LH_C5R6 65
#define POS_LH_C4R6 66
#define POS_LH_C3R6 67
#define POS_LH_C2R6 68
#define POS_LH_T4 69
#define POS_LH_T5 70
#define POS_LH_T6 71
#define POS_RH_T6 72
#define POS_RH_T5 73
#define POS_RH_T4 74
#define POS_RH_C2R6 75
#define POS_RH_C3R6 76
#define POS_RH_C4R6 77
#define POS_RH_C5R6 78
#define POS_RH_C6R6 79

/* Layout keys */
#define KEY_LH_C6R1 0
#define KEY_LH_C5R1 0
#define KEY_LH_C4R1 0
#define KEY_LH_C3R1 0
#define KEY_LH_C2R1 0
#define KEY_RH_C2R1 0
#define KEY_RH_C3R1 0
#define KEY_RH_C4R1 0
#define KEY_RH_C5R1 0
#define KEY_RH_C6R1 0
#define KEY_LH_C6R2 0
#define KEY_LH_C5R2 N1
#define KEY_LH_C4R2 N2
#define KEY_LH_C3R2 N3
#define KEY_LH_C2R2 N4
#define KEY_LH_C1R2 N5
#define KEY_RH_C1R2 N6
#define KEY_RH_C2R2 N7
#define KEY_RH_C3R2 N8
#define KEY_RH_C4R2 N9
#define KEY_RH_C5R2 N0
#define KEY_RH_C6R2 0
#define KEY_LH_C6R3 GRAVE
#define KEY_LH_C5R3 Q
#define KEY_LH_C4R3 W
#define KEY_LH_C3R3 F
#define KEY_LH_C2R3 P
#define KEY_LH_C1R3 B
#define KEY_RH_C1R3 J
#define KEY_RH_C2R3 L
#define KEY_RH_C3R3 U
#define KEY_RH_C4R3 Y
#define KEY_RH_C5R3 SEMI
#define KEY_RH_C6R3 MINUS
#define KEY_LH_C6R4 0
#define KEY_LH_C5R4 A
#define KEY_LH_C4R4 R
#define KEY_LH_C3R4 S
#define KEY_LH_C2R4 T
#define KEY_LH_C1R4 G
#define KEY_RH_C1R4 M
#define KEY_RH_C2R4 N
#define KEY_RH_C3R4 E
#define KEY_RH_C4R4 I
#define KEY_RH_C5R4 O
#define KEY_RH_C6R4 SQT
#define KEY_LH_C6R5 0
#define KEY_LH_C5R5 Z
#define KEY_LH_C4R5 X
#define KEY_LH_C3R5 C
#define KEY_LH_C2R5 D
#define KEY_LH_C1R5 V
#define KEY_LH_T1 ESC
#define LAY_LH_T1 LAYER_Function
#define KEY_LH_T2 LPAR
#define KEY_LH_T3 RPAR
#define KEY_RH_T3 _HOME
#define KEY_RH_T2 _END
#define KEY_RH_T1 ENTER
#define LAY_RH_T1 LAYER_Magic
#define KEY_RH_C1R5 K
#define KEY_RH_C2R5 H
#define KEY_RH_C3R5 COMMA
#define KEY_RH_C4R5 DOT
#define KEY_RH_C5R5 FSLH
#define KEY_RH_C6R5 0
#define KEY_LH_C6R6 0
#define KEY_LH_C5R6 EQUAL
#define KEY_LH_C4R6 LBKT
#define KEY_LH_C3R6 RBKT
#define KEY_LH_C2R6 BSLH
#define LAY_LH_C2R6 LAYER_Mouse
#define KEY_LH_T4 BACKSPACE
#define LAY_LH_T4 LAYER_Cursor
#define KEY_LH_T5 DELETE
#define LAY_LH_T5 LAYER_Number
#define KEY_LH_T6 INSERT
#define LAY_LH_T6 LAYER_Typing
#define KEY_RH_T6 0
#define LAY_RH_T6 LAYER_Typing
#define KEY_RH_T5 TAB
#define LAY_RH_T5 LAYER_Mouse
#define KEY_RH_T4 SPACE
#define LAY_RH_T4 LAYER_Symbol
#define KEY_RH_C2R6 PG_DN
#define KEY_RH_C3R6 MSC_DN
#define KEY_RH_C4R6 MSC_UP
#define KEY_RH_C5R6 PG_UP
#define KEY_RH_C6R6 0