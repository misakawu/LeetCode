int majorityElement(int* nums, int numsSize){
int i;
for(i=0;i<numsSize-1;i++){
	for(j=1;j<numsSize-1-i;j++){
		
		if(nums[j]>nums[j+1]){
			tem=nums[j];
			nums[j]=nums[j+1];
			nums[j+1]=tem;
		}
	}
}

return nums[numsSize/2];

}
