#include<stdio.h>
#pragma warning(disable:4996)
int main() {
   int a, b, c;
   int d = 0;
   char f = '1';
   scanf("%d%d%d", &a, &b, &c);
   if (a == 1) {
      char a[10] = "Pizza";
      d += 15000;
   }
   else {
      if (a == 2) {
         char a = "Burger";
         d += 5000;
      }
      else {
         if (a == 3) {
            char a = "Salad";
            d += 4500;
         }
         else {
            if (a == 4) {
               char a = "Ice cream";
               d += 800;
            }
            else {
               if (a == 5) {
                  char a = "Beverage";
                  d += 500;
               }
               else {
                  char a = "None";
               }
            }
         }
      }
   }
   if (b == 1) {
      char b = "Pizza";
      d += 15000;
   }
   else {
      if (b == 2) {
         char b = "Burger";
         d += 5000;
      }
      else {
         if (b == 3) {
            char b = "Salad";
            d += 4500;
         }
         else {
            if (b == 4) {
               char b = "Ice cream";
               d += 800;
            }
            else {
               if (b == 5) {
                  char b = "Beverage";
                  d += 500;
               }
               else {
                  char b = "None";
               }
            }
         }
      }
   }
   if (c == 1) {
      char c = "Pizza";
      d += 15000;
   }
   else {
      if (c == 2) {
         char c = "Burger";
         d += 5000;
      }
      else {
         if (c == 3) {
            char c = "Salad";
            d += 4500;
         }
         else {
            if (c == 4) {
               char c = "Ice cream";
               d += 800;
            }
            else {
               if (c == 5) {
                  char c = "Beverage";
                  d += 500;
               }
               else {
                  char c = "None";
               }
            }
         }
      }
   }
   printf("%s\n%s\n%s\nTotal:%dwon", &a, &b, &c, &d);
   return 0;
}