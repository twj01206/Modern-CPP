# Modern-Cpp
提交规范  
feat：新增功能；  
fix：修复bug；  
docs：修改文档；  
refactor：代码重构，未新增任何功能和修复任何bug；  
build：改变构建流程，新增依赖库、工具等（例如webpack修改）；  
style：仅仅修改了空格、缩进等，不改变代码逻辑；  
test：测试用例的修改；  
revert：回滚到上一个版本  

#### 待解决inline的问题：重定义 类外使用 类内使用
# C++20 string_view与string的区别
# C++ 静态成员变量为什么要类外初始化
**知识点**
* 所有对象共享镜头成员的同一份内存：静态成员变量属于类，不属于某个具体的对象。创建多个对象也为其分配一份内存，并且对象修改数值后也会影响其他对象。static成员变量不占用对象内存，在所有对象外开辟内存，不创建对象也可访问  
* 编译阶段就分配内存，程序结束时才释放
* 静态成员变量，可以看成类的生命周期的全局变量，类内声明，类外实现
* 不允许默认初始化的原因是：防止多次引用该文件时，会造成多次定义（初始化）！！！
  
**场景运用**
本人工作时，使用标志位判断窗口状态，第一次运行时，以实现读取数据默认/清空等窗口  
**示例**
```
class Person
{
public:
	static int m_A;
 
private:
	static int m_B;
 
protected:
	static int m_C;
};
int Person::m_A = 1;
//初始化不受private访问限制
int Person::m_B = 2;
int Person::m_C = 3;
 
int main() 
{
	// 通过对象进行访问静态成员变量
	Person p1;
	cout <<"p1.m_A: " << p1.m_A << endl;
 
	//所有对象共享共享静态成员变量的同一份内存
	p1.m_A = 4;
	Person p2;
	cout << "p2.m_A: " << p2.m_A << endl;
 
	// 通过类名进行访问静态成员变量
	cout <<"Person::m_A: " << Person::m_A << endl;
 
	return 0;
}
```