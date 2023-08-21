#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>
/* TO USE WITH LINUX IN PLACE OF INTRIN.H
UNCOMMENT TO USE
*/
//#include <immintrin.h>
//#include <ammintrin.h>

void func1(){
    int x, y, z;

    y = 3;
    z = 4;
    x = y+z;
}

int func2(){
    int x, y, z;

    y = 3;
    z = 4;
    x = y+z;

    return x;
}

char func3(char param){
    char x, y, z;
    if(param = 'a'){
        y = 3;
        z = 4;
        x = y+z;
    }else{
        y = 5;
        z = 5;
        x = y+z;
    }
    if(x == 10){
        return 'a';
    }else{
        return 'b';
    }
}


void func4(float param){
    printf("\n The parameter is: %.2f", param);
}

short func5(){
    int temp_param;
    printf("\nValue to temp_param will be 15: ");
    temp_param = 15;

    return ((short)temp_param);

}

// Função para realizar um laço de repetição
void loopExample(int start, int end) {
    for (int i = start; i <= end; i++) {
        // Faz algo aqui, pode ser um cálculo qualquer
        char param_1 = 'b';
        short param_2;
        int param_3;
        float param_4 = 50.0;
        
        uint64_t begin, end;

        func1();
        param_3 = func2();
        param_1 = func3(param_1);
        func4(param_4);
        param_2 = func5();

    }
}

int main(){
    char param_1 = 'b';
    short param_2;
    int param_3;
    float param_4 = 50.0;
    
    uint64_t begin, end;

    func1();
    param_3 = func2();
    param_1 = func3(param_1);
    func4(param_4);
    param_2 = func5();

    clock_t start_time, end_time;
    // Medir tempo para loop de 0 a 100
    start_time = clock();
    loopExample(0, 100);
    end_time = clock();
    printf("Tempo para loop de 0 a 100: %f segundos\n", (double)(end_time - start_time) / CLOCKS_PER_SEC);

}