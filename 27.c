int removeElement(int* nums,int numsiSize,int val){
int i=0,j=numsSize;
while(i<j){
	if(nums[i]==val){
		nums[i]=nums[j];
		j--;
	}else{
		i++;
	}
}
return left;
}
