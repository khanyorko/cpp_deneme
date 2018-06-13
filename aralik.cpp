int main()
{
    float Xo, Xi;
    int n;
    cout << ">>> aralik(Xo, Xi, n) :\t";
        cin >> Xo >> Xi >> n;
    printf(">>> aralik(%f,%f,%d) :\t",Xo ,Xi ,n);
    for(int i = 0; i < n+1; i++)
        cout << Xo + i*(Xi-Xo)/n << " ";
    cout << endl;
    return 0;
}
