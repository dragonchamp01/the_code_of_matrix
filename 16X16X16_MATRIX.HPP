#ifndef MATRIX_H
#define MATRIX_H
#include <iostream.h>
#include <stdio.h>      /* printf, scanf */
#include <stdlib.h>     /* exit */
#include <setjmp.h>     /* jmp_buf, setjmp, longjmp */







typedef struct 2dnatrix
{
//x
//y
//z

long m1,m2,m3,m4,m5,m6,m7,m8,m9,m10,m11,m12,m13,m14,m16; //x,y
long m17,m18,m19,m20,m21,m22,m23,m24,m25,m26,m27,m28,m29,m30,m31,m32; // x,y
long m33,m34,m35,m36,m37,m38,m39,m40,m41,m42,m43,m44,m45,m46,m47,m48; // x,y
long m49,m50,m51,m52,m53,m54,m55,m56,m57,m58,m59,m60,m61,m62,m63,m64; // x,y
long m65,m66,m67,m68,m69,m70,m71,m72,m73,m74,m75,m76,m77,m78,m79,m80; // x,y
long m81,m82,m83,m84,m85,m86,m87,m89,m90,m01,m92,m93,m94,m95,m96,m97; // x,y
long m98,m99,m100,m101,m102,m103,m104,m105,m106,m107,m108,m109,m110,m111,m112,m113; // x,y
long m113,m114,m115,m116,m117,m118,m119,m120,m121,m122,m123,m124,m125,m126,m127,m128; // x,y
long m129,m130,m131,m132,m133,m134,m135,m136,m137,m138,m139,m140,m141,m142,m143,m144; // x,y
long m145,m146,m147,m148,m149,m150,m152,m153,m154,m155,m156,m157,m158,m159,m160,m161; // x,y
long m162,m162,m163,m164,m165,m166,m167,m168,m169,m170,m171,m172,m173,m174,m175,m176; // x,y
long m177,m178,m179,m180,m181,m182,m183,m184,m185,m186,m187,m188,m189,m190,m191,m192; // x,y
long m193,m194,m195,m196,m197,m198,m199,m200,m201,m202,m203,m204,m205,m206,m207,m208; // x,y
long m209,m210,m211,m212,m213,m214,m215,m216,m217,m218,m219,m220,m221,m222,m223,m224; // x,y
long m225,m226,m227,m228,m229,m230,m231,m232,m233,m234,m235,m236,m237,m238,m239,m240; // x,y
long m241,m242,m243,m244,m245,m246,m247,m248,m249,m250,m251,m252,m253,m254,m255,m256; // x,y

// 16xrows 16xcols =256
// x row,y row.
// from left to right = x angle
// from top to bottom is y angle.

};




typedef struct 3dmatrix
{

// now we get the depth angle z-axis.

2dnatrix * z1;
2dnatrix * z2;
2dnatrix * z3;
2dnatrix * z4;
2dnatrix * z5;
2dnatrix * z6;
2dnatrix * z7;
2dnatrix * z8;
2dnatrix * z9;
2dnatrix * z10;
2dnatrix * z11;
2dnatrix * z12;
2dnatrix * z13;
2dnatrix * z14;
2dnatrix * z15
2dnatrix * z16;

3dmatrix()
{


 z1 = new 2dnatrix;
 z2 = new 2dnatrix;
 z3 = new 2dnatrix;
 z4 = new 2dnatrix;
 z5 = new 2dnatrix;
 z6 = new 2dnatrix;
 z7 = new 2dnatrix;
 z8 = new 2dnatrix;
 z9 = new 2dnatrix;
 z10 = new 2dnatrix;
 z11 = new 2dnatrix;
 z12 = new 2dnatrix;
 z13 = new 2dnatrix;
 z14 = new 2dnatrix;
 z15 = new 2dnatrix;
 z16 = new 2dnatrix;
}

~3dmatrix()
{
    
    
 delete z1;
 delete  z2;
 delete  z3;
 delete  z4;
 delete  z5;
 delete  z6;
 delete  z7;
 delete  z8;
 delete  z9;
 delete  z10;
 delete  z11;
 delete  z12;
 delete  z13;
 delete  z14;
 delete  z15
 delete  z16;
}







};


// 3 dimensions bjg is the matrix.



class computer_cpu
{
private:
3dmatrix * m_matrix;  // the matrix white

// 3dmatrix * m_anti_matrix;  // the anti matrix black
// 3dmatrix * m_chaos_matrix; // dark and white
// 3dmatrix * m_anti_chaos_matrix; // anti dark and anti white.


// white matrix only uses operator -
// operator +
// and matrix has unique matrix programs.


public:
computer_cpu();
~computer_cpu();
void assign_numbers();
void multiplyEntireMatrix(long value);
void substractEntireMatrix(long value);
matrix_3d* get_matrix() { return m_matrix; }

void run_matrix_program();
// matrix said this must be the last variable in the class and it must be private;
private:
jmp_buf matrix_buffer;

};





#endif
