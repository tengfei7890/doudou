#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <iterator>
#include <ifstream>
#include <map>

using namespace std;

class InvertedIndex{
private:
    map<string, map<string, int>> IIndex;
public:
    void readfiles(string filepath);
};

void InvertedIndex::readfiles(string fp){
    fstream fin;
    fin.open(fp);

}