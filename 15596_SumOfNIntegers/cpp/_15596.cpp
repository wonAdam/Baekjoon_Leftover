#include <vector>
#include <iostream>

long long sum(std::vector<int> &a) {
	long long ans = 0;

    for(long long i = a.size(); i > 0; i--)
    {
        ans += a[i-1];
    }

	return ans;
}

int main()
{
    std::vector<int> a;
    a.push_back(5);
    a.push_back(2);
    a.push_back(3);
    a.push_back(3);
    a.push_back(2);


    long long ans = sum(a);

    std::cout << ans << std::endl;

    return 0;
}

