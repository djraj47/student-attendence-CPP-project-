#include "header.h"
#include "login.cpp"
int main()
{
    system("cls");
    int option;
    char ch;
    do
    {
        cout << " ======================================= STUDENT MANAGAMENT SYSTEM ====================================== \n\n";
        cout << "                                              press 1 to LOGIN \n";
        cout << "                                              press 2 to EXIT \n\n";
        cout << "                                         press < 1-2 > to continue : ";
        cin >> option;
        switch (option)
        {
        case 1:
            login();
            break;
        case 2:
            exit(0);
            break;

        default:
            break;
        }
        cout << "\n                                         press ENTER to continue \n";
        ch = getch();
    } while (ch == '\n');
}