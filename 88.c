void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
for(int i=m+n-1;i>=0;i--){
	for(int j=n-1;j>=0;j--){
	if(nums1[i]<nums2[j]){
		nums1[i]=nums[j];
	}
}
        for(j=m+n-1;j>=0;j--){
		if(nums1[i]<nums1[j]){
			nums1[i]=nums1[j];
		}
	}
}
