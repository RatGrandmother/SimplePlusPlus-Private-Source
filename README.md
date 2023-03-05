## <font size = "5"> Utilizing this library

### <font size = "4"> 1. Importing the library <span>

<font size = "3"> To begin, you first have to download the source code and the library folder. 
(  can download the source code this repository, it's safe. If you dont
think so, feel free to browse the source code. )


### <font size = "4"> 2. Creating a new project <span>

<font size = "3"> In this example, we will be using CLion, but you can use any IDE you want. First, create a new project. 
Then, go to the CMakeLists.txt file and add the following lines: <span> 

```cmake
add_executable(../path/to/library)
```

<font size = "3"> Then, go to the main.cpp file and add the following lines: <span>

```c++

#include <iostream>
#include "path/to/library" // This is the path to the library folder and header file.


int main() {
    std::cout << convertTemp(32, 'C') << std::endl; // This will print out 0. ( 32 degrees Fahrenheit is 0 degrees Celsius. )
    return 0;
}
```



3. <font size = "4"> Compiling the project <span>

<font size = "3"> Now, you can compile the project. If you are using CLion, you can just press the green play button.
If you are using another IDE, you can compile it using the terminal. <span>


---

**NOTE: For more information on how to use the calculator functions, look in the header files and read the comments.**

<font size = "2"> Written by GitHub Copilot and (Mostly) RatGrandmother. <span>