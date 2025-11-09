/**
 * 征税问题： 
 * 1000以下税率为3%
 * 1000~2000税率为4%
 * 2000~3000税率为5%
 * 3000以上税率6%输入收入，求应缴税款。
 */

int main(int argc, char const *argv[]) {
    float x,rate;
    scanf("%f",&x);
    if(x<1000)
        rate=.03;
    else if(x<2000)
        rate=.04;
    else if(x<3000)
        rate=.05;
    else
        rate=.06;
    printf("%f",x*rate);

    return 0;
}
