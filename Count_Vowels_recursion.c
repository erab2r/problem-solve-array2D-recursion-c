#include <stdio.h>

int rec(char st[],int i) {
    if(st[i]=='\0'){
        return 0;
    }
    int count = rec(st,i+1);
    if(st[i]=='a' || st[i]=='e' || st[i]=='i' || st[i]=='o' || st[i]=='u'|| st[i]=='A' || st[i]=='E' || st[i]=='I' || st[i]=='O' || st[i]=='U' ){
            return count+1;
    }
    else{
        return count;

    }
    
  
}

int main() {
    char st[201];
    fgets(st, 201, stdin);
    int answer = rec(st,0);
    printf("%d",answer);
    return 0;
}
