
bool isPalindrome(int x){
    char str[100];
    sprintf(str,"%d",x);
    char str1[100];
    int i;
    int len=strlen(str);
    for(i=0;str[i]!='\0';i++)
    {
        str1[i]=str[len-(i+1)];
    }
    str1[i]='\0';
    if(strcmp(str,str1)==0)
    {
        return true;
    }
    else{
        return false;
    }
    
}