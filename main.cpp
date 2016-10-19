/**
 * Exercise 1. Ignatik Evgeny 23504/21
 *
 * Напишите алгоритм сортировки (любой простейший) содержимого вектора целых чисел, используя оператор operator[].

Напишите алгоритм сортировки (любой простейший) содержимого вектора целых чисел, используя метод at().

Напишите алгоритм сортировки (любой простейший) содержимого вектора целых чисел, используя для доступа к содержимому вектора только итераторы. Для работы с итераторами допустимо использовать только операторы получения текущего элемента и перехода в следующему (подсказка, можно сохранять копию итератора указывающего на некоторый элемент).

Прочитайте во встроенный массив С содержимое текстового файлы, скопируйте данные в вектор одной строкой кода (без циклов и алгоритмов STL)

Напишите программу, сохраняющую в векторе числа, полученные из стандартного ввода (окончанием ввода является число 0). Удалите все элементы, которые делятся на 2 (не используете стандартные алгоритмы STL), если последнее число 1. Если последнее число 2, добавьте после каждого числа которое делится на 3 три единицы.

Напишите функцию void fillRandom(double* array, int size) заполняющую массив случайными значениями в интервале от -1.0 до 1.0. Заполните с помощью заданной функции вектора размером 5,10,25,50,100 и отсортируйте его содержимое (с помощью любого разработанного ранее алгоритма модифицированного для сортировки действительных чисел)

 TODO Standrat STL sorting (sort + testing)
 *
 */
#include <iostream>
#include "TestingSort.h"

using namespace std;

void startTest(int elemCount);

int main() {
    startTest(1000);
    return 0;
}

void startTest(int elemCount){
    vector<int> firstVector(elemCount);
    vector<int> secondVector(elemCount);
    vector<int> thirdVector(elemCount);
    vector<int> fourthVector(elemCount);
    vector<double> fivesVector(1000);

    TestingSort testingSort;

//    testingSort.addRandomValuesToVector(&firstVector);
//    testingSort.addRandomValuesToVector(&secondVector);
//    testingSort.addRandomValuesToVector(&thirdVector);

    /**
     * Three sorting methods
     */
//    testingSort.sortVector(&firstVector);
//    testingSort.sortVectorWithAt(&secondVector);
//    testingSort.sortWithIterators(&secondVector);

    /**
     * Get user entered vector
     */
//    testingSort.getUserVector(&fourthVector);
//    testingSort.printVector(&fourthVector);

    /**
     * Read from file method.
     */
//    testingSort.readFromFile();

    /**
     * Operating with double vector
     */
    testingSort.fillRandom(&fivesVector);
    testingSort.sortVector(&fivesVector);
    testingSort.printVector(&fivesVector);
}