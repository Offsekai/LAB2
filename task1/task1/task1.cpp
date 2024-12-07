#include <iostream>
using namespace std; // Импорт пространства имен std (стандартной библиотеки C++).

int main() {
    float number; // Создание переменной number вещественного типа.
    cin >> number; // Ввод данных в переменную number.

    // Нижняя граница: округляем вниз и корректируем до ближайшего четного
    int lower = int(floor(number)) - abs(int(floor(number)) % 2);

    // Верхняя граница: округляем вверх и корректируем до ближайшего четного
    int upper = int(ceil(number)) + abs(int(ceil(number)) % 2);

    cout << "Number " << number << " is bounded from below by even number: " << lower << ", and bounded from above by even number: " << upper; // Вывод результата
    return 0;

    // 07.12.24 - new text 11111111111 KrysanovM
    // 07.12.24 - new text 11111111111 Chebotarenko
    //Changed main file by adding a commentary
    //aefijoihaefiohsaegihospegohspegohipgs
    //Another new comment from local repos


    // blablablabla 
}
