#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PLANKS 6.63e-34
#define LIGHT 3e8

int main(){
    double frequency;
    double energy;
    double wavelength;
    int option;
    int optionEnergy;
    int optionWaveLength;

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

                    printf("What did you want calculate (Energy)\n");
                    printf("\n1 - Energy (require Hz)");
                    printf("\n2 - Frequency (require Energy)");
                    printf("\n0 - Exit\n");
                    printf("> ");
                    scanf("%d", &optionEnergy);
                    do{
                      switch(optionEnergy){
                        case 1:
                            printf("Input a Hz value: \n");
                            scanf("%lf", &frequency);
                            energy = PLANKS * frequency;
                            printf("result: %e\n", energy);
                            printf("https://github.com/usrNippon");
                            exit(0);
                            break;
                        

                        case 2:
                            frequency = 0;
                            printf("Input a Energy value: \n");
                            scanf("%lf", &energy);
                            frequency = energy/PLANKS;
                            printf("result: %e\n", frequency);
                            printf("https://github.com/usrNippon");
                            exit(0);
                            break;
                        }

                    }while(optionEnergy != 0);
                    

                break;

                case 2:
                    energy = 0;
                    frequency = 0;
                    wavelength = 0;

                    printf("What did you want calculate (Propagation Speed)\n");
                    printf("\n1 - Wavelength (require Hz)");
                    printf("\n2 - Frequency (require wavelength)");
                    printf("\n0 - Exit\n");
                    printf("> ");
                    scanf("%d", &optionWaveLength);

                    do{
                      switch(optionWaveLength){
                        case 1:
                            printf("Input a Frequency value: \n");
                            scanf("%lf", &frequency);
                            wavelength = LIGHT/frequency;
                            printf("\nresult: %e\n", wavelength);
                            printf("https://github.com/usrNippon");
                            exit(0);
                            break;
                        

                        case 2:
                            wavelength = 0;
                            printf("Input a Wavelength value: \n");
                            scanf("%lf", &wavelength);
                            frequency = LIGHT/wavelength;
                            printf("\nresult: %e\n", frequency);
                            printf("https://github.com/usrNippon");
                            exit(0);
                            break;  
                        }

                    }while(optionWaveLength != 0);

                break;

                case 0:
                printf("leaving...");
                exit(0);
                break;

                default:
                printf("invalid option, try again please\n");
                break;

            }
    } while (option != 0);
    
 
}
