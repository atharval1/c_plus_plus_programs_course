// https://www.geeksforgeeks.org/survival/

#include <iostream>
using namespace std;

int main()
{
// N – Maximum unit of food you can buy each day.
// S – Number of days you are required to survive.
// M – Unit of food required each day to survive

    int s,n,m;
    cin>>s>>n>>m;

    // how many sundays to calculate sunday becuase we have to find 
    // how many days we can shop food so s/7 to get sundays that we 
    // cant buy food on sunday
    int x=s/7;
    //so subtract sundays from s so y days we can shop food.
    int y = s-x;

    // how many unit of food required to survive s*m
    int sm = s*m;
    // how many days rquired to purchase food 
    int days = sm/n;
    // if we not get remainder zero mean one days extra should required to shop food
    if(sm % n != 0){
        days++;
    }

    // so we can buy food "days" so we have y days to purchess food
    // if days is less than y days so it is possible otherwise not possible
    if(days<=y){
        cout<<"Yes "<<days;
    }
    else{
        cout<<"No";
    }
    return 0;
}
