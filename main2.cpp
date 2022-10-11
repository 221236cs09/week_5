//
//  main.cpp
//  week5_2
//
//  Created by Islombek Abdurahmonov on 11/10/22.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int sum = 0;
    int i, n;
    cout << "Enter i number: ";
    cin >> i;
    
    cout << "Enter n number: ";
    cin >> n;
    
    while(i <= n){
        cout << i << endl;
        sum += i;
        i++;
    }
    cout << "Sum: "<<sum<<endl;
    
    
//    for(int i=1; i<=10; i++){
//        cout<<i<<endl;
//        sum += i; //sum = sum + i;
//        cout << "s=" << sum << endl;
//    }
//    cout << "Sum="<<sum<<endl;
//    while(i<=10){
//        cout << i << endl;
//        sum += i;
//        i ++;
//    }
//    cout << sum <<endl;
    
    return 0;
}
