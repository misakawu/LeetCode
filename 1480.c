int* runningSum(int* nums, int numsSize, int* returnSize){
int i;
for(i=1;i<numsSize;i++){
	nums[i]+=nums[i-1]
}
return nums
}
