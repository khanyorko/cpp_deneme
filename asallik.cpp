int main()
{
    int temp;
    cout << ">>> ";
        cin >> temp;
    for(int i = 2; i < temp; i++)
        if (temp % i == 0)
        {
            cout << "\tAsal değildir" << endl;
            return main();
        }
    temp < 2 ? cout << "\tAsal değildir" << endl : cout << "\tAsaldır" << endl;    
    return main();
}
