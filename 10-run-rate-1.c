#include<stdio.h>
#include<math.h>

int main()
{
    int T, r1, r2, B, ball_played;
    double current_rr, required_rr;


    scanf("%d", &T);

    while(T--){

        scanf("%d %d %d", &r1, &r2, &B);
        ball_played = 300 - B;
        
        current_rr = ((double)r2 / ball_played) * 6;
        required_rr = ((double)(r1 - r2 + 1) / B) * 6;

        printf("%0.2f %0.2f\n", current_rr, required_rr);

    }

    return 0;
}
