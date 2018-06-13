int main()
{
    float sol, sag;
    char islem;
    cout << ">>> ";
        cin >> sol >> islem >> sag;
    switch(islem)
    {
        case '+': cout << "\t" << sol+sag << endl; break;
        case '-': cout << "\t" << sol-sag << endl; break;
        case '*': cout << "\t" << sol*sag << endl; break;
        case '/': sag == 0 ? cout << "\t" << "!!!"   << endl: 
                             cout << "\t" << sol/sag << endl; break;
    }
   return main();
}
