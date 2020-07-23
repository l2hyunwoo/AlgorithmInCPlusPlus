#include <iostream>

using namespace std;

bool prime(const int& n)
{
    if(n < 2)
        return false;
    for(int i=2; i*i <= n; i++)
    {
        if(n % i == 0)
            return false;
    }
    return true;
}    

int main()
{
    int repeat;
    int ans = 0;
    
    cin >> repeat;
    
    for(int i=0; i < repeat; i++)
    {
        int num;
        cin >> num;
        if(prime(num))
            ans++;
    }
    
    cout << ans;
    
    return 0;
}
