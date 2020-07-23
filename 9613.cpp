#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

long getGcd(long a, long b)
{
    long maxOf = max(a, b);
    long minOf = min(a, b);

    while(min(maxOf, minOf) != 0)
    {
        long temp = maxOf % minOf;
        maxOf = minOf;
        minOf = temp;
    }

    return maxOf;
}

int main()
{
    int repeat;
    cin >> repeat;

    for(int i=0; i<repeat; i++)
    {
        int num;
        cin >> num;
        vector<long> nums;
        long ans = 0;

        for(int j=0; j<num; j++)
        {
            long temp;
            cin >> temp;
            nums.push_back(temp);
        }

        for(int j=0; j<num-1; j++)
        {
            for(int k=j+1; k<num; k++)
            {
                ans += getGcd(nums[j], nums[k]);
            }
        }
        cout << ans << endl;
        nums.clear();
    }

    return 0;
}
