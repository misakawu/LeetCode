int* sortedSquares(int* nums, int numsSize, int* returnSize){
for(int i=0;i<numsSize;i++)
	nums[i]=nums[i]*nums[i];
for(i=0;i<numsSize;i++){
	if(nums[i]<nums[i+1]){
		tem=nums[i];
		nums[i]=nums[i+1];
		nums[i+1]=tem;
	}
}

return nums;
}
