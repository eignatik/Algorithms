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

    TestingSort testingSort;

    testingSort.addRandomValuesToVector(&firstVector);
    testingSort.addRandomValuesToVector(&secondVector);

    testingSort.sortVector(&firstVector);
    testingSort.sortVectorWithAt(&secondVector);
}