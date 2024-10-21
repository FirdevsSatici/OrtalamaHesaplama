#include <stdio.h>

int main(){


double physics1, calculus1, ics, at1, ink1, teng1, alg1, tde1;
  double ortalama;
  printf("Enter your Physics 1 grade:");
  scanf("%lf", &physics1);
  printf("Enter your Calculus 1 grade:");
  scanf("%lf", &calculus1);
  printf("Enter your Introduction to Computer Science grade:");
  scanf("%lf", &ics);
  printf("Enter your Arastirma Teknikleri grade:");
  scanf("%lf", &at1);
  printf("Enter your Ataturk Inkilaplari grade:");
  scanf("%lf", &ink1);
  printf("Enter your Technical English 1 grade:");
  scanf("%lf", &teng1);
  printf("Enter your Algorithms and Programming 1 grade:");
  scanf("%lf", &alg1);
  printf("Enter your Turk Dili 1 grade:");
  scanf("%lf", &tde1);
  ortalama =(physics1*4 + calculus1*5 + ics*4 + at1*3 + ink1*2 + teng1*2 + alg1*7 + tde1*2)/29;
  printf("Ortalamaniz: %.2f\n  ", ortalama);
  if (ortalama <= 48.66){
    printf("NOTUNUZ BASARI BARAJINI GECEMEMISTIR.");
 }else {
    printf("NOTUNUZ BASARI BARAJINI GECMISTIR.");
 }

 return 0;

}
