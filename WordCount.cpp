#include <stdio.h>
#include <string.h>
int main(int argc, char **argv){
	FILE *f;
	f = fopen(argv[2],"r");
    char s[100];
    int num = 0,i=-1;	
	if(strcmp(argv[1], "-c")==0||strcmp(argv[1], "-C")==0){
		while(fgets(s,100,f)!=NULL){
			num = num+strlen(s);
		}printf("×Ö·ûÊý£º%d",num);
	}else if(strcmp(argv[1], "-w")==0||strcmp(argv[1], "-W")){
		while(fgets(s, 100, f) != NULL){
        	char* s1 = strtok(s, " ,");
    		while(s1){
    			s1 = strtok(NULL, " ,");
    			num++;
			}
			i++;
    	}printf("µ¥´ÊÊý£º%d",num-i);
	}
	fclose(f);
	return 0;
}
