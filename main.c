#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PLANKS 6.63e-34
#define LIGHT 3e8

int main(){
    double frequency;
    double energy;
    int option;
    int optionEnergy;

    printf("Choose an option:\n");
    printf("\n1 - Calculate Energy");
    printf("\n2 - Propagation Speed");
    printf("\n0 - Exit\n");
    printf("> ");
    scanf("%d", &option);
    do
    {   
            switch(option){
                case 1: 
                    energy = 0;
                    frequency = 0;
                    //wavelength = 0;

                    printf("What did you want calculate (Energy)\n");
                    printf("\n1 - Energy (require Hz)");
                    printf("\n2 - Frequency (require Energy)");
                    printf("\n0 - Exit");
                    printf("> ");
                    scanf("%d", &optionEnergy);
                    do{
                      switch(optionEnergy){
                        case 1:
                            printf("Input a Hz value: \n");
                            scanf("%lf", &frequency);
                            energy = PLANKS * frequency;
                            printf("resultado %e", energy);
                            break;
                        }

                        case 2:
                            frequency = 0;
                            printf("Input a Energy value: \n");
                            scanf("%lf", &energy);
                            frequency = energy/PLANKS;
                            printf("resultado %e", frequency);
                            break;  
                    }while(optionEnergy != 0);
                    

                break;                            
            }
    } while (option != 0);
    
 
}
