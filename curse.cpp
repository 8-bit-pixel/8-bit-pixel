/* This file is licensed under the zlib license (see LICENSE.txt)
 * This file should compile and run on the latest versions of GCC, LLVM Clang and MSVC.
 * For the best user experience, compile with the "-trigraphs" flag on GCC and Clang, or "/Zc:trigraphs" on MSVC
 */

#include <iostream>
#include <iso646.h>


template<typename Tea> requires requires(Tea t) { 1 + t; } 
[[noreturn]] const void * const curse (const Tea and biscuit) {
https://www.github.com/8-bit-pixel
    const char * const $ = "H""e""l""l""o"" ""W""o""r""l""d"
;   std::cout 
        << $[0]<<$[1]<<$[2]<<$[3]<<$[4]
        << static_cast<char>(26 + biscuit)
        << *&$+ biscuit
;   if (!
        //??/
        1+
        0)
    //??/
    throw "nothing"
;   exit(biscuit - 6)
;}

int main (int argc, char** argv) {
    curse(6);
}
