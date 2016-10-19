#include "TestingSort.h"
#include <fstream>

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
    unsigned int startTime = clock();

    for(int i=0; i<size; i++){
        for(int j=0; j<size-i; j++){
            if((*vectorSource)[j]>(*vectorSource)[j+1]){
                (*vectorSource)[j] += (*vectorSource)[j+1];
                (*vectorSource)[j+1] = (*vectorSource)[j] - (*vectorSource)[j+1];
                (*vectorSource)[j] -= (*vectorSource)[j+1];
            }
        }
    }
    getRuntimeInterval(startTime, clock());
    cout << "for sorting with operator[]" << endl;

}

/**
 * Sort by at() method
 * @param vectorSource  pointer on vector
 */
void TestingSort::sortVectorWithAt(vector<int>* vectorSource){
    long size = (*vectorSource).size();
    unsigned int startTime = clock();

    for(int i=0; i<size; i++){
        for(int j=0; j<size-i-1; j++){
            if((*vectorSource).at(j)>(*vectorSource).at(j+1)){
                (*vectorSource).at(j) += (*vectorSource).at(j+1);
                (*vectorSource).at(j+1) = (*vectorSource).at(j) - (*vectorSource).at(j+1);
                (*vectorSource).at(j) -= (*vectorSource).at(j+1);
            }
        }
    }
    getRuntimeInterval(startTime, clock());
    cout << "for sorting with at()" << endl;
}

/**
 * Sorting by iterators
 * @param vectorSource
 */
void TestingSort::sortWithIterators(vector<int>* vectorSource){
    int temp = 0;
    unsigned int startTime = clock();

    for (vector<int>::iterator it1 = (*vectorSource).begin(); it1 < (*vectorSource).end(); it1++) {
        for (vector<int>::iterator it2 = it1; it2 < (*vectorSource).end(); it2++) {
            if (*it1 > *it2) {
                temp = *it1;
                *it1 = *it2;
                *it2 = temp;
            }
        }
    }

    getRuntimeInterval(startTime, clock());
    cout << "for sorting with iterators" << endl;
}

void TestingSort::getUserVector(vector<int> *vectorSource) {
    vector<int> tempArray;
    cout << "Enter numbers (use 0 to finish): \n";
    int number = -1;
    while (1) {
        cin >> number;
        tempArray.push_back(number);
        if (number == 0) {
            break;
        }
    }
    int lastNum = tempArray.back();
    for (vector<int>::iterator it1 = tempArray.begin(); it1 < tempArray.end();) {
        int curr = *it1;
        if (lastNum == 1) {
            if (curr % 2 == 0) {
                it1 = tempArray.erase(it1);
            }
            else {
                it1++;
            }
        } else if (lastNum == 2) {
            if (curr % 3 == 0) {
                for (int j = 0; j < 3; j++)
                    it1 = tempArray.insert(it1 + 1, 1);
            } else {
                it1++;
            }
        }
    }
    (*vectorSource) = tempArray;
    //TODO print vector
}

void TestingSort::readFromFile() {
    int i = 0;
    char fileString[1000];
    ifstream file("/home/eignatik/Clion/Algorithms/vector.txt");
    if (file.is_open()) {
        char ch;
        while (file.get(ch)) {
            fileString[i] = ch;
            i++;
        }
        file.close();
        vector<char> vector(fileString, fileString + i);
        cout << "Reading from file: " << endl;
        for (int j = 0; j < i; ++j)
            cout << vector[j];
    } else
        cout << "No such file!";
    cout << std::endl;
}

void TestingSort::getRuntimeInterval(int startTime, int endTime) {
    cout << "Sorting took [" << (float)(endTime-startTime)/CLOCKS_PER_SEC << " s] ";
}