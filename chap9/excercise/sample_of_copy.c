#include<stdio.h>
#include<stdlib.h>

int main(void){
    int ch;
    FILE *fp_input,*fp_output;
    
    if((fp_input=fopen("file.txt","rb"))==NULL){
        perror("File Opening Failed!");
        return EXIT_FAILURE;
    }
    fp_output=fopen("f.txt","wb");

    while(1){
        ch=fgetc(fp_input);
        if(ch==EOF){
            break;
        }
        fputc(ch,fp_output);
    }
    fclose(fp_output);
    fclose(fp_input);

    return 0;
}
