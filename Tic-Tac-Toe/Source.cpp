#include <iostream>
#define cls system("cls")

using namespace std;

int main() {
    setlocale(0, "");
    // ��������� ����
    int map[3][3]{};
    int counter = 1;
    bool flag = true;
    string uicolor = "\x1b[94m";
    string color = "\x1b[94m";
    int req = 0;
    string name = "������";
    char figure = 'X';

menu:
    cls;
    cout << "[" << uicolor << "+" << "\x1b[0m] ������� ����\n\n";
    cout << "[" << uicolor << "1" << "\x1b[0m] ������ ����\n";
    cout << "[" << uicolor << "2" << "\x1b[0m] ����������\n";
    cout << "[" << uicolor << "3" << "\x1b[0m] ���������\n";
    cout << "[" << uicolor << "4" << "\x1b[0m] �����\n\n";
    cout << "[" << uicolor << "?" << "\x1b[0m] ";
    cin >> req;

    if (req == 1) {
        while (true) {

            // ������ ����
            cls;
            cout << "\n\n\n";
            for (int i = 0; i < 3; i++) {
                cout << "\t\t      ";
                for (int j = 0; j < 3; j++) {
                    if (map[i][j] == 0) {
                        cout << "\x1b[90m" << counter << "\x1b[0m ";
                    }
                    else if (map[i][j] == 1) {
                        cout << color << figure << "\x1b[0m ";
                    }
                    else if (map[i][j] == 2) {
                        cout << "\x1b[91mO\x1b[0m ";
                    }


                    if (j != 2) {
                        cout << "| ";
                    }
                    counter++;
                }
                if (i != 2) {
                    cout << "\n\t\t      ---------\n";
                }
            }

            // ���� win!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
            if
                (	/*������������*/
                    /*_1-1_*/map[0][0] == 1 && /*_1-2_*/map[0][1] == 1 && /*_1-3_*/map[0][2] == 1 ||
                    /*_2-1_*/map[1][0] == 1
                    && /*_2-2_*/map[1][1] == 1 && /*_2-3_*/map[1][2] == 1 || /*_3-1_*/map[2][0] == 1 && /*_3-2_*/map[2][1] == 1 && /*_3-3_*/map[2][2] == 1 ||

                    /*���������*/
                    /*_1-1_*/map[0][0] == 1 && /*_2-1_*/map[1][0] == 1 && /*_3-1_*/map[2][0] == 1 || /*_1-2_*/map[0][1] == 1 && /*_2-2_*/map[1][1] == 1
                    && /*_3-2_*/map[2][1] == 1 || /*_1-3_*/map[0][2] == 1 && /*_2-3_*/map[1][2] == 1 && /*_3-3_*/map[2][2] == 1 ||
                    /*���������*/
                    /*_1-1_*/map[0][0] == 1 && /*_2-2_*/map[1][1] == 1 && /*_3-3_*/map[2][2] == 1 || /*_1-3_*/map[0][2] == 1 && /*_2-2_*/map[1][1] == 1 &&
                    /*_3-1_*/map[2][0] == 1
                    )
            {
                cout << "\n\t\t         win!\n";
            }

            if (flag) {
                cout << "\n\n\t\t    [+] ����� 1: \x1b[90m";
            }
            else {
                cout << "\n\n\t\t    [+] ����� 2: \x1b[90m";
            }
            int step;
            cin >> step;

            // ����������
            switch (step) {
            case 1:
                if (map[0][0] != 0) {
                    flag = !flag;
                    break;
                }

                if (flag) {
                    map[0][0] = 1;
                }
                else {
                    map[0][0] = 2;
                }

                break;
            case 2:
                if (map[0][1] != 0) {
                    flag = !flag;
                    break;
                }

                if (flag) {
                    map[0][1] = 1;
                }
                else {
                    map[0][1] = 2;
                }
                break;
            case 3:
                if (map[0][2] != 0) {
                    flag = !flag;
                    break;
                }

                if (flag) {
                    map[0][2] = 1;
                }
                else {
                    map[0][2] = 2;
                }
                break;
            case 4:
                if (map[0][3] != 0) {
                    flag = !flag;
                    break;
                }

                if (flag) {
                    map[0][3] = 1;
                }
                else {
                    map[0][3] = 2;
                }
                break;
            case 5:
                if (map[0][4] != 0) {
                    flag = !flag;
                    break;
                }

                if (flag) {
                    map[0][4] = 1;
                }
                else {
                    map[0][4] = 2;
                }
                break;
            case 6:
                if (map[0][5] != 0) {
                    flag = !flag;
                    break;
                }

                if (flag) {
                    map[0][5] = 1;
                }
                else {
                    map[0][5] = 2;
                }
                break;
            case 7:
                if (map[0][6] != 0) {
                    flag = !flag;
                    break;
                }

                if (flag) {
                    map[0][6] = 1;
                }
                else {
                    map[0][6] = 2;
                }
                break;
            case 8:
                if (map[0][7] != 0) {
                    flag = !flag;
                    break;
                }

                if (flag) {
                    map[0][7] = 1;
                }
                else {
                    map[0][7] = 2;
                }
                break;
            case 9:
                if (map[0][8] != 0) {
                    flag = !flag;
                    break;
                }

                if (flag) {
                    map[0][8] = 1;
                }
                else {
                    map[0][8] = 2;
                }
                break;
            }
            flag = !flag;
            // ���������
            counter = 1;
        }
    }
    if (req == 3) {
    settings:
        system("cls");
        cout << "[" << uicolor << "+" << "\x1b[0m] ���������\n\n";
        cout << "[" << uicolor << "1" << "\x1b[0m] �������� ���� | " << uicolor << name << "\x1b[0m" << endl;
        cout << "[" << uicolor << "2" << "\x1b[0m] ����� ������  | " << uicolor << figure << "\x1b[0m" << endl;
        cout << "[" << uicolor << "3" << "\x1b[0m] ���� UI       | " << uicolor << "[+]" << "\x1b[0m" << endl;
        cout << "[" << uicolor << "4" << "\x1b[0m] ���� ������   | " << color << "?" << "\x1b[0m" << endl;
        cout << "[" << uicolor << "5" << "\x1b[0m] ������� ����" << endl << endl;
        cout << "[" << uicolor << "?" << "\x1b[0m] ";
        cin >> req;
        if (req == 5) {
            goto menu;
        }
        if (req == 1) {
            system("cls");
            cout << "[" << uicolor << "+" << "\x1b[0m] �������� ����\n\n";
            cout << "[" << uicolor << "?" << "\x1b[0m] ������� ����� ���: ";
            cin >> name;
            cout << "\n[" << uicolor << "1" << "\x1b[0m] �����\n";
            cout << "[" << uicolor << "2" << "\x1b[0m] ������� ����\n\n";
            cout << "[" << uicolor << "?" << "\x1b[0m] ";
            cin >> req;
            if (req == 1) {
                system("cls");
                goto settings;
            }
            if (req == 2) {
                system("cls");
                goto menu;
            }
        }
        if (req == 2) {
            system("cls");
            cout << "[" << uicolor << "+" << "\x1b[0m] ����� ������\n\n";
            cout << "[" << uicolor << "?" << "\x1b[0m] ������� ����� ������: ";
            cin >> figure;
            cout << "\n[" << uicolor << "1" << "\x1b[0m] �����\n";
            cout << "[" << uicolor << "2" << "\x1b[0m] ������� ����\n\n";
            cout << "[" << uicolor << "?" << "\x1b[0m] ";
            cin >> req;
            if (req == 1) {
                system("cls");
                goto settings;
            }
            if (req == 2) {
                system("cls");
                goto menu;
            }
        }
        if (req == 3) {
            system("cls");
            cout << "[" << uicolor << "+" << "\x1b[0m] ���� UI\n\n";
            cout << "[" << uicolor << "1" << "\x1b[0m]\x1b[94m ����� \x1b[0m\n";
            cout << "[" << uicolor << "2" << "\x1b[0m]\x1b[92m ������ \x1b[0m\n";
            cout << "[" << uicolor << "3" << "\x1b[0m]\x1b[91m ������� \x1b[0m\n\n";
            cout << "[" << uicolor << "?" << "\x1b[0m] ������� ����� ����: ";
            cin >> uicolor;
            if (uicolor == "1") {
                uicolor = "\x1b[94m";
            }
            if (uicolor == "2") {
                uicolor = "\x1b[92m";
            }
            if (uicolor == "3") {
                uicolor = "\x1b[91m";
            }
            cout << "\n[" << uicolor << "1" << "\x1b[0m] �����\n";
            cout << "[" << uicolor << "2" << "\x1b[0m] ������� ����\n\n";
            cout << "[" << uicolor << "?" << "\x1b[0m] ";
            cin >> req;
            if (req == 1) {
                system("cls");
                goto settings;
            }
            if (req == 2) {
                system("cls");
                goto menu;
            }
        }
        if (req == 4) {
            system("cls");
            cout << "[" << uicolor << "+" << "\x1b[0m] ���� ������\n\n";
            cout << "[" << uicolor << "1" << "\x1b[0m]\x1b[94m ����� \x1b[0m\n";
            cout << "[" << uicolor << "2" << "\x1b[0m]\x1b[92m ������ \x1b[0m\n";
            cout << "[" << uicolor << "3" << "\x1b[0m]\x1b[91m ������� \x1b[0m\n\n";
            cout << "[" << uicolor << "?" << "\x1b[0m] ������� ����� ����: ";
            cin >> color;
            if (color == "1") {
                color = "\x1b[94m";
            }
            if (color == "2") {
                color = "\x1b[92m";
            }
            if (color == "3") {
                color = "\x1b[91m";
            }
            // ���� ���������� ������
            cout << "\n[" << uicolor << "1" << "\x1b[0m] �����\n";
            cout << "[" << uicolor << "2" << "\x1b[0m] ������� ����\n\n";
            cout << "[" << uicolor << "?" << "\x1b[0m] ";
            cin >> req;
            if (req == 1) {
                system("cls");
                goto settings;
            }
            if (req == 2) {
                system("cls");
                goto menu;
            }
        }
    }
    int _;
    cin >> _;
    return 0;
}