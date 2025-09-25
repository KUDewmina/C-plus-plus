#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	stringstream ss(str);
    char ch;  
    int num;
    vector<int> arr ;
    while(ss>>num){
        arr.push_back(num);
        if(ss>>ch && ch!=','){
            break;
        }
    }
    return arr;  
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
