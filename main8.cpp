//
//  main.cpp
//  week5_8
//
//  Created by Islombek Abdurahmonov on 11/10/22.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout <<"*";}
        cout<<endl;
    }
    return 0;
}
