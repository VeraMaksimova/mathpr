
#include <algorithm>
#include <iostream>
#include <ctime>
#include <iomanip>
#include "Levenshtein.h"

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    clock_t t1 = 0, t2 = 0, t3, t4;
    char X[] = "ABCDFGI", Y[] = "EATUFI";
    /*std::cout << std::endl << "-- вычисление длины LCS для X и Y(рекурсия)";
    std::cout << std::endl << "-- последовательность X: " << X;
    std::cout << std::endl << "-- последовательность Y: " << Y;*/
    //int s = lcs(
    //    sizeof(X) - 1,  // длина   последовательности  X   
    //    "ABCDFGI",       // последовательность X
    //    sizeof(Y) - 1,  // длина   последовательности  Y
    //    "EATUFI"       // последовательность Y
    //);
    int lx_rec = sizeof(X) - 1, ly_rec = sizeof(Y) - 1;
   /* std::cout << std::endl << "-- длина LCS: " << s << std::endl;*/


    //DYNAMIC
    char z[100] = "";
    char x[] = "ABCDFGI",
        y[] = "EATUFI";
    int lx_dun = sizeof(x) - 1, ly_dun = sizeof(y) - 1;
   /* int l = lcsd(x, y, z);
    std::cout << std::endl
        << "-- наибольшая общая подпоследовательость - LCS(динамическое"
        << " программирование)" << std::endl;
    std::cout << std::endl << "последовательость X: " << x;
    std::cout << std::endl << "последовательость Y: " << y;
    std::cout << std::endl << "                LCS: " << z;
    std::cout << std::endl << "          длина LCS: " << l;
    std::cout << std::endl;*/
    cout << endl << "--длина --- рекурсия -- дин.програм. ---" << endl;
    for (int i = 0; i < std::min(lx_rec, ly_rec); i++)
    {


        t1 = clock(); lcs(i, x, i + 1, y); t2 = clock();
        t3 = clock(); lcsd(x, y, z); t4 = clock();

        cout << right << setw(2) << 1 << "/" << setw(2) << i + 1  << "        " << left << setw(10) << (t2 - t1) << "   " << setw(10) << (t4 - t3) << endl;
       

    }
    system("pause");
    return 0;
}
