//
//  main.cpp
//  week5_1
//
//  Created by Islombek Abdurahmonov on 11/10/22.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int i = 1;
//    while(i <= 10){
//        cout << i << endl;
//        i++;
//    }
    do{
        cout << i++ << endl;
    }while(i<=10);
    cout<<i;
    
    return 0;
}
