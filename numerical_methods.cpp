bool isArmstrong(int number)
{
    int _number = 0;
    for(char a: to_string(number))
    {
        int ia = a - '0';
        _number += pow(ia,3);
    }
    return _number == number;
}

bool isPrime(int num)
{
    for(int i = 2; i < num; i++)
        if(num % i == 0)
            return false;
    return true;
}

bool isPerfect(int number)
{
    int poz_tam_bol_top = 0;
    for(int i = 1; i < number; i++)
        if(number % i == 0)
            poz_tam_bol_top += i;
    return number == poz_tam_bol_top;    
}

void seri_fibonacci(int limit)
{
    int i = 1, j = 1, temp;
    cout << 1 << " ";
    for(int k = 0; k < limit; k++)
    {
        cout << j << " ";
        temp = j; 
        j = temp + i; 
        i = temp;
    }
}

void seri_a(int limit)
{
    int i = 2, j = 3, temp;
    cout << 2 << " ";
    for(int k = 0; k < limit; k++)
    {
        cout << j << " ";
        temp = j; 
        j = temp * i; 
        i = temp;
    }
}

int ebob(int int_1, int int_2)
{
    for(int i = min(int_1, int_2); i > 0; i--)
        if(int_1 % i == 0 && int_2 % i == 0)
            return i;
}

int ekok(int int_1, int int_2)
{
    for(int i = max(int_1, int_2);; i++)
        if (i % int_1 == 0 && i % int_2 == 0)
            return i;
    
}

int fact(int limit)
{
    int _fact = 1;
    if(limit > 1)
        _fact *= limit * fact(limit-1);
    return _fact;
}

