#include<iostream>
#include<cstdlib>
#include<ctime>
#include<iomanip>
using namespace std;
bool isSumGreater();
int rollDice()
{
	int n;
	n=rand() % 6;
	n=n+1;
	return n;
}

int main(){
	 bool flag2;
    srand(time(NULL));
    
    flag2=isSumGreater();
    cout<<flag2;

}
bool isSumGreater()
{
    int sum=0;
    int n1,n2;
      
    bool flag=true;
    n1=rollDice();
    cout<<n1<<endl;
    n2=rollDice();
    cout<<n2<<endl;
    sum=n1+n2;
    if(sum>7)
    {
        flag=true;
    }
    else
    {
           flag=false;
    }
    return flag;
}
