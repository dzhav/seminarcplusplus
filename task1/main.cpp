#include <iostream>
#include "arithmetics.h"

void solve(int first_value, int second_value, int summa, int proizv){
    std::cout<<first_value<<" + "<<second_value<<" = "<<sum(first_value, second_value);
    if (sum(first_value, second_value) != summa){
        std::cout<<" false\n";
    }
    else{
        std::cout<<" true\n";
    }
    std::cout<<first_value<<" * "<<second_value<<" = "<<mul(first_value, second_value);
    if (mul(first_value, second_value) != proizv){
        std::cout<<" false\n";
    }
    else{
        std::cout<<" true\n";
    }
    std::cout<<"\n";
}

int main() {
    int test_first_value = 1;
    int test_second_value = 1;
    int test_summa = 1;
    int test_proizv = 1;
    solve(test_first_value, test_second_value, test_summa, test_proizv);
    test_first_value = 3;
    test_second_value = 4;
    test_summa = 7;
    test_proizv = 12;
    solve(test_first_value, test_second_value, test_summa, test_proizv);
    test_first_value = 3;
    test_second_value = 5;
    test_summa = 7;
    test_proizv = 12;
    solve(test_first_value, test_second_value, test_summa, test_proizv);

}
