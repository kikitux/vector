#include <iostream>     // std::cout
#include <algorithm>    // std::sort
#include <vector>       // std::vector

using namespace std;

int main() {
    unsigned long size = 0;
    unsigned long maxsize = 0;
    vector<unsigned int> v={5,7,6,8,4,5,3,6,2,3,5,7,8,9,1,0,5,7,6,8,4,5,3,6,2,3,5,7,8,9,1,0};
    v.push_back(2);
    v.push_back(5);
    maxsize = v.size() ; // size v before remove duplicates
    sort(v.begin(), v.end()); // sort
    v.erase( unique( v.begin(), v.end() ), v.end() ); // remove duplicates
    size = v.size() ; // size v
    cout << "i" << "\t\t" << "v" << "\n"; // header
    if (v[0] == 0 ){ // delete first member if 0
        v.erase(v.begin());
    }
    for (unsigned int i = 0; i < v.size(); ++i) {
        cout << i << "\t\t" << v[i] << "\n";
    }
    if (v.size() > 1){ // if vector.size greater than 1, print values
        cout << "\n";
        cout << "Smaller\tvalue is\t" << v[0] << "\n";
        cout << "Bigger\tvalue is\t" << v[v.size()-1] << "\n";
    }
    if (size != maxsize){
        cout << "\n";
        cout << size << " elements in total\n" ;
        cout << maxsize - size << " elements were duplicated\n" ;
    }
}