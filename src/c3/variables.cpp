//题目原程序代码：
//static int w = 5;
//extern int x;
//
//static float func1(int a, int b, int c){
//    int c, d, e = 1;
//    {
//        int d, e, w;
//        {
//            int b, c, d;
//            static int y = 2;
//        }
//        {
//            register int a, d, x;
//        }
//    }
//    return 0;
//}
//
//static int y;
//float func2(int a){
//    extern int y;
//    static int z;
//    return 0;
//}

// 去除编译错误后：

static int w = 5;// #1 // 存储类型：static 作用域：1-6行，15-24行 链接属性：internal
extern int x;// #2 // 存储类型：static 作用域：2-12行，14-24行 链接属性：external
// #3
static float func1(int a, int b, int c){// #4
    /*
        int a :  存储类型：automatic 作用域：4-12行，14-17行 链接属性：none
        int b :  存储类型：automatic 作用域：4-8行，11-17行 链接属性：none
        int c :  存储类型：automatic 作用域：4-8行，11-17行 链接属性：none
    */
    int _c, d, e = 1;// #5
    /*
    int _c :  存储类型：automatic 作用域：5-17行 链接属性：none
    int d :  存储类型：automatic 作用域：5-6行，15-17行 链接属性：none
    int e :  存储类型：automatic 作用域：5-6行，15-17行 链接属性：none
    */
    {// #6
        int d, e, w;// #7
        /*
        int d :  存储类型：automatic 作用域：7-8行，11-15行 链接属性：none
        int e :  存储类型：automatic 作用域：7-15行 链接属性：none
        int w :  存储类型：automatic 作用域：7-15行 链接属性：none
        */
        {// #8
            int b, c, d;// #9
            /*
            int b :  存储类型：automatic 作用域：8-11行 链接属性：none
            int c :  存储类型：automatic 作用域：8-11行 链接属性：none
            int d :  存储类型：automatic 作用域：8-11行 链接属性：none
            */
            static int y = 2;// #10  // 存储类型：static 作用域：10-11行 链接属性：internal
        }// #11
        {// #12
            register int a, d, x;// #13
            /*
            int a :  存储类型：register 作用域：13-14行 链接属性：none
            int d :  存储类型：register 作用域：13-14行 链接属性：none
            int x :  存储类型：register 作用域：13-14行 链接属性：none
            */
        }// #14
    }// #15
    return 0;// #16
}// #17
// #18
static int y;// #19 // 存储类型：static 作用域：19-24行 链接属性：external
float func2(int a){// #20  // 存储类型：automatic 作用域：20-24行 链接属性：none
    extern int y;// #21  // 存储类型：automatic 作用域：21-24行 链接属性：none
    static int z;// #22  // 存储类型：static 作用域：22-24行 链接属性：none
    return 0;// #23
}// #24

int main(){
    func1(1, 2, 3);
    func2(4);
    return 0;
}