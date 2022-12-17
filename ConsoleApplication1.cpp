#include <iostream>

#include <locale>

namespace D_Month {
    enum month {
        Январь = 31,
        Февраль = 28,
        Март = 31,
        Апрель = 30,
        Май = 31,
        Июнь = 30,
        Июль = 31,
        Август = 31,
        Сентябрь = 30,
        Октябрь = 31,
        Ноябрь = 30,
        Декабрь = 31,
        Ноль = 0
    };
    void print_days(char* mon) {
        setlocale(LC_ALL, "Russian");
        const char* names[]{
          "January",
          "February",
          "Marth",
          "April",
          "May",
          "June",
          "July",
          "August",
          "September",
          "October",
          "November",
          "December"
        };
        month p;
        bool tr = true;
        for (int i = 0; i < 12; i++) {
            for (int j = 0; j < 3; j++) {
                if (mon[j] != names[i][j])
                    tr = false;
            }
            if (tr) {
                switch (i) {
                case 0:
                    p = Январь;
                    break;
                case 1:
                    p = Февраль;
                    break;
                case 2:
                    p = Март;
                    break;
                case 3:
                    p = Апрель;
                    break;
                case 4:
                    p = Май;
                    break;
                case 5:
                    p = Июнь;
                    break;
                case 6:
                    p = Июль;
                    break;
                case 7:
                    p = Август;
                    break;
                case 8:
                    p = Сентябрь;
                    break;
                case 9:
                    p = Октябрь;
                    break;
                case 10:
                    p = Ноябрь;
                    break;
                case 11:
                    p = Декабрь;
                    break;
                default:
                    p = Ноль;
                    break;
                }
            }
            tr = true;
        }
        std::cout << "Количество дней в этом месяце = " << p;
    }
}

using namespace D_Month;
using namespace std;

int main() {
    char* exp = new char[10];
    cin >> exp;
    print_days(exp);
    delete[] exp;
    return 0;
}