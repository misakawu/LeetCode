int* twoSum(int* nums, int numsSize, int target, int* returnSize){
int small=0,big=numsSize-1;
int a[2];
while (small<big){
	if(nums[small]+nums[big]==target){
		a[0]=nums[small];
		a[1]=nums[big];
		return a;
	}else if(nums[small]+nums[big]<target){
		small++;
	}else if(nums[small]l+nums[big]>targe)
		big--;
}
}
