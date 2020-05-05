#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void l_sort(char str[][10],int n)
{int i,j;
char k[10];
  for(i=0;i<n-1;i++)
  for(j=i+1;j<n;j++)
  { if(strcmp(str[i],str[j])>0)
  {
  	strcpy(k,str[i]);
  	strcpy(str[i],str[j]);
  	strcpy(str[j],k);
  }
  }
  for(i=0;i<n;i++)
  printf("\n%s",str[i]);
}
void lrev_sort(char str[][10],int n)
{int i,j;
char k[10];
  for(i=0;i<n-1;i++)
  for(j=i+1;j<n;j++)
  { if(strcmp(str[i],str[j])>0)
  {
  	strcpy(k,str[i]);
  	strcpy(str[i],str[j]);
  	strcpy(str[j],k);
  }
  }
  for(i=n-1;i>=0;i--)
  printf("\n%s",str[i]);
}
void length_sort(char str[][10],int n)
{int i,j;
char k[10];
  for(i=0;i<n-1;i++)
  for(j=i+1;j<n;j++)
  { if(strlen(str[i])>strlen(str[j]))
  {
  	strcpy(k,str[i]);
  	strcpy(str[i],str[j]);
  	strcpy(str[j],k);
  }
  else
     if(strlen(str[i])==strlen(str[j]))
    { 
    if(strcmp(str[i],str[j])>0)
  {
  	strcpy(k,str[i]);
  	strcpy(str[i],str[j]);
  	strcpy(str[j],k);
  	
  }
  }
  }
  for(i=0;i<n;i++)
  printf("\n%s",str[i]);
}
int distinct(char str[],int l)
{ 
int i,j,k,count,n;
n=l;
for(i=0;i<n;i++)
{count=0;
for(j=i+1;j<n;j++)
{
	if(str[i]==str[j])
	{ 
		for(k=0;k<i;k++)
		{ 
		  if(str[k]==str[i])
		  count=1;
		}
		if(count!=1)
		l--;
	}
}
}
return l;
}
d_sort(char str[][10],int n)
{ int i,j,f[n],k[10],l,x;
for(i=0;i<n;i++)
{ l=strlen(str[i]);
f[i]=distinct(str[i],l);
}
for(i=0;i<n-1;i++)
for(j=i+1;j<n;j++)
{if(f[i]>f[j])
{
	strcpy(k,str[i]);
  	strcpy(str[i],str[j]);
  	strcpy(str[j],k);
    x=f[i];
  	f[i]=f[j];
  	f[j]=x;
}
else 
if(f[i]==f[j])
{
	  if(strcmp(str[i],str[j])>0)
  {
  	strcpy(k,str[i]);
  	strcpy(str[i],str[j]);
  	strcpy(str[j],k);
  }
}
}
  for(i=0;i<n;i++)
  printf("\n%s",str[i]);
}
int main() {
 int i,n;
 scanf("%d",&n);
 char str[10][10];
for(i=0;i<n;i++)
scanf("%s",&str[i]);
printf("\nlexicographic sort:");
l_sort(str,n);
printf("\nlength sort:");
length_sort(str,n);
printf("\nlexicographic reverse sort:");
lrev_sort(str,n);
printf("\ndistinct sort:");
d_sort(str,n);
return 0;
}  

