#include <iostream>
#include "AArray.h"

int main()
{
    AArray<std::string> myArr;


    myArr["long"] = "nguyen";
    myArr["ben"] = "yang";
    myArr["darren"] = "seifert";
    myArr["micheal"] = "jordan";
    myArr["kobe"] = "bryant";
    myArr["beck"] = "kim";
    myArr["luiz"] = "dupont";
    myArr["long"] = "nguyennnnn";

    myArr.remove("luiz");
    myArr.first();
    std::cout << myArr.keyvalue() << " " << myArr.datavalue() << std::endl;
    while (myArr.next())
    {
        std::cout << myArr.keyvalue() << " " << myArr.datavalue() << std::endl;
    }
}

