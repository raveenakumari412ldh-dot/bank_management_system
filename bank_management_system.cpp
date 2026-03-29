#include <iostream>
using namespace std;

class Bank{
    private:
     int accno;
    string name;
    int bal;
    public:
    void getData(){
        cout<<"Enter account number: ";
        cin>>accno;
        cout<<"Enter your name: ";
        cin>>name;
        cout<<"Enter your intial balance: ";
        cin>>bal;
    }
    void display(){
        cout<<"Account number: "<<accno;
        cout<<endl;
        cout<<"name: " <<name;
        cout<<endl;
        cout<<"balance: "<<bal;
        cout<<endl;
    }
    int getAccountno(){
        return accno;
    }
    void deposit(){
        float amt;
        cout<<"Enter the amount you want to deposit:   ";
        cin>>amt;
        bal= bal+amt;
        cout<<"Amount deposited successfully";
    }
    void withdraw(){
        float amt;
        cout<<"Enter the amount you want to withdraw: ";
        cin>>amt;
        if(amt<=bal){
            bal=bal-amt;
            cout<<"Withdrawal successfully ";

        }
        else{cout<<"insufficient balnce";}


    }

};
int main(){
    Bank b[100];
    int count= 0,choice,acc;
    bool  found;
    
 do{
    cout<<"\n\n---Bank Management System---";
    cout<<"\n1. Create Account";
    cout<<"\n2. Deposit Money";
    cout<<"\n3. Withdraw Money";
    cout<<"\n4. Dispaly All";
    cout<<"\n5. Exit";
    cout<<"\n6. Enter choice";
    cin>>choice;
    switch(choice){
        case 1: b[count].getData();
        count++;
        break;
        case 2: cout<<"Enter Your Account Number: ";
        cin>>acc;
        found=false;
        for(int i=0; i<count; i++){
            if(b[i].getAccountno()== acc){
                b[i].deposit();
                found =true;

            }
            if(!found){
                cout<<"Account not found!";
            }
        } break;
        case 3: cout<<"Enter account no.: ";
        cin>>acc;
        found=false;
        for(int i=0; i<count; i++){
            if(b[i].getAccountno()==acc){
                b[i].withdraw();
                found=true;
            }
            if(!found){
                cout<<"Account not found";
                break;

            }

        }
        case 4: for(int i=0; i<count; i++){
            b[i].display();
        }
        break;
        case 5: cout<<"Thank you";
        break;
        default:cout<<"invalid choice";
        
        
    }


    
    
 }while(choice!=5);
 return 0;

}