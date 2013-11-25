
int main(void) {
    const int a = 3;
    // a = 4; // error: assignment of read-only variable ‘a’
    // int pa = &a; // error: invalid conversion from ‘const int*’ to ‘int’ [-fpermissive]
    
    int b = 4;
    const int* pb = &b;
    // *pb = 5; // error: assignment of read-only location ‘* pb’
    // int* pb2 = pb; // error: invalid conversion from ‘const int*’ to ‘int*’ [-fpermissive]
    int* pb3 = &b;
    int** ppb = &pb3;

    int c = 5;
    int* const pc = &c;
    // pc = &b; // error: assignment of read-only variable ‘pc’
    int* pc2 = pc;
    // int** ppc = &pc; // error: invalid conversion from ‘int* const*’ to ‘int**’ [-fpermissive]
    
    int d = 6;
    int* pd = &d;
    //const int** ppd = &pd; // error: invalid conversion from ‘int**’ to ‘const int**’ [-fpermissive]
    
    int e = 7;
    const int* pe = &e;
    const int** ppe = &pe;
}

