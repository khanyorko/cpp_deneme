#include <iostream>
using namespace std;
// Ufak bir hesap makinesi denemesi
int main()
{
    float sol, sag;
    char islem;
    printf(">>> ");
        scanf("\t%f %c %5f", &sol, &islem, &sag);
    if (islem == '+') 
        printf("\tAns:\t%5f\n", sol+sag);
    else if(islem == '-') 
        printf("\tAns:\t%5f\n", sol-sag);
    else if(islem == '*') 
        printf("\tAns:\t%5f\n", sol*sag);
    else if(islem == '/') 
        printf("\tAns:\t%5f\n", sol/sag);
    else
        return 0;
    return main();
}
