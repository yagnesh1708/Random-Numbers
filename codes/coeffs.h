double mean(char* str){

int c=0;
double x;
double sum=0.0;
FILE *fp;
fp=fopen(str,"r");
while((fscanf(fp,"%lf",&x)!=EOF))
{sum=sum+x;
   c=c+1;
}
fclose(fp);
sum=-sum/c-1;
return sum;
}

 double squaremean(char* str){

int c=0;
 double x;
 double sum=0.0;
FILE *fp;
fp=fopen(str,"r");
while((fscanf(fp,"%lf",&x)!=EOF))
{sum=sum+x*x;
   c=c+1;
}
fclose(fp);
sum=sum-1;
return sum;
}
void uniform(char *str,int len){
int i;
    FILE *fp;
    fp=fopen(str,"w");
    for(i=0;i<len;i++){
    fprintf(fp,"%lf\n",(double)rand()/RAND_MAX);}
     fclose(fp); 
}
void gaussian(char *str, int len)
{
int i,j;
double temp;
FILE *fp;

fp = fopen(str,"w");
//Generate numbers
for (i = 0; i < len; i++)
{
temp = 0;
for (j = 0; j < 12; j++)
{
temp += (double)rand()/RAND_MAX;
}
temp-=6;
fprintf(fp,"%lf\n",temp);
}
fclose(fp);

}
