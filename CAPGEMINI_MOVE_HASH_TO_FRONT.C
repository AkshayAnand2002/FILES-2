/*
You have write a function that accepts, a string which length is “len”, the string has some “#”, in it you have to move all the hashes to the front of the string and return the whole string back and print it.

char* moveHash(char str[],int n);

example :-

Sample Test Case

Input:

Move#Hash#to#Front

Output:

###MoveHashtoFront
*/
#include <stdio.h>
#include<string.h>
char *moveHash(char str[],int n){
    char str1[100],str2[100];
    int i,j=0,k=0;
    for(i=0;str[i];i++){
        if(str[i]=='#'){
            str1[j++]=str[i];
            //#'s stored together.
        }
        else{
            str2[k++]=str[i];
            //other characters than # are stored in str2.
        }
    }
        strcat(str1,str2);
        //concatenating
        printf("%s",str1);
        //concatenated string called
}
int main()
{
    char a[100],len;
    scanf("%[^\n]s",a);
    len=strlen(a);
    moveHash(a,len);
    return 0;
}
