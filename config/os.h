#ifndef OPERATING_SYSTEM
  #define OPERATING_SYSTEM 'M' 
#endif
#if OPERATING_SYSTEM == 'M'
  #define _C LG
  #define _A_TAB LGUI
  #define _G_TAB LALT
  #define _REDO LG(LS(Z))
  #define _POWER K_POWER
  #define _WORD LA
  #define _HOME LG(LEFT)
  #define _END LG(RIGHT)
  #define _EMOJI LG(LC(SPACE))
  #define _FILES LS(LA(M))
  #define _GLOBE GLOBE
#else
  #define _C LC
  #define _A_TAB LALT
  #define _G_TAB LGUI
  #define _REDO LC(Y)
  #define _POWER C_POWER
  #define _WORD LC
  #define _HOME HOME
  #define _END END
  #define _EMOJI LG(DOT)
  #define _FILES LG(E)
  #define _GLOBE LGUI
#endif
#define _SLEEP C_SLEEP
#if OPERATING_SYSTEM == 'W'
  #define _LOCK LG(L)
#elif OPERATING_SYSTEM == 'M'
  #define _LOCK _C(LC(Q))
#elif OPERATING_SYSTEM == 'L'
  #define _LOCK K_LOCK
#endif

#define _UNDO _C(Z)
#define _CUT _C(X)
#define _COPY _C(C)
#define _PASTE _C(V)
#define _FIND _C(F)
#define _FIND_NEXT _C(G)
#define _FIND_PREV _C(LS(G))