#include <stdio.h>
#include <math.h>

void jednacina(double a, double b, double c);

main()
{
float n1;
float x;
float d;
float n;
float R;
float EQD;

printf("Unesi dozu po frakciji d :");
scanf("%f", &d);

printf("Unesi broj frakcija n :");
scanf("%f", &n);

printf("Unesi alpha/beta :");
scanf("%f", &R);

EQD = (d * n * (d + R)) / (2 + R);
printf("EQD je %.2f\n", EQD);

printf("Unesi preostali broj frakcija n1:");
scanf("%f", &n1);


double a,b,c;

a = n1;
b = n1 * R;
c = -EQD * (2 + R);


  // poruka korisniku
  printf("Kvadratna jednacina n1X^2 + n1RX - EQD(2+R) = 0\n");

void jednacina(double a, double b, double c);
{

  double x1, x2, diskriminanta;

  diskriminanta = b*b-4*a*c;

  if(diskriminanta<0)
  {
    // stampanje resenja
    printf("Ova kvadratna jednacina nema resenja u skupu realnih brojeva.");
  }

  else if(diskriminanta>0)
  {
    x1= (-b + sqrt(diskriminanta)) / (2.*a);

    x2= (-b- sqrt(diskriminanta)) / (2.*a);

    // stampanje resenja
    printf("Resenja ove kvadratne jednacine su: x1=%.2lf", x1);
  }
  else
  {
    // stampanje resenja
    printf("Resenje ove kvadratne jednacine je x = %lf.", -b/(2.*a));
  }
}
}
