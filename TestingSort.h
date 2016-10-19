#include <vector>
#include <iostream>

using namespace std;

class TestingSort {
public:
    void getRuntimeInterval(int start, int end);
    void printVector(vector<int>* vectorSource);
    void printVector(vector<double>* vectorSource);
    void addRandomValuesToVector(vector<int>* vectorSource);
    void sortVector(vector<int>* vectorSource);
    void sortVector(vector<double>* vectorSource);
    void sortVectorWithAt(vector<int>* vectorSource);
    void sortWithIterators(vector<int>* vectorSource);
    void getUserVector(vector<int>* vectorSource);
    void readFromFile();
    void fillRandom(vector<double>* vectorSource);
};

