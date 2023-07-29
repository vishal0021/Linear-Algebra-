#include<iostream>
#include<vector>



//compile using g++ --std=c++14 -o vect vectors_test.cpp

void display(std::vector<float> value)
{
     for(int i =0; i<value.size(); i++)
    {
        std::cout<<value[i]<<"\n";

    }

}

int main()
{

    std::vector<float>reps = {1.1,2.0,4.5};

    std::cout<<"Display elements from a function\n";
    display(reps);

    return 0;

}