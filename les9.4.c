#include <stdio.h>
#include <string.h>

const int line_width = 1024;

int main(void)
{
char * input_fn = "input.txt";
char * output_fn = "output.txt";
char line[line_width];
char result[line_width];
FILE *fp;

int len, max_len = 0;
    fp = fopen(input_fn, "r");
    while (fscanf(fp, "%s", line) == 1)
    {
        len = strlen(line);
        if (len > max_len)
        {
            max_len = len;
            strcpy(result, line);
        }
    }
    fclose(fp);
    
    fp = fopen(output_fn, "w");
    fprintf(fp, "%s", result);
    fclose(fp);
    return 0;
}
