#include <stdio.h>

int main(){
    double result, num;
    char operater;
    char choice;
    
    printf("===== Simle calculater =====\n\n\n\n");
    
    printf("Enter first number : ");
    scanf(" %lf", &result);
    
    while(1){
        printf("Enter operator (*, -, +, ) : /): ");
        scanf(" %c", &operater);
        
        printf("Enter second number : ");
        scanf(" %lf", &num);
        
        if(operater == '+'){
            result = result + num;
        }
        else if(operater == '-'){
            result = result - num;
        }
        else if(operater == '*'){
            result = result * num;
        }
        else if(operater == '/'){
            if(num != 0){
                result = result / num;
            }
            else{
                printf("Error : divison by zero!");
            }
        }
        else {
                printf("invalid operater");
            }
        printf("culant result = %.2lf\n", result);
        printf("Do you want to continue? (y = continue, n = get final answer: ");
        scanf(" %c", &choice);
        
        
        if (choice == 'n' || choice == 'N') {
            
        printf("\n==============================\n");
        printf("final  result = %.2lf\n", result);
        printf("==============================\n");
            break;
        }
        
    }
    return 0;
    
}
