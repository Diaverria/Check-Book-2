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
}//Check;



ostream &operator<<(ostream &output, Check &obj)
{
    cout<<"Check Number: "<<CheckNum<<"Check Memo: "<<CheckMemo<<"Check Amount: "<<CheckAmount;
}





};



int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
