#include <iostream>
#include<bitset>
using namespace std;
int countOne(int number){
    int count = 0;
    while (number > 0) {
        number = number & (number - 1);
        count++;
    }
    return count;
}
int XOR(int x, int y) {
    return (x | y) & (~x | ~y);
}
int main() {
    long testCase;
    cin >> testCase;
    for (int i = 0; i < testCase; i++) {
        int numA, numB, countA, countB;
        cin >> numA >> numB;
        countA = countOne(numA);
        countB = countOne(numB);
        if (countA > countB) {
            cout<<"-1"<<endl;
            return -1;
        }
        else if (countA <= countB) {
            int finalNumber = XOR(numA, numB);
            cout << (countOne(finalNumber) - countA) << endl;
        }
    }
    return 0;
}
