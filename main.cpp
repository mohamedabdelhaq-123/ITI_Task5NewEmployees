#include <iostream>
#include <cstdio>
#include <vector>
#include <string>

#ifdef _WIN32
#include <windows.h>
#include <conio.h>  // for getch() on Windows
#else
#include <ncurses.h>
#endif

#include "Headers.h"
#include "FuncsHeaders.h"

using namespace std;



int main() {

    int myArray[2][3] = { {1, 2, 3}, {4, 5, 6} };

    modifyAndPrint(&myArray[0][0], 2, 3);  // Task 5

    return 0;
}














