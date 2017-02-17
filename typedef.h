#include <kipr/botball.h>


typedef signed char        s8_t;
typedef unsigned char      u8_t;
typedef signed short       s16_t;
typedef unsigned short     u16_t;
typedef signed long        s32_t;
typedef unsigned long      u32_t;
typedef signed long long   s64_t;
typedef unsigned long long u64_t;
typedef s8_t               bool_t;

typedef struct _pos_s {
  double x;
  double y;
  int _stat;
} _pos_t;

typedef struct _data_s {
  int data[17];
  _pos_t p;
  int stat;
} _data_t;

