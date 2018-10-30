#include<stdio.h>
#include<string.h>
#include<math.h>

int count = 0;
int result = 1;



void make_word_arr(char str[], char word_arr[count][20])
{
    int i, len, is_word_started = 0, m = -1, n = -1;

    len = strlen(str);

    for (i = 0; i < len; i++){

        if(str[i] != ' '){

            if(is_word_started == 0){
                is_word_started = 1;
                m++; n++;
                word_arr[m][n] = str[i];
            }
            else{
                n++;
                word_arr[m][n] = str[i];
            }
        }
        else{
            n++;
            word_arr[m][n] = '\0';
            is_word_started = 0;
            n = -1;
        }

        if( i == len-1 ){
            n++;
            word_arr[m][n] = '\0';
        }
    }

}

int factorial(int n)
{
    int fact = 1;

    while(n > 0){
        fact *= n;
        n--;
    }

    return fact;
}

int count_word(char str[])
{
    int i, len, is_word_started = 0;

    len = strlen(str);

    for (i = 0; i < len; i++){

        if(str[i] != ' '){

            if(is_word_started == 0){
                is_word_started = 1;
                count++;
            }
        }
        else{
            is_word_started = 0;
        }
    }

    return count;
}

void update_result(int same)
{
    result = result / factorial(same);
}

void print_result(res)
{
    printf("1/%d\n", res);
}

int count_same(char word_arr[count][20])
{
    int i,j,same;

    char check_arr[count];

    for(i = 0; i < count; i++){
        check_arr[i] = 0;
    }

    for(i = 0; i < count; i++){

        same = 1;
        check_arr[i] = 1;

        for(j = 0; j < count; j++){

            if(check_arr[j] == 0){

                if( 0 == strcmp(word_arr[i], word_arr[j]) ){

                    same++;
                    check_arr[j] = 1;
                }
            }
        }

        //printf("same %d ", same);

        if(same > 1){
            update_result(same);
        }
    }

    return 0;

}

// no need
void print_word_arr(char word_arr[count][20])
{
    int i, j;

    for(i = 0; i < count; i++){
        printf("%s ", word_arr[i]);
    }

    printf("\n");

    /*for(i = 0; i < count; i++){

        for(j = 0; j < strlen(word_arr[i]); j++)

            printf("%c ", word_arr[i][j]);
    }*/
}

int main()
{
    int T, total_fact, i, j ;
    char str[200];

    scanf("%d", &T);
    while(T--){

        count = 0;
        result = 1;

        scanf(" %[^\n]", str);

        count = count_word(str);

        char word_arr[count][20];

        result = factorial(count);

        make_word_arr(str, word_arr);

        count_same(word_arr);

        //print_word_arr(word_arr);


        print_result(result);

    }

    return 0;
}
