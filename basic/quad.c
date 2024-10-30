#include <stdio.h>
#include <math.h>  
void main()
 {
    float a, b, c, discriminant, root1, root2, realPart, imaginaryPart;

    printf("Enter coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);
    
    discriminant = b * b - 4 * a * c; 
    for(int i = 0; i < 1;i=i+1) {
        if (discriminant > 0)
         {
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("Root 1 = %5.2f\n", root1);
            printf("Root 2 = %5.2f\n", root2);
        }
        else if (discriminant == 0) {
            // One real root
            root1 = -b / (2 * a);
            printf("Root = %5.2f\n", root1);
        }
        else {
            realPart = -b / (2 * a);
            imaginaryPart = sqrt(-discriminant) / (2 * a);
            printf("Root 1 = %.2f + %.2fi\n", realPart, imaginaryPart);
            printf("Root 2 = %.2f - %.2fi\n", realPart, imaginaryPart);
        }
    }
}
