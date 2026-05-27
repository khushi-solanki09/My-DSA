#include <iostream>
using namespace std;
void pattern0(int n){
    for(int i = n; i>=0; i--) {
        
        for(int j = 0; j<i; j++) cout<<"*";
        cout << endl;
    }
}
void pattern1(int n) {
     for(int i = 0; i<=n; i++) {
        
        for(int j = 0; j<i; j++) cout<<"*";
        cout << endl;
    }
}
void pattern2(int n) {
    int cnt = 1;
     for(int i = 0; i<n; i++) {
         if(i%2 == 0) cnt = 1;
            else cnt = 0;
        for(int j = 0; j<=i; j++) {
            cout<<cnt;
            cnt = 1 - cnt;
        }
        cout << endl;
    }
}
void pattern3(int n) {
     for(int i = 0; i<=n; i++) {
        for(int j = 1; j<=i; j++) cout<<j;
        for(int j = 0; j < )
    
        cout << endl;
    }
}
void pattern4(int n) {
     for(int i = 0; i<n; i++) {
        
        for(int j = 0; j<n-i-1; j++) cout<<" ";
        for(int j = 0; j<2*i+1; j++) cout<<"*";
        for(int j = 0; j<n-i-1; j++) cout<<" ";
        cout << endl;
    }
}
void pattern5(int n) {
    for(int  i = 1; i<=n; i++) {
        for(int j = 1; j<=i; j++) cout<<j;
        for(int j = 1; j <= 2*n - 2*i; j++) {
            cout<<" ";
        }
        for(int j = 1; j <= i; j++) {
            cout<<i+1-j;
        }
        cout <<  endl;
    }
}
void pattern6(int n) {
    int c = 1;
    for(int  i = 1; i<=n; i++) {
        for(int j = 1; j<=i; j++) {
            cout<<c << " ";
            c++;
        }
        cout<<endl;
    }
}
void pattern7 (int n ) {
    for(int i = 0; i<=n; i++) {
        for(int j = 1; j<=i; j++) cout<< char('A' + j - 1);
        cout<<endl;
    }
}
void pattern8 (int n ) {
    for(int i = n; i>=0; i--) {
        for(int j = 1; j<=i; j++) cout<< char('A' + j - 1);
        cout<<endl;
    }
}
void pattern9(int n ) {
    for(int i = 0; i<=n; i++) {
        for(int j = 1; j<=i; j++) cout<< char('A' + i - 1);
        cout<<endl;
    }
}
void pattern10(int n ) {
    for(int i = 0; i<=n; i++) {
        for(int j = 1; j<=i; j++) cout<< char('A' + j - 1);
        cout<<endl;
    }
}
void pattern11(int n) {
    for(int i = 0; i<n; i++) {
        int mid = (2*i+1) / 2;
        char ch = 'A';
        for(int j = 0; j<n-i-1; j++) cout<<" ";
        for(int j = 1; j<=2*i+1; j++) {
            cout<<ch;
            if(j <= mid)
            {
                ch++;
            }
            else {
                ch--;
            }
            
        }
        for(int j = 0; j<n-i-1; j++) cout<<" ";
        cout << endl;
    }
}
void pattern12(int n) {
    for(int i = 0; i<=n; i++) {
        int ch = 'A' + n - i;
        for(int j = 1; j<=i; j++){
            cout<< char(ch);
            ch++;
        }
        cout<<endl;
    }
}
void pattern13(int n) {
    for(int  i = n; i>=1; i--) {
        for(int j = 0; j<i; j++){
            cout<<"*";
        }
        for(int j = 0; j<2*n - 2*i; j++){
            cout<<" ";
        }
        for(int j = 0; j<i; j++) {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int  i = 1; i<=n; i++) {
        for(int j = 0; j<i; j++){
            cout<<"*";
        }
        for(int j = 0; j<2*n - 2*i; j++){
            cout<<" ";
        }
        for(int j = 0; j<i; j++) {
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern14(int n) {
     for(int  i = 1; i<n; i++) {
        for(int j = 0; j<i; j++){
            cout<<"*";
        }
        for(int j = 0; j<2*n - 2*i; j++){
            cout<<" ";
        }
        for(int j = 0; j<i; j++) {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int  i = n; i>=1; i--) {
        for(int j = 0; j<i; j++){
            cout<<"*";
        }
        for(int j = 0; j<2*n - 2*i; j++){
            cout<<" ";
        }
        for(int j = 0; j<i; j++) {
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern15(int n){
    for(int i = 0; i<n; i++)
        {
            for(int j = 0; j<n; j++) {
                if (i == 0 || i == n-1 || j == 0 || j == n-1)    
                cout<<"*";
                else cout<<" ";
            }
            cout<<endl;
        }
    }
void pattern16(int n) {
    int size = 2 * n - 1;

    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            int top = i;
            int left = j;
            int bottom = size - 1 - i;
            int right = size - 1 - j;

            int minDist = min(min(top, bottom), min(left, right));

            cout << n - minDist << " ";
        }
        cout << endl;
    }
}
int main()
{
    pattern16(3);

    return 0;
}
