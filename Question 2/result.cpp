#include "Headers/result.h"
#include <vector>

Result::Result()
{
    cout << "Start Result Constructor" << endl;
    this->multiplied_numbers.push_back(1); // initialize with one to generate new numbers, this later gets multiplied by 2,3 &5
}

Result::~Result()
{
    cout << "Result Destructured" << endl;
}

long int Result::result(int nums)
{

    for (int i = 1; this->final_result.size() < nums; i++)
    {

        this->temp_smallest_current_number = this->multiplied_numbers.back();
        this->multiplied_numbers.pop_back();

        // Find the smallest number in final result and check if it doesn't match with temp_smallest_current_number
        std::vector<long int>::iterator it = std::find(this->final_result.begin(), this->final_result.end(), this->temp_smallest_current_number);
        
        // if numbers do not match then run
        if (it == this->final_result.end())
        {
            this->final_result.push_back(this->temp_smallest_current_number);
            this->one = this->temp_smallest_current_number * 2;
            this->two = this->temp_smallest_current_number * 3;
            this->three = this->temp_smallest_current_number * 5;
            long int multiplier[4500] = {this->one, this->two, this->three};
            this->multiplied_numbers.insert(this->multiplied_numbers.end(), multiplier, multiplier + 3);
            sort(this->multiplied_numbers.begin(), this->multiplied_numbers.end(), greater<>());
        }
        
    }

    for (int j = 0; j < this->final_result.size(); j++)
    {
        cout << "[Final Result " << j + 1 << "] => " << this->final_result[j] << endl;
        // cout << "[Temp Smallest No " << j + 1 << "] => " << this->temp_smallest_current_number[j] << endl;
        // cout << "[Multiplied No " << j + 1 << "] => " << this->multiplied_numbers[j] << endl;
        // cout << endl << endl;
    }

    return 0;
}