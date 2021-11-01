bool checkIfExist(int* arr, int arrSize){
int i,j;
for(i=0;i<arrSize;i++){
	for(j=0.;j<arrSzie;i++){
		if(j==i)
			continue;
		else if(arr[i]==2*arr[j]){
			return true;
		}
	}
}
return false;
}
