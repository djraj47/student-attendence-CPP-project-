#include "header.h"
#include "add.cpp"
#include "view.cpp"
#include "edit.cpp"
#include "remove.cpp"
#include "search.cpp"

void menu()
{
    int option;
    char ch;
    do
    {
        system("cls");

        cout << "========================================== MANAGE STUDENT DATA ==========================================\n\n";
        cout << "                                     press < 1 > to ADD NEW STUDENT \n";
        cout << "                                     press < 2 > to VIEW ALL STUDENT \n";
        cout << "                                     press < 3 > to SEARCH STUDENT \n";
        cout << "                                     press < 4 > to EDIT STUDENT \n";
        cout << "                                     press < 5 > to REMOVE STUDENT \n";
        cout << "                                     press < 6 > to EXIT  \n\n";
        cout << "                                     press < 1-6 > to continue :";
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
            search();
            break;
        case 4:
            edit();
            break;
        case 5:
            remove();
            break;
        case 6:
            exit(0);
            break;

        default:
            break;
        }

        cout << "\n                                        press ENTER to continue ";
        scanf("%c%*c", &ch);
    } while (ch == '\n');
}