#include "header.h"
#include "login.cpp"
#include "signup.cpp"
int main()
{
    int option;
    char ch;
    do
    {

        cout << " ===================================== STUDENT MANAGAMENT SYSTEM ===================================== \n\n";
        cout << "                                          press 1 to LOGIN \n";
        cout << "                                          press 2 to SIGN UP \n";
        cout << "                                          press 3 to EXIT \n\n";
        cout << "                                        press < 1-3 > to continue : ";
        cin >> option;
        switch (option)
        {
        case 1:
            login();
            break;
        case 2:
            signup();
            break;
        case 3:
            exit(0);
            break;

        default:
            break;
        }
        cout << "press ENTER to continue \n";
        ch = getch();
    } while (ch == '\n');
}