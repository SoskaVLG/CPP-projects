﻿#include <iostream>

using namespace std ;

void factorial(int x)
{
    int count = x ;

    int sum = 1 ;

    while (count > 0) {
        
        sum *= count ;

        count -= 1 ;
    }

    cout << "\a\nФакториал числа " << x << " равен : " << sum << "\n\n" ;

    system("pause");
}


int main()
{
    setlocale(LC_ALL, "rus");

    int a ;
    cout << "Введите число : \a\n\n" << "> ";

    cin >> a ;

    factorial(a) ;
}

