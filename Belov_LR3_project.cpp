#include <iostream>
#include <cmath>
#include <string>

using namespace std;
// Функция для ввода положительного числа X
double EnterX() {
    double x;
    cout << "Введите положительное число X: ";
    cin >> x;
    while (x <= 0) {
        cout << "Число X должно быть положительным. Введите снова: ";
        cin >> x;
    }
    return x;
}

// Функция для ввода положительного числа Y
double EnterY() {
    double y;
    cout << "Введите положительное число Y: ";
    cin >> y;
    while (y <= 0) {
        cout << "Число Y должно быть положительным. Введите снова: ";
        cin >> y;
    }
    return y;
}

// Функция для вычисления среднего арифметического
double SrArf(double x, double y) {
    return (x + y) / 2.0;
}

// Функция для вычисления среднего геометрического
double GrGeo(double x, double y) {
    
}

int main() {
    int choice;
    double x = 0, y = 0, sr, gr; // Инициализируем x и y нулями

    do {
        cout << "Меню:" << endl;
        cout << "1. Ввести положительное число X" << endl;
        cout << "2. Ввести положительное число Y" << endl;
        cout << "3. Вычислить среднее арифметическое Sr = (X + Y) / 2" << endl;
        cout << "4. Вычислить среднее геометрическое Gr = Sqrt(X * Y)" << endl;
        cout << "0. Выход" << endl;
        cout << "Выберите действие: ";
        cin >> choice;

        switch (choice) {
            case 1:
                x = EnterX();
                break;
            case 2:
                y = EnterY();
                break;
            case 3:
                sr = SrArf(x, y);
                cout << "Среднее арифметическое: " << sr << endl;
                break;
            case 4:
                gr = GrGeo(x, y);
                cout << "Среднее геометрическое: " << gr << endl;
                break;
            case 0:
                cout << "Выход из программы." << endl;
                break;
            default:
                cout << "Неверный выбор. Попробуйте снова." << endl;
        }
        cout << endl;
    } while (choice != 0);

    return 0;
}