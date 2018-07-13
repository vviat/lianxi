/*************************************************************************
	> File Name: test2.c
	> Author: 
	> Mail: 
	> Created Time: 2018年05月20日 星期日 09时56分39秒
 ***********************************************************************/
//实现TEXT宏定义 在程序运行前显示测试用例结果，测试后显示测试统计
#include<stdio.h>
int run(void (*func)(), char *a, char *b) {
    printf("[%s:%s] run\n", a, b);
    func()
    return 1;
}
#define TEST(a,b) void x_x(); int x = run(x_x, #a, #b);void x_x()
#define EXPECT(a,b) {\
    printf("%s == %s %s\n", #a, #b, a == b ? "TURE" : "FLASE"); }


class TestMap:public testing::Test
{
public:
    //添加日志
    static void SetUpTestCase()
    {
        cout<<"SetUpTestCase"<<endl;
    }
    static void TearDownTestCase()
    {
        cout<<"TearDownTestCase"<<endl;
    }
    virtual void SetUp()   //TEST跑之前会执行SetUp
    {
        cout<<"SetUp"<<endl;
        test_map.insert(make_pair(1,0));
        test_map.insert(make_pair(2,1));
        test_map.insert(make_pair(3,2));
        test_map.insert(make_pair(4,3));
        test_map.insert(make_pair(5,4));
    }
    virtual void TearDown() //TEST跑完之后会执行TearDown
    {
        cout<<"TearDown"<<endl;
        test_map.clear();
    }
    map<int,int> test_map;
};
TEST_F(TestMap,Find)   //此时使用的是TEST_F宏
{
    map<int,int>::iterator it=test_map.find(1);
    ASSERT_NE(it,test_map.end());
}
TEST_F(TestMap,Size)
{
    ASSERT_EQ(test_map.size(),5);
}

int main(int argc,char *argv[])
{
    testing::InitGoogleTest(&argc, argv);//将命令行参数传递给gtest
    return RUN_ALL_TESTS();   //RUN_ALL_TESTS()运行所有测试案例
}

int add(int a, int b) {
    return a + b;
}

TEST(test, add_func) {
    EXPECT(add(1, 2), 3);
    EXPECT(add(3, 4), 7);
    EXPECT(add(2, 2), 4);
}
int main() {
    return RUN_ALL_TESTS();
}
