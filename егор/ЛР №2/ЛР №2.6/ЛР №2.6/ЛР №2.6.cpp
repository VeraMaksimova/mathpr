// Упрощенную о рюкзаке (веса предметов и их стоимость сгенерировать случайным образом: вместимость рюкзака 300 кг, веса предметов 10 – 300 кг, стоимость предметов 5 – 55 у.е.; 

// Main 
#include <iostream>
#include "Combi1.h"
#include <tchar.h>
#include "Knapsack.h"
#include <iomanip> 

#define NN 20
int _tmain(int argc, _TCHAR* argv[])
{
    setlocale(LC_ALL, "rus");
    int V = 300,    // вместимость рюкзака              
        v[NN],      // размер предмета каждого типа  
        c[NN];      // стоимость предмета каждого типа 
    short m[NN];    // количество предметов каждого типа  {0,1}

    clock_t t1, t2; // таймер

    
    for (int i = 12; i <= NN; i++)
    {
        RandomFilling(v, i, 10, 300);      // заполнение массива с размерами каждого предмета
        RandomFilling(c, i, 5, 55);        // заполнение массива со стоимостями каждого предмета

        /*
        t1 = clock();
        int maxcc = knapsack_s(
            V,   // [in]  вместимость рюкзака 
            i,   // [in]  количество типов предметов 
            v,   // [in]  размер предмета каждого типа  
            c,   // [in]  стоимость предмета каждого типа     
            m    // [out] количество предметов каждого типа  
        );
        t2 = clock();
        std::cout << t2 - t1 << std::endl; //милисекунды
        */
    
    }
    

    
    //int maxcc = 0;
    std::cout << std::endl << "-------- Задача о рюкзаке --------- ";
    std::cout << std::endl << "- вместимость рюкзака  : " << V;
    std::cout << std::endl << "-- количество ------ продолжительность -- ";
    std::cout << std::endl << "    предметов          вычисления  ";
    for (int i = 12; i <= NN; i++)
    {
        RandomFilling(v, i, 10, 300);      // заполнение массива с размерами каждого предмета
        RandomFilling(c, i, 5, 55);        // заполнение массива со стоимостями каждого предмета

        t1 = clock();
        //maxcc = knapsack_s(V, i, v, c, m);
        knapsack_s(V, i, v, c, m);
        t2 = clock();
        std::cout << std::endl << "       " << std::setw(2) << i
            << "               " << std::setw(5) << (t2 - t1);
    }
    std::cout << std::endl << std::endl;

    

    system("pause");
    return 0;
}
