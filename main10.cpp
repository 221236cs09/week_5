//
//  main.cpp
//  week5_10
//
//  Created by Islombek Abdurahmonov on 11/10/22.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    float sum = 0;
    int n, i=1;
    cout << "Enter number: ";
    cin >> n;
    
    while(i<=n){
        sum += 1/float(i);
        i++;
    }
    cout << "The sum is " <<sum<<endl;
//    for(int i=1; i <=n; i++){
//        sum += 1/float(i);
//        i++;
//    }
//    cout << "The sum is " <<sum<<endl;
    
    return 0;
}
