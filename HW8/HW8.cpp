
#include <iostream>
#include <cmath>

void task2();
void task3();
void task4();
void task5();

void task2()
{
    int polzovatelu;

    int* NumberToCalculete = &polzovatelu;

    std::cout << "Print a numeber: ";
    std::cin >> polzovatelu;

    std::cout << pow(*NumberToCalculete, 2) << "\n";
    std::cout << pow(*NumberToCalculete, 3) << "\n";
    std::cout << pow(*NumberToCalculete, 4) << "\n";
}

void task3()
{
    int dirstNumber =15;
    int secontNumber=15;
    int sum;

    int* dirstNumberYkazatel = &dirstNumber;
    int* secontNumberYkazatel = &secontNumber;
    int* sumYkazatel = &sum;

    int** dirstNumberYkazatelNA = &dirstNumberYkazatel;
    int** secontNumberYkazatelNA = &secontNumberYkazatel;
    int** sumYkazatelNA = &sumYkazatel;

    **sumYkazatelNA = **dirstNumberYkazatelNA + **secontNumberYkazatelNA;

    std::cout << **sumYkazatelNA;
}

void task4()
{
    int x1 = 200;
    int x2 = 180;
    int x3;
    int x4;

    int* releWethigt = &x1;
    int* hiegt = &x2;
    int* amasingWeight = &x3;
    int* defferenc = &x4;

    *amasingWeight = *hiegt - 110;
    *defferenc = *releWethigt - *amasingWeight;
    std::cout << *defferenc;
}

void task5()
{
    int x1 = 200;
    
    int* x2 = &x1;
    int** x3 = &x2;
    int*** x4 = &x3;
    int**** x5 = &x4;
    int***** x6 = &x5;

    std::cout << x2 << "\n";
    std::cout << x3 << "\n";
    std::cout << x4 << "\n";
    std::cout << x5 << "\n";
    std::cout << x6 << "\n";
}


int main()
{
    //task2();
    //task3();
    //task4();
    task5();
}

