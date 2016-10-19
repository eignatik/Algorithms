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

    TestingSort testingSort;

    testingSort.addRandomValuesToVector(&firstVector);
    testingSort.addRandomValuesToVector(&secondVector);
    testingSort.addRandomValuesToVector(&thirdVector);

    testingSort.sortVector(&firstVector);
    testingSort.sortVectorWithAt(&secondVector);
    testingSort.sortWithIterators(&secondVector);

}