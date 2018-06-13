#include <iostream>
using namespace std;
// Ufak bir hesap makinesi denemesi
int main()
{
    float sol, sag;
    char islem;
    cout << ">>> ";
        cin >> sol >> islem >> sag;
    if (islem == '+') 
        cout << "\tAns: " << sol+sag << endl;
    else if(islem == '-') 
        cout << "\tAns: " << sol-sag << endl;
    else if(islem == '*') 
        cout << "\tAns: " << sol*sag << endl;
    else if(islem == '/' && sag != 0) 
        cout << "\tAns: " << sol/sag << endl;
    else
        cout << "\tAns: !!!"<< endl;
    return main();
}
