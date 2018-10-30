#include<stdio.h>
#include<math.h>

int arr[100];

void fill_zero(){

    int j;

    for(j = 0; j<100; j++){
        arr[j] = 0;
    }
}

void print_array(){

    int j;

    for(j = 0; j<100; j++){
        printf("%d ",arr[j]);
    }
    printf("\n");
}

void lcm(int n){

    int i;

    for(i = 2 ; ;)
    {
        if(n % i == 0)
        {
            n = n / i;
            arr[i]++;
        }
        else
        {
            i++;
            break;
        }
    }

    while( i <= n ){

        if(1 == is_prime(n))
        {
            arr[n]++;
            break;
        }

        if(n % i == 0)
        {
            n = n / i;
            arr[i]++;
        }
        else
        {
            i = i + 2;
        }
    }

}

int is_prime(int n)
{
	int k, root;

	if (n == 2){
		return 1;
	}

	if (n % 2 == 0){
		return 0;
	}

	root = sqrt(n);

	for(k = 3; k <= root; k = k + 2){

		if (n % k == 0){
			return 0;
		}
	}

	return 1;
}


int  main()
{
    int T, N;

    scanf("%d", &T);

    while(T--){

        scanf("%d", &N);

        // fill the arr with zeros
        fill_zero();

        while(N > 1){

            if(N == 2 || N == 3 || N == 5){
                arr[N]++;
            }
            else if(N == 4){
                arr[2]++;
            }
            else{
                // find out lcm of n do arr[lcm]++
                lcm(N);
            }

            N--;


        }

        // print array here
        //print_array();

	    if (arr[5] > arr[2]){
            printf("%d\n", arr[5]);
	    }
	    else{
            printf("%d\n", arr[5]);
	    }
    }

    return 0;
}
