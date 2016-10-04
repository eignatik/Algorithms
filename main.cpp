#include <iostream>
#include <ctime>
#include "TestingSort.h"

using namespace std;

void printVector(vector<int>* vectorSource);
void addRandomValuesToVector(vector<int>* vectorSource);
void sortVector(vector<int>* vectorSource);
void sortVectorWithAt(vector<int>* vectorSource);


int main() {
    unsigned int startTime;
    unsigned int endTime;
    vector<int> vectorOfInt(10000);
    vector<int> vectorOfIntExperiment(10000);

    addRandomValuesToVector(&vectorOfInt);
    addRandomValuesToVector(&vectorOfIntExperiment);

    // checked block with sorting by []
    startTime = clock();
    sortVector(&vectorOfInt);
    endTime = clock();

    cout << "time to sort with operator[]: " << (float)(endTime-startTime)/CLOCKS_PER_SEC << " s" << endl;

    //checked block2
    startTime = clock();
    sortVectorWithAt(&vectorOfIntExperiment);
    endTime = clock();

    cout << "time to sort with at(): " << (float)(endTime-startTime)/CLOCKS_PER_SEC << " s" << endl;

    return 0;
}

/**
 * print vector to console
 * @param vectorSource pointer on vector
 */
void printVector(vector<int>* vectorSource){
    long size = (*vectorSource).size();
    for(int i=0; i<size; i++){
        cout << (*vectorSource)[i] << ' ';
    }
    cout << "\n" << endl;
}

/**
 * Fill vector by random values
 * @param vectorSource pointer on vector
 */
void addRandomValuesToVector(vector<int>* vectorSource){
    long size = (*vectorSource).size();
    //TODO uncomment when program will be released
    srand(time(0));
    for(int i=0; i<size; i++){
        (*vectorSource)[i] = rand() % 10;
    }
}

/**
 * Sort vector by enhancment bubble sort
 * @param vectorSource pointer on vector
 */
void sortVector(vector<int>* vectorSource){
    long size = (*vectorSource).size();
    for(int i=0; i<size; i++){
        for(int j=0; j<size-i; j++){
            if((*vectorSource)[j]>(*vectorSource)[j+1]){
                (*vectorSource)[j] += (*vectorSource)[j+1];
                (*vectorSource)[j+1] = (*vectorSource)[j] - (*vectorSource)[j+1];
                (*vectorSource)[j] -= (*vectorSource)[j+1];
            }
        }
    }
}

/**
 * Sort by at() method
 * @param vectorSource  pointer on vector
 */
void sortVectorWithAt(vector<int>* vectorSource){
    long size = (*vectorSource).size();
    for(int i=0; i<size; i++){
        for(int j=0; j<size-i-1; j++){
            if((*vectorSource).at(j)>(*vectorSource).at(j+1)){
                (*vectorSource).at(j) += (*vectorSource).at(j+1);
                (*vectorSource).at(j+1) = (*vectorSource).at(j) - (*vectorSource).at(j+1);
                (*vectorSource).at(j) -= (*vectorSource).at(j+1);
            }
        }
    }
}