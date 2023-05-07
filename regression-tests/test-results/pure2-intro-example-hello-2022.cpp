
#define CPP2_USE_MODULES         Yes

//=== Cpp2 type declarations ====================================================


#include "cpp2util.h"



//=== Cpp2 type definitions and function declarations ===========================

#line 1 "pure2-intro-example-hello-2022.cpp2"
[[nodiscard]] auto main() -> int;
    

#line 12 "pure2-intro-example-hello-2022.cpp2"
[[nodiscard]] auto decorate(auto& thing) -> int;
    

#line 17 "pure2-intro-example-hello-2022.cpp2"
auto println(auto const& x, auto const& len) -> void;
    

//=== Cpp2 function definitions =================================================

#line 1 "pure2-intro-example-hello-2022.cpp2"
[[nodiscard]] auto main() -> int{
    std::vector<std::string> vec {
            "hello", "2022"}; 
    std::span view {vec}; 

    { auto&& cpp2_range = view; for ( auto& str : cpp2_range ) {
        auto len {decorate(str)}; 
        println(str, len);
    }}
#line 10 "pure2-intro-example-hello-2022.cpp2"
}

[[nodiscard]] auto decorate(auto& thing) -> int{
    thing = "[" + thing + "]";
    return CPP2_UFCS_0(ssize, thing); 
}

auto println(auto const& x, auto const& len) -> void { 
    std::cout 
        << ">> " << x 
        << " - length " 
        << len << "\n"; }

