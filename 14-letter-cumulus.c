#include<stdio.h>
#include<string.h>

int main()
{
	int T, count, i, len;
	char first_line[10001], second_line;

    scanf("%d", &T);
	while(T--)
    {
        scanf(" %[^\n]", first_line);
		scanf(" %c", &second_line);

        len = strlen(first_line);

        count = 0;

        char lower_case = '\0', upper_case = '\0';

        if(second_line >= 'A' && second_line <= 'Z'){
            lower_case = 'a' + second_line - 'A';

            for(i = 0; i < len; i++)
            {
                if ( (lower_case == first_line[i]) || (second_line == first_line[i]) )
                {
                    count++;
                }
            }
        }

        if(second_line >= 'a' && second_line <= 'z'){
            upper_case = 'A' + second_line - 'a';

            for(i = 0; i < len; i++)
            {
                if ( (second_line == first_line[i]) || (upper_case == first_line[i]) )
                {
                    count++;
                }
            }
        }

        if(count)
        {
            printf("Occurrence of '%c' in '%s' = %d\n", second_line, first_line, count);
        }
        else
        {
            printf("'%c' is not present\n", second_line);
        }
	}

	return 0;
}
