void pay_amount (int dollars, int *twenties, int *tens, int *fives, int *ones)
{ 
    *twenties = dollars / 20;
    dollars = dollars % 20;
    *tens = dollars / 10;
    dollars = dollars % 10;
    *fives = dollars / 5;
    dollars = dollars % 5;
    *ones = dollars;
}
