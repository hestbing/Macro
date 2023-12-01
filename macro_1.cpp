#include <iostream>
#include <vector>

#define MAX(a, b) ((a) > (b) ? (a) : (b))

#define SWAP(a, b) do { \
    auto temp = (a); \
    (a) = (b); \
    (b) = temp; \
} while(0)

#define DEBUG(x) std::cout << "Стрингификация: "<< #x << " = " << (x) << std::endl

#define BYPASS(item, container) \
    for (auto item = (container).begin(); item != (container).end(); ++item)

#define CONCATENATE(a, b) a ## b

#define VERSION 2


int main() 
{
   
    setlocale(LC_ALL, "ru");
    int x = 5, y = 10;
    std::cout << "Максимальный из х или у = " << MAX(x, y) << std::endl;

    SWAP(x, y);
    std::cout << "Поменяли местами x: " << x << " и y: " << y << std::endl;

    int a = 42;
    DEBUG(a);

    std::vector<int> numbers = { 1, 2, 3, 4, 5 };
    std::cout << "Обход по вектору: ";
    BYPASS(it, numbers) {
        std::cout <<  *it << " ";
    }
    std::cout << std::endl;

    std::cout << "Конкатенация двух чисел: " << CONCATENATE("11", "10") << std::endl;

    std::cout << "Файл: " << __FILE__ << std::endl;
    std::cout << "Строка: " << __LINE__ << std::endl;
    std::cout << "Функция: " << __FUNCTION__ << std::endl;

    #ifdef __cplusplus
    std::cout << "Версия стандарта C++: " << __cplusplus << std::endl;
    #endif

    #if VERSION == 1
    std::cout << "Версия 1." << std::endl;
    #elif VERSION == 2
    std::cout << "Версия 2." << std::endl;
    #else
    std::cout << "Версия неизвестна." << std::endl;
    #endif

    return 0;
}

