#include <iostream>

using namespace std;

struct Check {
    int CheckNum;
    string CheckMemo;
    float CheckAmount;

    bool operator>(float const amount)
    {
        if (CheckAmount > amount)
            return true;
        else
            return false;

    }

    friend ostream &operator<<(ostream &output, Check &obj);
}



ostream &operator<<(ostream &output, Check &obj)
{
    cout<<"Check Number: "<<CheckNum<<"Check Memo: "<<CheckMemo<<"Check Amount: "<<CheckAmount;
}


class CheckBook {
    float balance;
    int lastDeposit, numOfChecks, checkBookSize;
    Check *chkptr;
    Check arra[5];
    const int N = 5;

    //
    float getBalance (){return balance;}
    float getLastDeposit(){return lastDeposit;}
    int getNumofChecks(){return numOfChecks;}
    int getCheckBookSize(){return checkBookSize;}



    void setBalance (){
        cout<<"Enter Balance: ";
        cin>>balance;
    }
    void setLastDeposit (){
        cout<<"Enter Last Deposit: ";
        cin>>lastDeposit;
    }
    void setNumofChecks(){
        cout<<"Enter # of Checks: ";
        cin>>numOfChecks;
    }
    void setCheckBookSize(){
        cout<<"Enter Check Book Size: ";
        cin>>checkBookSize;
    }




    CheckBook(){
        balance = 0;
        numOfChecks = 0;
        checkBookSize = 0;
    }

    CheckBook (float initBalance){
        balance = initBalance;
        numOfChecks = 0;
        checkBookSize = 2;
    }

    //Destructor
    ~CheckBook();

    //Copier
    void operator= (CheckBook obj){
        balance=obj.balance;
        lastDeposit=obj.lastDeposit;
        numOfChecks=obj.numOfChecks;
        checkBookSize=obj.checkBookSize;
        chkptr=obj.chkptr;
    }

    //overload =?


    void deposit(int deposit){
        balance += deposit;
    }

    void displayChecks(){
        for(int i = (numOfChecks - 1); i >= 0; i--)
            {
            cout<<"Check Number: "<<arra[i]<<endl;
            cout<<"Check Memo: "<<arra[i].CheckMemo<<endl;
            cout<<"Check Amount: "<<arra[i].CheckAmount<<endl;
            }



    bool writeCheck (float amount){
        if(amount <= balance){
            cout<<"Enter the memo: ";
            cin >> arr[numOfChecks].CheckMemo;
            arra[numOfChecks].CheckAmount = amount;
            arra[numOfChecks].CheckNum = (numOfChecks + 1);
            numOfChecks++;
            balance -= amount;
        }
        else
            return false;
        }


};

int main()
{
    Check c;
    c.CheckNum = 1;
    c.CheckMemo = "Business";
    c.CheckAmount = 1000;
    if (c > 150000)
        cout << "The Check Amount has reached past the limit of 150000"<<endl;
    else
        cout << "The Check Amount is within limit"<<endl;
    cout << c;
    return 0;
}

};
