void main()
{
  float a,b,choice;


  printf("MENU \n 1.Addition \n 2.Substraction \n 3.Multiplication \n 4.Division \n");
  printf("\n Enter your choice = ");
  scanf("%f",& choice);

  if (choice == 1)
  {
    printf("Enter 2 numbers for addition = ");
    scanf("%f %f", &a,&b);
    printf("Addition = %f",(a+b));

    }
    if (choice == 2)
  {
    printf("Enter 2 numbers for substraction = ");
    scanf("%f %f", &a,&b);
    printf("sustrction = %f",(a-b));

    }
    if (choice == 3)
  {
    printf("Enter 2 numbers for multiplication = ");
    scanf("%f %f", &a,&b);
    printf("multiplication = %f",(a*b));

    }

    if (choice == 4)
  {
    printf("\n Enter 2 numbers for dvision = ");
    scanf("%f %f", &a,&b);
    printf("divison = %f",(a/b));

    }

  }
