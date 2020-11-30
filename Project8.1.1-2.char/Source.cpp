// Дано літерний рядок, який містить послідовність символів s[0], ...,s s[n], 
// 1. Вияснити, чи є серед цих символів пара сусідніх букв s[q] або q[].
// 2. Замінити кожну пару сусідніх букв s[q] або q[s] трійкою зірочок “***”

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <Windows.h>

using namespace std;

char* Change(char* str)
{
    char* tmp = new char[strlen(str)];
    char* p;
    int pos1 = 0,
        pos2 = 0;
    *tmp = 0;

    while (p = strchr(str + pos1, 'S'))
    {
        if (str[p - str + 1] == 'Q')
        {
            pos2 = p - str + 2;
            strncat(tmp, str + pos1, pos2 - pos1 - 2);
            strcat(tmp, "***");
            pos1 = pos2;
        }
        else
            break;
    }
    while (p = strchr(str + pos1, 'Q'))
    {
        if (str[p - str + 1] == 'S')
        {
            pos2 = p - str + 2;
            strncat(tmp, str + pos1, pos2 - pos1 - 2);
            strcat(tmp, "***");
            pos1 = pos2;
        }
        else
            break;
    }
    strcat(tmp, str + pos1);

    strcpy(str, tmp);

    return tmp;
}

int main()
{
    char str[20] = "SQqqQSqq";
    cout << "Done string: " << endl << endl << str << endl << endl;
    char q[] = "SQ";
    char q1[] = "QS";

    bool b = false;
    if (strstr(str, q))
        b = true;
    if (strstr(str, q1))
        b = true;
    if (b)
        cout << "yes" << endl;
    else
        cout << "no" << endl;

    char* second = new char[121];
    second = Change(str);

    cout << "Modified string: " << second;

    return 0;
}