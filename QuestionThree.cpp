#include<iostream>
#include<string>

using namespace std;

int main(){
    string arr[] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};

    int SizeOfArr = sizeof(arr[0]);

    for(int i = 0; i < SizeOfArr; i++){
        if(!arr[i].empty() && arr[i][0]=='B'){
            std::cout << arr[i] << "\n";
        }
    }

    return 0;
}