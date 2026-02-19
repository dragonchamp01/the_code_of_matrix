#include  "16x16x16x_MATRIX.HPP"
#include <iostream.h>
#include <stdio.h>      /* printf, scanf */
#include <stdlib.h>     /* exit */
#include <setjmp.h>     /* jmp_buf, setjmp, longjmp */



static jmp_buf matrix_buffer;



computer_cpu::computer_cpu()
{

m_matrix; = new 3dmatrix;

}






computer_cpu::~computer_cpu()
{

delete m_matrix;



}



// we assign holy numbers

void computer_cpu::assign_numbers()
{
// m_matrix->z1.m1=holy value;
// only saints havbe all 16x16x3 numbers perfect to upgrade my pc my cpu will grow 50 billion interupts more.
// and that takes 24 hours.
// and then my pc has 18.000 bits instruyction set.
//  matrix uses primaryly 16x16x3 matrix structure for its code.
// and mom said we jump to the code and this runs on ur cpu and then u wont have to buy new pc.
// then a miracle happens said mom.


m_matrix->z1.m1=5; 

// jump to memory
// and start the matrix program in memory of computer.



}

void computer_cpu::run_matrix_program()
{

setjmp(matrix_buffer);
longjmp(matrix_buffer,1); 

// here is never reached until longjump returns.
    
}



void computer_cpu::multiplyEntireMatrix(long value)
{
m_matrix->z1.m1+=value;
// all the way to z16-m256

}





void computer_cpu::substractEntireMatrix(long value)
{

m_matrix->z1.m1-=value;
// all the way to z16-m256


}






int main()
{
computer_cpu * neomatrix= new computer_cpu;

neomatrix->assign_numbers();
cout << " neo matrix active" << endl;
cout << "matrix said keep in mem" << endl << "press enter to quit" << endl;

neomatrix->run_matrix_program();

// keep in memory
cin.get();
delete neomatrix;

return 0;    
}
