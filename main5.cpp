//
//  main.cpp
//  week5_5
//
//  Created by Islombek Abdurahmonov on 11/10/22.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int i = 1;
    cout << "Enter the number: ";
    int n;
    cin >> n;
    int sum = 0;
    while(i <= n){
        cout << i << "*" <<i<<"="<<i*i<<endl;
        sum +=i*i;
        i++;
    }
    cout << sum<<endl;
    return 0;
}
