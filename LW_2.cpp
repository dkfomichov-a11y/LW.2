#include <iostream>
#include <cmath>// підключення бібліотеки математичних функцій
using namespace std;
int main()
{
    // integer 8, Дано двозначне число.
    // Вивести число, отримане при перестановці цифр вихідного числа.
    cout << "integer 8"<< endl;
    int n;

    // введення двозначного числа
    cout << "Enter a double digit number: ";
    cin >> n;

    // Отримуємо десятки та одиниці
    int tens = n / 10;
    int units = n % 10;

    // Формуємо число з переставленими цифрами
    int result = units * 10 + tens;

    // Виведення результату
    cout << "Number after swapping digits: " << result << endl;


    // boolean 41, Дано точку з координатами (x, y).
    // Перевірити істинність висловлювання: «Точка з координатами (x, y) належить відрізку [0; a] на осі Ox».
    cout <<"\n boolean 41 \n";
    double x, y, a;

    // Введення координат точки та кінця відрізка
    cout << "Enter coordinate x: ";
    cin >> x;
    cout << "Enter coordinate y: ";
    cin >> y;
    cout << "Enter the end of the segment a: ";
    cin >> a;

    // Перевірка умови
    bool result1 = (y == 0) && (x >= 0) && (x <= a);

    // Виведення результату
    if (result1) {
        cout << "True: the point belongs to the segment [0; a] on the Ox axis." << endl;
    } else {
        cout << "False: the point does not belong to this segment." << endl;
    }


    // Math 18
    cout << "\n Math 18 \n";
    double x1;
    // Введення координати x
    cout << "enter coordinate x: ";
    cin >> x1;

    // Переведення 33 градусів у радіани
    double angle_33_rad = 33.0 * M_PI / 180.0;

    // Обчислення чисельника
    double term_under_root = 2 * x1 - cos(x1 + angle_33_rad) - 25;
    double numerator = exp(x1 + 1) * sqrt(abs(term_under_root));

    // Обчислення знаменника
    // log_5(A) обчислюється як ln(A) / ln(5)
    double log_base_5 = log(abs(pow(x1, 3))) / log(5.0);
    double denominator = cbrt(sin(x1 * x1)) * log_base_5;

    // Перевірка на ділення на нуль
    if (denominator == 0) {
        cout << "Error: denominator equals zero!" << endl;
    } else {
        double y = numerator / denominator;
        cout << "Result: y = " << y << endl;
    }
    return 0;
}