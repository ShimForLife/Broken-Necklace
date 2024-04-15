#include <iostream>
#include <string>
#include <vector>
using namespcae std;

int main(){  
     std::string str;
    int N, sum, loop_counter;
    std::vector<int> sums;
    std::cout << "تعداد حروف مجاز رشته رو وارد کنید: ";
    std::cin >> N;
    std::cout << "یک  رشته رندوم متشکل از r و b و w وارد کنید: ";
    std::cin >> str;
    while (loop_counter <= N){
        int start_count = 1, end_count = 1;
        char start_char = str.front(), end_char = str.back();

        for (int i = 1; i < str.length() && (str[i] == start_char || str[i] == 'w'); ++i){
            start_count++;}
        for (int i = str.length() - 2; i >= 0 && (str[i] == end_char || str[i] == 'w'); --i){
            end_count++;}
        sum = start_count + end_count;
        loop_counter++;
        sums.push_back(sum);
        str += str.front();
        str.erase(0, 1);
        }

    if (sums.size() == N){
        int max_result;
        std::cout << "بزرگترین عدد در وکتور: " << max_result = *std::max_element(sums.begin(), sums.end()) <<std::endl;
    }
    return 0;}
