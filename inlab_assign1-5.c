/******************************************************************************

HANDS-ON LAB #4: Pointers
In-lab Assignment #1-5

*******************************************************************************/
#include <stdio.h>

void main()
{
    // Item #1
    // Declare a pointer to a short int
    // and a pointer to a float.
    short int *pint_A;
    float *pint_B;
    // ----------------------------------------
    
    // Item #2
    // Of what use is the sizeof() operator?
    // > It returns the size in bytes of the input operand. 
    // > Advantageous for memory allocation of using
    //   the same code to different operating systems.
    // ----------------------------------------
    
    // Item #3
    // In a given operating system, a pointer to a short int
    // is 32 bits wide. How wide is a pointer to a long int
    // in this same system?
    // > Long int width is the same as short int width (32 bits).
    // > Any pointer variable holds a pointer value which is a memory
    //   address of same width that is dependent on the processor.
    /*
    printf("%lu\n", sizeof(short int *));
    printf("%lu\n", sizeof(long int *));
    */
    // ----------------------------------------
    
    // Item #4
    // Assume p is a pointer to a float. Further, assume,
    // the value of p is 1000 (i.e., the address of the float it
    // points to is 1000). The value of the float is 17.6.
    // What value is p++?
    // > 1004
    // 
    // Define in words what *p and &p mean.
    // > Asterisk (*) is a dereferencing operator.
    //   If p is a pointer, then *p will return the value stored in p.
    // > Ampersand (&) is an address-of operator.
    //   If p is a variable, then &p will return the address of p.
    //
    // Is there a way to determine the values of *p and &p
    // given the info above?
    // > *p: Value of pointer, returns 17.6.
    // > &p: Address of pointer, cannot be determined initially. 
    //   But using below code, &p returned p + 4.
    //
    /*
    float pvar = 17.6;
    float *p;
    
    p = &pvar;
    
    printf(" p: %p\n", p);  //  p: address
    printf("*p: %f\n", *p); // *p: value
    printf("&p: %p\n", &p); // &p: address + 4
    */
    // ----------------------------------------
    
    // Item #5
    // Assume pointers are 32 bits wide.
    // ***long int size: 4 bytes
    /* Memory map after the code has executed:
    top -------------------
         |                |
         |                |
         |                |
         |                |
         |                |
         |                |
        -------------------
    8000 |    101         | x
        -------------------
         |                |
        --------------------
    5000 |    8004        | y
        --------------------
         |                |
        --------------------
    2000 |    5008        | z
        --------------------
         |                |
        --------------------
    */
    
}
