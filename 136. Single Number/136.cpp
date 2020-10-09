#include <stdio.h>
#include <vector>
using namespace std;

// ��� ���ҵ��� �ϳ��� �����ϰ�� �� ���� �̷�� ����
class Solution {
public:
	int singleNumber(vector<int>& nums) {
		int res = nums[0];

		for (int i = 1; i < nums.size(); i++)
		{
			res ^= nums[i];
		}
		// ��� ������ XOR�ϸ�, XOR������ Ư¡�� ���� (a^b^b=a)
		// ���� �̷�� ���� �����ϰ� �ϳ��� ���� �ȴ�.

		return res;
	}
};

int main(void) {
	Solution sol = Solution();
	vector<int> nums = { 4,2,1,2,1 };

	int a = sol.singleNumber(nums);
	return 0;
}