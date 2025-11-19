#ifndef FUNCSHEADERS_H_INCLUDED
#define FUNCSHEADERS_H_INCLUDED


#ifdef _WIN32
#include <windows.h>
#include <conio.h>  // for getch() on Windows
#else
#include <unistd.h>
#include <ncurses.h>
#endif

#include <vector>
#include <string>
using namespace std;

typedef struct {
    c8 employeeFirstName[50];
    c8 employeeLastName[50];
    s32  employeeAge;
    c8 employeeDepartment[50];
} employee;

/////////////////////////////////////Prototypes////////////////////////////////////

void gotoXY(u16 row, u16 col);
void clearScreen();
void resetColor();
void setColor(Color color);

u16 colorChoiceByUser(char*dataFromUser);
void printUserInputColor (u16 userColorChoice, char*dataFromUser);
void printColoredString (char*dataFromUser);
void delaySeconds(u16 seconds);

void initScreen();
void closeScreen();
u32 showMenu(const vector<string>& options);

void newOption();
void displayOption();
void exitOption();
void runMenu (void);
void printMenu(void);

void swapByAddSub(u32* num1 , u32* num2);
void swapByXOR(u32* num1 , u32* num2);
void swapByMultDiv(u32* num1 , u32* num2);


void modifyAndPrint(int* arr, u32 rows, u32 cols);

void displayEmployeeData(void);
employee  userInsertEmployeeData(void);

#endif // FUNCSHEADERS_H_INCLUDED
