//
//  main.cpp
//  week5_3
//
//  Created by Islombek Abdurahmonov on 11/10/22.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    for(int i = 1; i <= 100; i++){
        if(i % 5 != 0){
            cout << i << endl;
        }else{
            cout << endl;
        }
    }
    return 0;
}
