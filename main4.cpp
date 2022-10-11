//
//  main.cpp
//  week5_4
//
//  Created by Islombek Abdurahmonov on 11/10/22.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int flag=0;
    int n;
    cout << "Enter number: ";
    cin >> n;
    
    for(int i=2; i<n; i++){
        if(n%i==0){
            flag++;
        }
    }
    if(flag>0){
        cout<<"Not prime\n";
    }else{
        cout<<"Prime\n";
    }
    
    return 0;
}
