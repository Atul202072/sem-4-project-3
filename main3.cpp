# include <iostream>
using namespace std;

class Power                                          //creating power class
{
    public:
    int power(double m,int n=2)                      //function definition and setting default value of n =2
    {
        int i, ans=1;
        for(i=1;i<=n;i++)                            //calculation part 
       {
           ans=ans*m;
       }
        return ans;
    }
};

    int main()
    { 
        int result=0;
        Power pow;                                   // creating pow variable of power data-type
        result=pow.power(2,4);                       // function call by passing 2 parameters
        cout<<"The result of 2^4 is: "<<result;
        return 0;   
    }

