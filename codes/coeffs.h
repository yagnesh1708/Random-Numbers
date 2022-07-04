



void uniform(char *str,int len){
int i;
    FILE *fp;
    fp=fopen(str,"w");
    for(i=0;i<len;i++){
    fprintf(fp,"%lf\n",(double)rand()/RAND_MAX);}
     fclose(fp); 
}
