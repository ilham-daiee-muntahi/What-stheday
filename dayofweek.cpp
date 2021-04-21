#include <iostream>
using namespace std;

int main() {
    int year;
    int month;
    int date;

    cout << "This program finds out which date was which day of the week of the years 1700-2299. \n";
    while (true) {
        cout << "What's the year? \n";
        cout << "Type in the year in numbers (1700-2299): ";
        cin >> year;
        if ((year < 1699) || (year > 2300)) {
            cout << "Invalid year!!! \n";
            continue;
        }
        cout << "What's the month? \n";

        cout << "Type in numbers (1-12): ";
        cin >> month;
        if ((month < 1) || (month > 12)) {
            cout << "Invalid month!!! \n";
            continue;
        }

        int moco;
        switch (month) {
            case 1:
                moco = 0;
                break;
            case 2:
                moco = 3;
                break;
            case 3:
                moco = 3;
                break;
            case 4:
                moco = 6;
                break;
            case 5:
                moco = 1;
                break;
            case 6:
                moco = 4;
                break;
            case 7:
                moco = 6;
                break;
            case 8:
                moco = 2;
                break;
            case 9:
                moco = 5;
                break;
            case 10:
                moco = 0;
                break;
            case 11:
                moco = 3;
                break;
            case 12:
                moco = 5;
                break;

            default:
                cout << "nothing";
                break;
        }

        cout << "What was the date? \n";
        cout << "Type in numbers (1-31): ";
        cin >> date;
        if ((date < 1) || (date > 31)) {
            cout << "Invalid date!!! \n";
            continue;
        }
        if (year > 1699 && year < 1800)  // 1700 - 1799
        {
            int yearsub = year - 1700;
            int qut = yearsub / 4;
            int dividend = date + moco + qut + yearsub;
            int divisor = 7;
            int res = dividend % divisor;
            switch (res) {
                case 5:
                    cout << "It was Sunday";
                    break;
                case 6:
                    cout << "It was Monday";
                    break;
                case 0:
                    cout << "It was Tuesday";
                    break;
                case 1:
                    cout << "It was Wednesday";
                    break;
                case 2:
                    cout << "It was Thursday";
                    break;
                case 3:
                    cout << "It was Friday";
                    break;
                case 4:
                    cout << "It was Saturday";
                    break;

                default:
                    cout << "ass";
                    break;
            }

        } else if (year > 1799 && year < 1900) {  //1800-1899

            int yearsub = year - 1800;
            int qut = yearsub / 4;
            int dividend = date + moco + qut + yearsub;
            int divisor = 7;
            int res = dividend % divisor;
            switch (res) {
                case 6:
                    cout << "It was Sunday";
                    break;
                case 0:
                    cout << "It was Monday";
                    break;
                case 1:
                    cout << "It was Tuesday";
                    break;
                case 2:
                    cout << "It was Wednesday";
                    break;
                case 3:
                    cout << "It was Thursday";
                    break;
                case 4:
                    cout << "It was Friday";
                    break;
                case 5:
                    cout << "It was Saturday";
                    break;

                default:
                    cout << "ass";
                    break;
            }

        } else if (year > 1899 && year < 2000)  //for 1900-1999
        {
            int yearsub = year - 1900;
            int qut = yearsub / 4;
            int dividend = date + moco + qut + yearsub;
            int divisor = 7;
            int res = dividend % divisor;
            switch (res) {
                case 0:
                    cout << "It was Sunday";
                    break;
                case 1:
                    cout << "It was Monday";
                    break;
                case 2:
                    cout << "It was Tuesday";
                    break;
                case 3:
                    cout << "It was Wednesday";
                    break;
                case 4:
                    cout << "It was Thursday";
                    break;
                case 5:
                    cout << "It was Friday";
                    break;
                case 6:
                    cout << "It was Saturday";
                    break;

                default:
                    cout << "ass";
                    break;
            }
        } else if (year > 1999 && year < 2100) {
            int yearsub = year - 2000;
            int qut = yearsub / 4;
            int dividend = date + moco + qut + yearsub;
            int divisor = 7;
            int res = dividend % divisor;
            switch (res) {
                case 1:
                    cout << "It was Sunday";
                    break;
                case 2:
                    cout << "It was Monday";
                    break;
                case 3:
                    cout << "It was Tuesday";
                    break;
                case 4:
                    cout << "It was Wednesday";
                    break;
                case 5:
                    cout << "It was Thursday";
                    break;
                case 6:
                    cout << "It was Friday";
                    break;
                case 0:
                    cout << "It was Saturday";
                    break;

                default:
                    cout << "ass";
                    break;
            }
        } else if (year > 2099 && year < 2200) {  //2100-2199
            int yearsub = year - 2100;
            int qut = yearsub / 4;
            int dividend = date + moco + qut + yearsub;
            int divisor = 7;
            int res = dividend % divisor;
            switch (res) {
                case 2:
                    cout << "It was Sunday";
                    break;
                case 3:
                    cout << "It was Monday";
                    break;
                case 4:
                    cout << "It was Tuesday";
                    break;
                case 5:
                    cout << "It was Wednesday";
                    break;
                case 6:
                    cout << "It was Thursday";
                    break;
                case 0:
                    cout << "It was Friday";
                    break;
                case 1:
                    cout << "It was Saturday";
                    break;

                default:
                    cout << "ass";
                    break;
            }
        } else if (year > 2199 && year < 2300)  //2200-2299
        {
            int yearsub = year - 2200;
            int qut = yearsub / 4;
            int dividend = date + moco + qut + yearsub;
            int divisor = 7;
            int res = dividend % divisor;
            switch (res) {
                case 3:
                    cout << "It was Sunday";
                    break;
                case 4:
                    cout << "It was Monday";
                    break;
                case 5:
                    cout << "It was Tuesday";
                    break;
                case 6:
                    cout << "It was Wednesday";
                    break;
                case 0:
                    cout << "It was Thursday";
                    break;
                case 1:
                    cout << "It was Friday";
                    break;
                case 2:
                    cout << "It was Saturday";
                    break;

                default:
                    cout << "ass";
                    break;
            }
        }
        cout << endl;
        cout << "Enter '1' to go again or '0' to exit: ";
        int c;
        cin >> c;
        if (c = 1) {
            continue;
        } else if (c = 0) {
            break;
        } else {
            continue;
        }
    }
}
/*if (month == 1) {
            moco = 0;
        } else if (month == 2) {
            moco = 3;
        } else if (month == 3) {
            moco = 3;
        } else if (month == 4) {
            moco = 6;
        } else if (month == 5) {
            moco = 1;
        } else if (month == 6) {
            moco = 4;
        } else if (month == 7) {
            moco = 6;
        } else if (month == 8) {
            moco = 2;
        } else if (month == 9) {
            moco = 5;
        } else if (month == 10) {
            moco = 0;
        } else if (month == 11) {
            moco = 3;
        } else if (month == 12) {
            moco = 5;
        }*/
/* if (res == 1) {
                cout << "It was Sunday";
            } else if (res == 2) {
                cout << "It was Monday";
            } else if (res == 3) {
                cout << "It was Tuesday";
            } else if (res == 4) {
                cout << "It was Wednesday";
            } else if (res == 5) {
                cout << "It was Thursday";
            } else if (res == 6) {
                cout << "It was Friday";
            } else if (res == 0) {
                cout << "It was Saturday";
            }*/
/*if (res == 0) {
                cout << "It was Sunday";
            } else if (res == 1) {
                cout << "It was Monday";
            } else if (res == 2) {
                cout << "It was Tuesday";
            } else if (res == 3) {
                cout << "It was Wednesday";
            } else if (res == 4) {
                cout << "It was Thursday";
            } else if (res == 5) {
                cout << "It was Friday";
            } else if (res == 6) {
                cout << "It was Saturday";
            }*/