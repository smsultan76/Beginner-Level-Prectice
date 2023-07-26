/* 
    Here is 21 type basic Pattern.
    This program made with switch case.
    This made by Sultanum Mobin.
    Facebook id  https://www.facebook.com/smsultan76 
*/

#include<iostream>
using namespace std;
int main(){
    int i, j,k, n, ch,count=1;
    string c;
    cout<<"Press 1:\n1\n2 2\n3 3 3 \nPress 2: Or Inverse Press 7: Or Character Press 6:\n1\n1 2\n1 2 3 \nPress 3:\n1\n2 3\n4 5 6\nPress 4: Or Character Press 5:\n1\n1 0\n1 0 1\n";
    cout<<"Press 8: Or alt Press 12:\n1\n1 2\n1 2 3 \n1 2\n1\nPress 9: Or alt Press 13: Or Inverse Press 14:\n  1\n 1 2\n1 2 3\nPress 10: Or Inverse Press 11:\n    1\n  1 2\n1 2 3\n";
    cout<<"Press 15: Rectengular Frame\nPress 16: Triangle-1 Flip Press 17\nPress 18: Triangle-2 Flip Press 19\nPress 20: X shape\nPress 21:Print any string in pattern.\n";
    while(true){
        cout<<"\nEnter choise:";
        cin>>ch;
        switch(ch){
        case 1:
            cout<<"How many Line?\n";
            cin>>n;
            for(i=1; i<=n; i++){
                for(j=1; j<=i; j++)cout<<i<<" ";
                cout<<endl;
            }break;
        case 2:
            cout<<"How many Line?\n";
            cin>>n;
            for(i=1; i<=n; i++){
                for(j=1; j<=i; j++)cout<<j<<" ";
                cout<<endl;
            }break;
        case 3:
            cout<<"How many Line?\n";
            cin>>n;
            for(i=1;i<=n;i++){
                for(j=1;j<=i;j++) cout<<count++<<" "; cout<<endl;
            }
        case 4:
            cout<<"How many Line?\n";
            cin>>n;
            for(i=1;i<n;i++){
                for(j=1;j<=i;j++)cout<<j%2<<" ";
                cout<<endl;
            }
            break;
        case 5:
            cout<<"How many Line?\n";
            cin>>n;
            for(i=0;i<n;i++){
                for(j=0;j<=i;j++){
                        if(j%2==0)cout<<"A ";
                        else cout<<"B ";
                }
                cout<<endl;
            }
            break;
        case 6:
            cout<<"How many Line?\n";
            cin>>n;
            for(i=0;i<n;i++){
                for(j=0;j<=i;j++){
                        cout<<static_cast<char>(j+65)<<" ";
                }cout<<endl;
            }break;
        case 7:
            cout<<"How many Line?\n";
            cin>>n;
            for(i=n; i>=1; i--){
                for(j=1; j<=i; j++)cout<<j<<" ";
                cout<<endl;
            }break;
        case 8:
            cout<<"How many Line?\n";
            cin>>n;
            for(i=1; i<=n; i++){
                for(j=1; j<=i; j++)cout<<j<<" ";
                cout<<endl;
            }
            for(i=n-1; i>=1; i--){
                for(j=1; j<=i; j++)cout<<j<<" ";
                cout<<endl;
            }break;
        case 9:
            cout<<"How many Line?\n";
            cin>>n;
            for(i=1;i<=n;i++){
                for(j=1;j<=n-i;j++)cout<<" ";
                for(j=1;j<=i;j++)cout<<j<<" ";
                cout<<endl;
            }break;
            case 10:
            cout<<"How many Line?\n";
            cin>>n;
            for(i=1;i<=n;i++){
                for(j=1;j<=n-i;j++)cout<<"  ";
                for(j=1;j<=i;j++)cout<<j<<" ";
                cout<<endl;
            }break;
            case 11:
            cout<<"How many Line?\n";
            cin>>n;
            for(i=n;i>=1;i--){
                for(j=1;j<=n-i;j++)cout<<"  ";
                for(j=1;j<=i;j++)cout<<j<<" "; cout<<endl;
            }break;
            case 12:
            cout<<"How many Line:\n";
            cin>>n;
            for(i=1;i<=n;i++){
                for(j=1;j<=n-i;j++)cout<<"  ";
                for(j=1;j<=i;j++)cout<<j<<" "; cout<<endl;
            }for(i=n-1;i>=1;i--){
                for(j=1;j<=n-i;j++)cout<<"  ";
                for(j=1;j<=i;j++)cout<<j<<" "; cout<<endl;
            }break;
            case 13:
            cout<<"How many Line?";
            cin>>n;
            for(i=1;i<=n;i+=2){
                for(j=1;j<=n-i;j++)cout<<" ";
                for(j=1;j<=i;j++)cout<<j<<" ";cout<<endl;
            }break;
            case 14:
            cout<<"How many Line?";
            cin>>n;
            for(i=n;i>=1;i--){
                for(j=1;j<=n-i;j++)cout<<" ";
                for(j=1;j<=i;j++)cout<<j<<" "; cout<<endl;
            }break;
            case 15:
            cout<<"How many Line?";
            cin>>n;
            for(i=1;i<=n;i++){
                for(j=1;j<=n;j++){
                    if(i==1||i==n||j==1||j==n) cout<<"* ";
                    else cout<<"  ";
                } cout<<endl;
            }break;
            case 16:
            cout<<"How many Line?";
            cin>>n;
            for(i=1;i<=n;i++){
                for(j=1;j<=n;j++){
                    if(i==n||j==1||j==i) cout<<"* ";
                    else cout<<"  ";
                } cout<<endl;
            }break;
            case 17:
            cout<<"How many Line?";
            cin>>n;
            for(i=1;i<=n;i++){
                for(j=1;j<=n;j++){
                    if(i==1||j==n||i==j) cout<<"* ";
                    else cout<<"  ";
                } cout<<endl;
            }break;
            case 18:
            cout<<"How many Line?";
            cin>>n;
            for(i=1;i<=n;i++){
                for(j=1;j<=n;j++){
                    if(i==1||j==1||i+j==n+1) cout<<"* ";
                    else cout<<"  ";
                } cout<<endl;
            }break;
            case 19:
            cout<<"How many Line?";
            cin>>n;
            for(i=1;i<=n;i++){
                for(j=1;j<=n;j++){
                    if(i==n||j==n||i+j==n+1) cout<<"* ";
                    else cout<<"  ";
                } cout<<endl;
            }break;
            case 20:
            cout<<"How many Line?";
            cin>>n;
            for(i=1;i<=n;i++){
                for(j=1;j<=n;j++){
                    if(i==j||i+j==n+1) cout<<"* ";
                    else cout<<"  ";
                } cout<<endl;
            }break;
            case 21:
            cout<<"Enter character:";
            cin.ignore();
            getline(cin,c);
            cout<<"How many Line?\n";
            cin>>n;
            for(i=1;i<=n;i++){
                for(j=1;j<=i;j++)cout<<c<<" ";
                cout<<endl;
            }break;
            case 22:

        default:cout<<"Enter valid option:";
            }}}
