#include "TestingSort.h"

/**
 * print vector to console
 * @param vectorSource pointer on vector
 */
void TestingSort::printVector(vector<int>* vectorSource){
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
void TestingSort::addRandomValuesToVector(vector<int>* vectorSource){
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
void TestingSort::sortVector(vector<int>* vectorSource){
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
void TestingSort::sortVectorWithAt(vector<int>* vectorSource){
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