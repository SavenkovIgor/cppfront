

//=== Cpp2 type declarations ====================================================


#include "cpp2util.h"



//=== Cpp2 type definitions and function declarations ===========================

#include <vector>
#include <ranges>
#include <string>
#include <span>
#include <algorithm>
#include <iostream>

#line 8 "mixed-function-expression-and-std-ranges-for-each-with-capture.cpp2"
[[nodiscard]] auto main() -> int;
    

//=== Cpp2 function definitions =================================================


#line 8 "mixed-function-expression-and-std-ranges-for-each-with-capture.cpp2"
[[nodiscard]] auto main() -> int{
    std::vector<std::string> vec {
            "hello", "2022"}; 
    std::span view {vec}; 

    auto y {"\n"}; 
    std::ranges::for_each
        (view, [_0 = std::move(y)](auto const& x) -> void{std::cout << x << _0; });

    auto callback {[](auto& x) -> void { x += "-ish";  }}; 
    std::ranges::for_each(view, std::move(callback));

    { auto const& cpp2_range = view; for ( auto const& str : cpp2_range ) 
        std::cout << str << "\n";}
#line 22 "mixed-function-expression-and-std-ranges-for-each-with-capture.cpp2"
}

