#include "header.h"
#include "login.cpp"
int main()
{
    int option;
    char ch;
    do
    {

        cout << " ===================================== STUDENT MANAGAMENT SYSTEM ===================================== \n\n";
        cout << "                                           press 1 to LOGIN \n";
        cout << "                                           press 2 to EXIT \n\n";
        cout << "                                       press < 1-2 > to continue : ";
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
            cout << "\n                                            invalid input\n";
            break;
        }
        cout << "                                        press ENTER to continue \n";
        scanf("%c%*c", &ch);
    } while (ch == '\n');
}