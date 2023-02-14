#include<bits/stdc++.h>
using namespace std;

struct student {
    int age;
    string fname;
    string lname;
    char div;
    string batch;
    int roll_no;
}s[100];

int main (){
    int n;
    cout<<"Enter the number of Students : ";cin>>n;
    cout<<"\n-----------------Enter the details of the students-----------------\n ";
    for(int i=1;i<=n;i++){
        cout<<"Student"<<" "<<i<<":\n";
       ; cout<<"First name: ";cin>>s[i].fname; 
        cout<<"Last name: "; cin>>s[i].lname;
        cout<<"Age: ";       cin>>s[i].age;
        cout<<"Class: ";     cin>>s[i].batch; 
        cout<<"Division: ";  cin>>s[i].div;
        cout<<"Roll no.: ";  cin>>s[i].roll_no;
        cout<<"\n";
        
    }
    cout<<"Details have been stored."<<endl;
    cout<<"\n";
    while(true) {
    int x=0,ans=0;
    cout<<"Enter a Roll no. to see the student detail : "; cin>>x;
    for(int i=1;i<=n;i++){
        if(x==s[i].roll_no){
            ans=i;
            break;
        }else{
            ans=0;
        }
    }
    if(ans>0){
        cout<<"Name: "<<s[ans].fname<<" "<<s[ans].lname<<endl;
        cout<<"Age: "<<s[ans].age<<endl;
        cout<<"Class: "<<s[ans].batch<<endl; 
        cout<<"Division: "<<s[ans].div<<endl;
        cout<<"Roll no.: "<<s[ans].roll_no<<endl;
    }else {
        cout<<"Invalid Roll no."<<endl;
    }cout<<"\n";
    }
    return 0;
}
