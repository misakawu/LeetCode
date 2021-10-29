void moveZeroes(int* nums, int numsSize){
int i,a;
for(i=0;i<numsSize;i++){
	if(nums[i]==0){
		a=numbs[i];
		nums[i]=nums[i+1];
		number[i+1]=a;
	}
}
return nums
}
