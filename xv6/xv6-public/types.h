#ifndef _TYPES_H_
#define _TYPES_H_

typedef unsigned int   uint;
typedef unsigned short ushort;
typedef unsigned char  uchar;
typedef uint pde_t;

/* Lab-4 Keaton Jones & Erik Garcia */
typedef struct __lock_t {
  uint is_locked;
} lock_t;

#ifndef NULL
//#define NULL (0)
#endif

#endif
