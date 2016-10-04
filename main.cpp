#include <iostream>
#include <ctime>
#include "TestingSort.h"

using namespace std;

unsigned int START_TIME;
unsigned int END_TIME;

void startTest(vector<int>* v1, vector<int>* v2);

int main() {

    vector<int> vectorOfInt(1000);
    vector<int> vectorOfIntExperiment(1000);

    startTest(&vectorOfInt, &vectorOfIntExperiment);


    return 0;
}

void startTest(vector<int>* v1, vector<int>* v2){
    TestingSort testingSort;

    testingSort.addRandomValuesToVector(&(*v1));
    testingSort.addRandomValuesToVector(&(*v2));

    // checked block with sorting by []
    START_TIME = clock();
    testingSort.sortVector(&(*v1));
    END_TIME = clock();

    cout << "time to sort with operator[]: " << (float)(END_TIME-START_TIME)/CLOCKS_PER_SEC << " s" << endl;

    //checked block2
    START_TIME = clock();
    testingSort.sortVectorWithAt(&(*v2));
    END_TIME = clock();

    cout << "time to sort with at(): " << (float)(END_TIME-START_TIME)/CLOCKS_PER_SEC << " s" << endl;
}