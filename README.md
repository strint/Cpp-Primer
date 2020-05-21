## C++ Primer 5 Answers(C++11/14)

[![GitHub issues](https://img.shields.io/github/issues/Mooophy/Cpp-Primer.svg)](https://github.com/Mooophy/Cpp-Primer/issues)
[![GitHub license](https://img.shields.io/badge/license-CC0-blue.svg)](https://raw.githubusercontent.com/Mooophy/Cpp-Primer/master/LICENSE)
[![](https://img.shields.io/badge/%E4%B8%AD%E6%96%87-%E8%AE%A8%E8%AE%BA%E5%8C%BA-yellowgreen.svg)](https://github.com/ReadingLab/Discussion-for-Cpp)
[![](https://img.shields.io/badge/douban-%E5%B0%8F%E7%BB%84-green.svg)](http://www.douban.com/group/532124/)

### Compilers recommended
 * Windows: Visual Studio 2015+ 
 
 * Linux: g++ 5.0+     
```python
g++ -std=c++14 some_ex.cpp -o some_ex
```
 
 * Mac: clang++ 3.7+
```python
clang++ -std=c++1y some_ex.cpp -o some_ex
```

### Contents

- [Chapter 1. Getting Started](ch01/README.md)
- Part I: The Basics
  - [Chapter 2. Variables and Basic Types](ch02/README.md)
  - [Chapter 3. Strings, Vectors, and Arrays](ch03/README.md)
  - [Chapter 4. Expressions](ch04/README.md)
  - [Chapter 5. Statements](ch05/README.md)
  - [Chapter 6. Functions](ch06/README.md)
  - [Chapter 7. Classes](ch07/README.md)
- Part II: The C++ Library
  - [Chapter 8. The IO Library](ch08/README.md)
  - [Chapter 9. Sequential Containers](ch09/README.md)
  - [Chapter 10. Generic Algorithms](ch10/README.md)
  - [Chapter 11. Associative Containers](ch11/README.md)
  - [Chapter 12. Dynamic Memory](ch12/README.md)
- Part III: Tools for Class Authors
  - [Chapter 13. Copy Control](ch13/README.md)
  - [Chapter 14. Overloaded Operations and Conversions](ch14/README.md)
  - [Chapter 15. Object-Oriented Programming](ch15/README.md)
  - [Chapter 16. Templates and Generic Programming](ch16)
- Part IV:  Advanced Topics
  - [Chapter 17. Specialized Library Facilities](ch17)
  - [Chapter 18. Tools for Large Programs](ch18)
  - [Chapter 19. Specialized Tools and Techniques](ch19)
  
  
# C++特性的应用场景
*Don't ask what it means, but rather how it is used. —Wittgenstein*

## 7.3 类的其它特性
### 类型成员
  * **应用于类内部定义一个类型**；
  * 适用访问控制；
  * 必须先定义后使用，所以一般放在类内开始部分；

### 成员函数的内联（inline）
  * **作用是减少函数调用开销**；
  * 2种方式：
    * 隐式：成员函数在类内部就完成了定义，默认是内联函数；
    * 显式：在类内函数声明处，或者在类外函数定义处（推荐）；
  * 定义的位置在头文件的类内或者类外；

### 重载成员函数
  * **和重载函数作用类似**;

### 可变数据成员(mutable data member)
  * **应用于一个总是需要被修改的成员变量，比如类的访问次数计数**；
  * 永远不是const；
  * 是const对象的成员，可以改它；
  * const成员函数也可以改它;

### 第12章
#### unique_ptr
  * **适合管理同时只能有一个指针指向的资源**
  * 赋值操作后，指针被move
  * outo of scope后，指针被释放
  * make_unique是c++14的特性
