#ifndef __ARRAY60_H
#define __ARRAY60_H	



/*
//Çý¶¯²¨ÐÎ

//¾ÉÍ¼Æ¬£¬Ë¢µ½°×

#define FRAME_BEGIN_LEN_60  8
unsigned char wave_begin_60[4][FRAME_BEGIN_LEN_60]=
{
0,0,0,0,2,2,2,0,      //GC0->GC3
0,0,0,1,2,2,2,0,      //GC1->GC3
0,0,1,1,2,2,2,0,      //GC2->GC3
0,1,1,1,2,2,2,0,      //GC3->GC3
};


//´Ó°×Ë¢µ½ÐÂÍ¼Æ¬
#define FRAME_END_LEN_60  18
unsigned char wave_end_60[4][FRAME_END_LEN_60]=
{
0,1,1,1,2,2,2,1,1,1,2,2,2,1,1,1,0,0,    //GC3->GC0
0,1,1,1,2,2,2,1,1,1,2,2,2,1,1,0,0,0,    //GC3->GC1
0,1,1,1,2,2,2,1,1,1,2,2,2,1,0,0,0,0,    //GC3->GC2
0,1,1,1,2,2,2,1,1,1,2,2,2,0,0,0,0,0,    //GC3->GC3
};


#if 1
//ºÚ°×ºÚ°×Ë¢ÆÁ¡£×îÖÕµ½´ï°×±³¾°
#define FRAME_INIT_LEN_60 		2
unsigned char wave_init_60[FRAME_INIT_LEN_60]=
{
//0x55,0x55,0x55,0x55,
//0xaa,0xaa,0xaa,0xaa,
//0x55,0x55,0x55,0x55,
//0,
//0xaa,0xaa,0xaa,0xaa,
//0x55,0x55,0x55,0x55,
//0xaa,0xaa,0xaa,0xaa,
0,0,
};
#endif
*/

//Çý¶¯²¨ÐÎ

//¾ÉÍ¼Æ¬£¬Ë¢µ½°×

#define FRAME_BEGIN_LEN_60  8
unsigned char wave_begin_60[4][FRAME_BEGIN_LEN_60]=
{
0,0,0,0,2,2,2,0,      //GC0->GC3
0,0,0,1,2,2,2,0,      //GC1->GC3
0,0,1,1,2,2,2,0,      //GC2->GC3
0,1,1,1,2,2,2,0,      //GC3->GC3
};


//´Ó°×Ë¢µ½ÐÂÍ¼Æ¬
#define FRAME_END_LEN_60  18
unsigned char wave_end_60[4][FRAME_END_LEN_60]=
{
0,1,1,1,2,2,2,1,1,1,2,2,2,1,1,1,0,0,    //GC3->GC0
0,1,1,1,2,2,2,1,1,1,2,2,2,1,1,0,0,0,    //GC3->GC1
0,1,1,1,2,2,2,1,1,1,2,2,2,1,0,0,0,0,    //GC3->GC2
0,1,1,1,2,2,2,1,1,1,2,2,2,0,0,0,0,0,    //GC3->GC3
};


#if 1
//ºÚ°×ºÚ°×Ë¢ÆÁ¡£×îÖÕµ½´ï°×±³¾°
#define FRAME_INIT_LEN_60 		2
unsigned char wave_init_60[FRAME_INIT_LEN_60]=
{
//0x55,0x55,0x55,0x55,
//0xaa,0xaa,0xaa,0xaa,
//0x55,0x55,0x55,0x55,
//0,
//0xaa,0xaa,0xaa,0xaa,
//0x55,0x55,0x55,0x55,
//0xaa,0xaa,0xaa,0xaa,
0,0,
};
#endif









#endif



