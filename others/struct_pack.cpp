#include <iostream>

struct T1
{
   char A;
   int B;
   char C;
};

#pragma pack(2)
struct T2
{
   char A;
   int B;
   char C;
};
#pragma pack()

#pragma pack(1)
struct T3
{
   char A;
   int B;
   char C;
};
#pragma pack()

#pragma pack(8)
struct T4
{
   char A;
   int B;
   char C;
};
#pragma pack()

int main() {
    std::cout << "T1 no pack size " << sizeof(T1) << std::endl;
    std::cout << "T2 pack 2 size " << sizeof(T2) << std::endl;
    std::cout << "T3 pack 1 size " << sizeof(T3) << std::endl;
    std::cout << "T4 pack 8 size " << sizeof(T4) << std::endl;
    return 0;
}
