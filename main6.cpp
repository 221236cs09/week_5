//
//  main.cpp
//  week5_6
//
//  Created by Islombek Abdurahmonov on 11/10/22.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int num = -1, max=0;
    while(num != 0){
        cin >> num;
        cout <<"Number is "<<num<<endl;
        if(num>max){
            max=num;
        }
    }
    cout << "Maximum number is "<<max<<endl;
    
    return 0;
}
