// converts a farenheight temperatur to celcius or vice versa


#include<stdio.h>


int main(void){


    int x;
    float temp_in, temp_conv;

    printf("This program converts F to C, or C to F temperatures,\n");
    printf("Enter a 1. to conver Cel to Far, or enter a 2 to convert Far to Cel\n\n");
    scanf("%d",&x);


    switch(x)
    {
        case 1:
        printf("Enter the Celcius Temp\n");
        scanf("%f",&temp_in);
        temp_conv = ((9*temp_in)/5)+32;
        printf("The temp in Farenhgiht is %f\n",temp_conv);
        break;
        
        case 2:
        printf("Enter the Farenheight Temp\n");
        scanf("%f",&temp_in);
        temp_conv = 5*(temp_in-32)/9;
        printf("The temp in Celcius is %f\n",temp_conv);
        break;
    }

    return(0);
}