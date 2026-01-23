/*
 ╭────────────────────────┬────────────────────────╮ ╭────────────────────────┬────────────────────────╮
 │  0   1   2   3   4   5 │  6   7   8   9  10  11 │ │ LN5 LN4 LN3 LN2 LN1 LN0│ RN0 RN1 RN2 RN3 RN4 RN5│
 │ 12  13  14  15  16  17 │ 18  19  20  21  22  23 │ │ LU5 LU4 LU3 LU2 LU1 LU0│ RU0 RU1 RU2 RU3 RU4 RU5│
 │ 24  25  26  27  28  29 │ 30  31  32  33  34  35 │ │ LH5 LH4 LH3 LH2 LH1 LH0│ RH0 RH1 RH2 RH3 RH4 RH5│
 │ 36  37  38  39  40  41 │ 42  43  44  45  46  47 │ │ LL5 LL4 LL3 LL2 LL1 LL0│ RL0 RL1 RL2 RL3 RL4 RL5│
 ╰───────╮ 48  49  50 ╭───┴───╮ 51  52  53 ╭───────╯ ╰───────╮ LB3 LB2 LB1╭───┴───╮ RB1 RB2 RB3 ╭──────╯
         ╰───┬────────┴───┬───┴────────┬───╯                 ╰───┬────────┴───┬───┴────────┬────╯
             │ 42  43  44 │ 45  46  47 │                         │ LT1 LT2 LT3│ RT3 RT2 RT1│
             ╰────────────┴────────────╯                         ╰────────────┴────────────╯
 */

#define LN5  0  // Number
#define LN4  1
#define LN3  2
#define LN2  3
#define LN1  4
#define LN0  5

#define RN0  6
#define RN1  7
#define RN2  8
#define RN3  9
#define RN4 10
#define RN5 11

#define LU5 12  // Upper
#define LU4 13
#define LU3 14
#define LU2 15
#define LU1 16
#define LU0 17

#define RU0 18
#define RU1 19
#define RU2 20
#define RU3 21
#define RU4 22
#define RU5 23

#define LH5 24  // Home
#define LH4 25
#define LH3 26
#define LH2 27
#define LH1 28
#define LH0 29

#define RH0 30
#define RH1 31
#define RH2 32
#define RH3 33
#define RH4 34
#define RH5 35

#define LL5 36  // Lower
#define LL4 37
#define LL3 38
#define LL2 39
#define LL1 40
#define LL0 41

#define RL0 42
#define RL1 43
#define RL2 44
#define RL3 45
#define RL4 46
#define RL5 47

#define LB2 48  // Bottom
#define LB1 49
#define LB0 50

#define RB0 51
#define RB1 52
#define RB2 53

#define LT1 54  // Thumb
#define LT2 55
#define LT3 56
#define RT3 57
#define RT2 58
#define RT1 59

/* Key positions */

#define POS_LH_C6R1 0
#define POS_LH_C5R1 1
#define POS_LH_C4R1 2
#define POS_LH_C3R1 3
#define POS_LH_C2R1 4
#define POS_LH_C1R1 5
#define POS_RH_C1R1 6
#define POS_RH_C2R1 7
#define POS_RH_C3R1 8
#define POS_RH_C4R1 9
#define POS_RH_C5R1 10
#define POS_RH_C6R1 11
#define POS_LH_C6R2 12
#define POS_LH_C5R2 13
#define POS_LH_C4R2 14
#define POS_LH_C3R2 15
#define POS_LH_C2R2 16
#define POS_LH_C1R2 17
#define POS_RH_C1R2 18
#define POS_RH_C2R2 19
#define POS_RH_C3R2 20
#define POS_RH_C4R2 21
#define POS_RH_C5R2 22
#define POS_RH_C6R2 23
#define POS_LH_C6R3 24
#define POS_LH_C5R3 25
#define POS_LH_C4R3 26
#define POS_LH_C3R3 27
#define POS_LH_C2R3 28
#define POS_LH_C1R3 29
#define POS_RH_C1R3 30
#define POS_RH_C2R3 31
#define POS_RH_C3R3 32
#define POS_RH_C4R3 33
#define POS_RH_C5R3 34
#define POS_RH_C6R3 35
#define POS_LH_C6R4 36
#define POS_LH_C5R4 37
#define POS_LH_C4R4 38
#define POS_LH_C3R4 39
#define POS_LH_C2R4 40
#define POS_LH_C1R4 41
#define POS_RH_C1R4 42
#define POS_RH_C2R4 43
#define POS_RH_C3R4 44
#define POS_RH_C4R4 45
#define POS_RH_C5R4 46
#define POS_RH_C6R4 47
#define POS_LH_C4R5 48
#define POS_LH_C3R5 49
#define POS_LH_C2R5 50
#define POS_RH_C2R5 51
#define POS_RH_C3R5 52
#define POS_RH_C4R5 53
#define POS_LH_T1 54
#define POS_LH_T2 55
#define POS_LH_T3 56
#define POS_RH_T3 57
#define POS_RH_T2 58
#define POS_RH_T1 59


#define LEFT_HAND_KEYS \
  POS_LH_C1R1 POS_LH_C2R1 POS_LH_C3R1 POS_LH_C4R1 POS_LH_C5R1 POS_LH_C6R1 \
  POS_LH_C1R2 POS_LH_C2R2 POS_LH_C3R2 POS_LH_C4R2 POS_LH_C5R2 POS_LH_C6R2 \
  POS_LH_C1R3 POS_LH_C2R3 POS_LH_C3R3 POS_LH_C4R3 POS_LH_C5R3 POS_LH_C6R3 \
  POS_LH_C1R4 POS_LH_C2R4 POS_LH_C3R4 POS_LH_C4R4 POS_LH_C5R4 POS_LH_C6R4 \
              POS_LH_C2R5 POS_LH_C3R5 POS_LH_C4R5

#define RIGHT_HAND_KEYS \
  POS_RH_C1R1 POS_RH_C2R1 POS_RH_C3R1 POS_RH_C4R1 POS_RH_C5R1 POS_RH_C6R1 \
  POS_RH_C1R2 POS_RH_C2R2 POS_RH_C3R2 POS_RH_C4R2 POS_RH_C5R2 POS_RH_C6R2 \
  POS_RH_C1R3 POS_RH_C2R3 POS_RH_C3R3 POS_RH_C4R3 POS_RH_C5R3 POS_RH_C6R3 \
  POS_RH_C1R4 POS_RH_C2R4 POS_RH_C3R4 POS_RH_C4R4 POS_RH_C5R4 POS_RH_C6R4 \
              POS_RH_C2R5 POS_RH_C3R5 POS_RH_C4R5


#define THUMB_KEYS \
  POS_LH_T1 POS_LH_T2 POS_LH_T3 \
  POS_RH_T1 POS_RH_T2 POS_RH_T3

/* Layout keys */
#define KEY_LN5 0
#define KEY_LN4 N1
#define KEY_LN3 N2
#define KEY_LN2 N3
#define KEY_LN1 N4
#define KEY_LN0 N5
#define KEY_RN0 N6
#define KEY_RN1 N7
#define KEY_RN2 N8
#define KEY_RN3 N9
#define KEY_RN4 N0
#define KEY_RN5 0
#define KEY_LU5 GRAVE
#define KEY_LU4 Q
#define KEY_LU3 W
#define KEY_LU2 F
#define KEY_LU1 P
#define KEY_LU0 B
#define KEY_RU0 J
#define KEY_RU1 L
#define KEY_RU2 U
#define KEY_RU3 Y
#define KEY_RU4 SEMI
#define KEY_RU5 MINUS
#define KEY_LH5 0
#define KEY_LH4 A
#define KEY_LH3 R
#define KEY_LH2 S
#define KEY_LH1 T
#define KEY_LH0 G
#define KEY_RH0 M
#define KEY_RH1 N
#define KEY_RH2 E
#define KEY_RH3 I
#define KEY_RH4 O
#define KEY_RH5 SQT
#define KEY_LL5 0
#define KEY_LL4 Z
#define KEY_LL3 X
#define KEY_LL2 C
#define KEY_LL1 D
#define KEY_LL0 V
#define KEY_RL0 K
#define KEY_RL1 H
#define KEY_RL2 COMMA
#define KEY_RL3 DOT
#define KEY_RL4 FSLH
#define KEY_RL5 0
#define KEY_LB2 LBKT
#define KEY_LB1 RBKT
#define KEY_LB0 BSLH
#define LAY_LB0 LAYER_Mouse
#define KEY_RB0 PG_DN
#define KEY_RB1 MSC_DN
#define KEY_RB2 MSC_UP

#define KEY_LT1 BACKSPACE
#define LAY_LT1 LAYER_Cursor
#define KEY_LT2 DELETE
#define LAY_LT2 LAYER_Number
#define KEY_LT3 ESC
#define LAY_LT3 LAYER_Function
#define KEY_RT3 ENTER
#define LAY_RT3 LAYER_Typing
#define KEY_RT2 TAB
#define LAY_RT2 LAYER_Mouse
#define KEY_RT1 SPACE
#define LAY_RT1 LAYER_Symbol
