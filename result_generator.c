int main ()
{
    float a,b,c,d,e,f,x;
    printf("Enter you marks of all 5 subject out of 100 ");
    printf("\nMaths : ");
    scanf("%f",&a);
    printf("Physics : ");
    scanf("%f",&b);
    printf("Chemistry : ");
    scanf("%f",&c);
    printf("English : ");
    scanf("%f",&d);
    printf("P.E : ");
    scanf("%f",&e);
     if (a>40)
        printf("\nPass in MAths");
    else
        printf("\nFail in Maths");
    if (b>40)
        printf("\nPass in Physics");
    else
        printf("\nFail in Physics") ;
    if (c>40)
        printf("\nPass in Chemistry");
    else
        printf("\nFail in Chemistry");
    if (d>40)
        printf("\nPass in English");
    else
        printf("\nFail in English");
    if (e>40)
        printf("\nPass in P.E");
    else
        printf("\nFail in P.E");


    f=a+b+c+d+e ;
    x=(f/5);
    printf("\n Your total marks is = %f",f );
    printf("\n Your total percentage = %f",x);
    if(x<=0)
        {
        printf("\n you given percent is in negative");
        }
    else if(x<=100)
        if (x>=90)
        {
        printf("\n Division A+");
        }
        else if(x>=80)
        {
        printf("\n Division A");
        }
        else if(x>=70)
        {
        printf("\n Division B");
        }
        else if(x>=60)
        {
        printf("\n Division C");
        }
        else if(x>=50)
        {
        printf("\n Division D");
        }
        else if(x<=40)
        {
        printf("\n Division F");
        }
        else
        {
        printf ("\n your given percent is not valid");
        }
    else
    {
        printf("\n your given percent is above 100");
    }

}
