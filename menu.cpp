#include "header.h"
#include "add.cpp"
#include "view.cpp"
#include "edit.cpp"
#include "remove.cpp"

int main()
{
    int option;
    char ch;
    do
    {
        system("cls");
        cout << "==============================================================================================================\n\n";
        cout << "                                      press < 1 > to ADD NEW STUDENT \n";
        cout << "                                      press < 2 > to VIEW STUDENT \n";
        cout << "                                      press < 3 > to EDIT STUDENT \n";
        cout << "                                      press < 4 > to REMOVE STUDENT \n";
        cout << "                                      press < 5 > to EXIT  \n\n";
        cout << "                                      press < 1-5 > to continue :";
        cin >> option;

        switch (option)
        {
        case 1:
            add();
            break;
        case 2:
            view();
            break;
        case 3:
            edit();
            break;
        case 4:
            remove();
            break;
        case 5:
            exit(0);
            break;

        default:
            break;
        }

        cout << "\n                                        press ENTER to continue ";
        scanf("%c%*c", &ch);
    } while (ch == '\n');
}