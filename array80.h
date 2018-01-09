#ifndef __ARRAY80_H
#define __ARRAY80_H	


//Çý¶¯²¨ÐÎ

//¾ÉÍ¼Æ¬£¬Ë¢µ½°×

#define FRAME_BEGIN_LEN_80  8
unsigned char wave_begin_80[4][FRAME_BEGIN_LEN_80]=
{
0,0,0,0,2,2,2,0,      //GC0->GC3
0,0,0,1,2,2,2,0,      //GC1->GC3
0,0,1,1,2,2,2,0,      //GC2->GC3
0,1,1,1,2,2,2,0,      //GC3->GC3
};


//´Ó°×Ë¢µ½ÐÂÍ¼Æ¬
#define FRAME_END_LEN_80  18
unsigned char wave_end_80[4][FRAME_END_LEN_80]=
{
0,1,1,1,2,2,2,1,1,1,2,2,2,1,1,1,0,0,    //GC3->GC0
0,1,1,1,2,2,2,1,1,1,2,2,2,1,1,0,0,0,    //GC3->GC1
0,1,1,1,2,2,2,1,1,1,2,2,2,1,0,0,0,0,    //GC3->GC2
0,1,1,1,2,2,2,1,1,1,2,2,2,0,0,0,0,0,    //GC3->GC3
};


#if 1
//ºÚ°×ºÚ°×Ë¢ÆÁ¡£×îÖÕµ½´ï°×±³¾°
#define FRAME_INIT_LEN_80 		2
unsigned char wave_init_80[FRAME_INIT_LEN_80]=
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



