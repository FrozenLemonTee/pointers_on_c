###### 4.13 
2:
```c++
int a = 10; // <变量> = <表达式>
```
✔

3:合法。只是通过花括号嵌入一个代码块，但并未引入其他控制语句，可以正常通过编译。但一般不必这样写。
✔

5:
如下
```bash
0
1
2
3
4
5
6
7
8
9
```
✔

6:当测试语句的表达式比较复杂（其中的变量更新途径不只一个，或者关联的变量较多等等）
❌
> 当循环无初始化和调整语句时

7:
循环体遗漏了花括号，正确的写法如下：
```c++
while((ch = getchar()) != EOF){
    checksum += ch;
    putchar(ch);
}
printf("Checksum = %d\n", checksum);
```
✔

8:当循环体的测试语句要在最后判断时 ✔ 

10:见`c4\print_space.cpp` 

11:见`c4\print_stat.cpp`

13:见`c4\journalist.cpp`

14:见`c4\i_am_hungry.cpp` 

15: 见`c4\i_am_hungry.cpp` 

16:见`c4\weather.cpp`
