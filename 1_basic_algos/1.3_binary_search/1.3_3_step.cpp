/*
    Created by gerstudent

    Результат бинарного поиска
    В этой задаче вам даны ответы на запросы бинпоиска - массив, каждое значение которого совпадает
    с очередным a[mid] в реализации бинарного поиска из лекции. Вам требуется вывести результат,
    который получил такой бинарный поиск - позицию первой единицы. Обратите внимание - как и в предыдущей
    задаче, массив нумеруется с нуля.

    Входные данные
    В первой строке входных данных записано два целых числа n, m - размер массива и количество итераций
    бинарного поиска, которое произошло при запуске бинарного поиска на загаданном массиве.
    В следующей строке записано mm чисел, каждое из которых совпадает с 00 либо с 11 - значения a[mid] для
    очередных запросов в бинарном поиске. Гарантируется, что таким значениям соответствует корректный массив.

    Выходные данные
    Выведите одно число - позицию первой единицы в массиве. Если в массиве не оказалось единиц, выведите число n.

    Sample Input 1:
    10 4
    1 0 0 0

    Sample Output 1:
    4

    Sample Input 2:
    10 3
    1 1 1

    Sample Output 2:
    0

    Sample Input 3:
    10 4
    0 0 0 0

    Sample Output 3:
    10

*/

#include <iostream>
using namespace std;

int main() {
    int n, m, x, idx = 0;
    cin >> n >> m;
    int l = -1, r = n;
    while(idx < m && l + 1 < r) {
        cin >> x;
        int mid = (l + r) / 2;
        x == 0 ? l = mid : r = mid;
        idx++;
    }
    cout << r << '\n';
    return 0;
}