#include <stdio.h>

int getFileSize(FILE* fd){
    int _file_size = 0;
    if(fd == NULL){
        _file_size = -1;
    }
    else{
        while(getc(fd) != EOF)
            _file_size++;
    }
    fseek(fd, 0, SEEK_SET);
    return _file_size;
}
 

int main(int argc, char const *argv[])
{   
    FILE *file;
    file = fopen(argv[1], "rb+");
    
    if (file == NULL) {
        return 1;
    }
    int n = 0;

    for (int i = 0; i < getFileSize(file) / 2; i++) {
        fseek(file, i, SEEK_SET);
        int left = getc(file);
        
        fseek(file, -(i + 1) , SEEK_END);
        int right = getc(file);
        
        fseek(file, i, SEEK_SET);
        putc(right, file);
        fseek(file, -(i + 1), SEEK_END);
        putc(left, file);
    }
    
    fclose(file);
    
    return 0;
}
