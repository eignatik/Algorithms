#include <vector>
#include <iostream>

using namespace std;

class TestingSort {
public:
    void getRuntimeInterval(int start, int end);
    void printVector(vector<int>* vectorSource);
    void addRandomValuesToVector(vector<int>* vectorSource);
    void sortVector(vector<int>* vectorSource);
    void sortVectorWithAt(vector<int>* vectorSource);
    void sortWithIterators(vector<int>* vectorSource);
    void getUserVector(vector<int>* vectorSource);
    void readFromFile();
};

