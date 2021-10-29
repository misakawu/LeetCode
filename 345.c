char * reverseVowels(char * s){
int a=strlen[s];
int i=0,j=a-1;
while(i<j){
	if(vowel(s[i])&&vowel(s[j])){
		tem=s[i];s[i]=s[j];s[j]=tem;
	}
	i++;j--;
}
return s;
}

int vowel(char c){
return c == 'a' || c == 'A'
                || c == 'e' || c == 'E'
                || c == 'i' || c == 'I'
                || c == 'o' || c == 'O'
                || c == 'u' || c == 'U';
}
