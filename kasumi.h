/*---------------------------------------------------------
* Kasumi.h
*---------------------------------------------------------*/
#ifndef __KASUMI_H__
#define __KASUMI_H__

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

void KeySchedule( u16 *key );
void Kasumi( u32 *data );
static inline u32 FO( u32 in, int index );
static inline u32 FL( u32 in, int index );
u16 KLi1[8], KLi2[8];
u16 KOi1[8], KOi2[8], KOi3[8];
u16 KIi1[8], KIi2[8], KIi3[8];

#include <stdio.h>

#endif //__KASUMI_H__