#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace ::std;

int global = 19;
#include<string>
#include<cctype>
 namespace tt01
{
	 void test1()
	 {
		 int n = 0, m = 0;
		 while (cin >> n)//ctrl+z -- 退出
			 m += n;
		 cout << m << endl;
	 }
	 void test2()
	 {
		 signed char a = 97;
		 cout << a << endl;
		 unsigned u = 10, u2 = 42;
		 cout << u2 - u << endl;
		 cout << u - u2 << endl;
		 int i = 10, i2 = 42;
		 cout << i2 - i << endl;
		 cout << i - i2 << endl;
		 cout << i - u << endl;
		 cout << u - i << endl;
		 unsigned num = -1;
		 cout << num << endl;
	 }
	 void test3()
	 {
		 int insight = 0;
		 cout << global << " " << insight << endl;
		 int global = 0;
		 cout << global << " " << insight << endl;
		 cout << ::global << " " << insight << endl;
		 insight = global;
		 cout << ::global << " " << insight << endl;
		 insight = ::global;
		 cout << ::global << " " << insight << endl;
		 ::global = 20;
		 insight = global;

		 cout << ::global << " " << insight << endl;
		 cout << global << " " << insight << endl;
	 }
	 void test4()
	 {
		 int i = 10;
		 int& ip = i;
		 i = 20; ip = 30;
		 cout << i << " " << ip << endl;
		 double pi = 3.14;
		 const int& a = pi;
		 // == const int tmp=pi;
		 //   const int&a =tmp;
		 cout << a << endl;
		 //int& r = 0;
		 int* const pw = &i;
		 const int& r = 0;
		 const int *const p = &i;
		 using int_long = long long;
	 }
	 int add(int x, int y)
	 {
		 return x + y;
	 }
	 void test5()
	 {
		 decltype(add(1,2))x = 1;
		 cout << x << endl;
		 const int y = 10;
		 decltype(y)z = 20;
		 //z = 10;
		 cout << z << endl;
		 int i = 42, * p = &i, & r = i;
		 decltype(r)b = x;//得到的是引用
		 decltype(r + 0)b1 = 0;//得到的是int
		 decltype(*p)c = x;//(*p)得到的是引用
		 //int的指针 *解引用得到的是一个 object 是int& 而不是int 
		 int tian = 0;
		 decltype((tian))t = i;//双层括号的都是引用
	 }

	 void test6()
	 {
		 string s;
		 cin >> s;
		 cout << s << endl;
	 }
	 void stringtest1()
	 {
		 /*string s;
		 while (cin >> s)
		 {
			 cout << s << " ";
		 }*/

		 //-------------------getline
		 string word;
		 while (getline(cin, word))// getline 遇到 换行 就  停止输入
		 {
			 cout << word << endl;
		 }
	 }
	 void stringtest2()
	 {
		 string s("hello world");
		 int n = -1;
		 if (s.size() < n)//.size()返回的是无符号数  比较是 有符号的int 会转换 为无符号
		 {
			 cout << s << endl;
		 }
		 auto len = s.size();
		 if (len < n)
		 {
			 cout << s <<"2" << endl;
		 }
	 }
	 void stringtest3()
	 {
		 string s("hello world!!!!");
		 string s1 = s;
		 string s2 = s;
		 decltype(s.size())punct_cnt = 0;
		 for (auto c : s)
			 if (ispunct(c))//计算符号的个数
				 ++punct_cnt;
		 cout << punct_cnt << endl;


		 for (auto& d : s)
			 d = toupper(d);// 把小写字母 换成大写字母
		 cout << s << endl;
		 //string s1 = s;
		 if (!s1.empty())
			 s1[0] = toupper(s1[0]);
		 cout << s1 << endl;

		 for (decltype(s2.size())index = 0;
			 index != s2.size() && !isspace(s2[index]); index++)
			 s2[index] = toupper(s2[index]);
		 cout << s2 << endl;
	 }
	 void stringtest4()
	 {
		 const string s("0123456789ABCDEF");
		 string result;
		 decltype(s.size())n = 0;
		 while (cin >> n)
			 if (n < s.size())
				 result += s[n];
		 cout << result << endl;
	 }
	 void stringtest5()
	 {
		 string s;
		 cout << s[0] << endl;
	 }
}

#include<vector>
#include<string>
namespace tt02
{
	void test01()
	{
		vector<string> v{ 10 };
		vector<string>text;
		string word;
		while (cin >> word)
		{
			text.push_back(word);
		}
		for (auto it=text.begin();it!=text.end();it++)
		{
			cout << *it << endl;
		}
	}
	void vectext1()
	{
		vector<int> v{ 1,2,3,4,5,6,7,8 };
		for (auto& i : v)
		{
			i *= i;
		}
		for (auto i : v)
		{
			cout << i << endl;
		}
		vector<string>v1{ "hello","my","world" };
		cout << v1[0].size() << endl;
		++v[0];
		cout << v[0] << endl;
	}
	void vectext2()
	{
		vector<string>v;
		string word;
		while (cin >> word)
		{
			for (auto& s : word)
			{
				s = toupper(s);
			}
			v.push_back(word);
			//cout << *(v.end()+1) << endl;
		}
		for (auto it = v.begin(); it < v.end(); it++)
		{
			cout << *it << endl;
		}
	}
	void vectext3()
	{
		vector<int>v;
		int i = 0;
		while (cin >> i)
		{
			v.push_back(i);
		}
		for (int i = 0; i < (v.size())/2; i++)
		{
			cout << v[i] << " " << v[v.size() - 1 - i] << endl;
		}
	}
	void test2()
	{
		vector<string>v{ "hello","world" };
		auto it = v.begin();
		if (!it->empty())
		{
			cout << it->size();
		}
	}
	void test3()
	{
		int i;
		const int* pi = &i;
		const int& a = i;
		
		double k;
		void* vp = &k;
		double* dou = static_cast<double*>(vp);
	}
}
namespace tt03
{
	void test1()
	{
		vector<int>v;
		v = { 0,1,2,3,4,5,6,7,8,9 };
		
		v = { 0,0, 0, 0 ,0 };

		for (auto it : v)
		{
			cout << it << endl;
		}
		for (auto it = v.begin(); it != v.end(); ++it)
		{
			cout << *it << endl;
		}
		auto it = v.begin();
		cout<<++*it<<endl;
	}
	void initlist(const initializer_list<vector<int>>i)
	{
		for (auto beg = i.begin(); beg != i.end(); beg++)
		{
			cout << beg << endl;
		}
	}
	void test2()
	{
		vector<int>v{ 1,2,3,4,5,6,7,8,9, };
		//initlist(v);
	}
	constexpr int fun_sz()
	{
		return 1;
	}
	void test3()
	{
		const int a = 10;
		const int i = fun_sz();
	}
	class Book
	{
	public:
		Book() = default;
		Book(int num,string name):Book_Num(num),Book_Name(name){}

	private:
		int Book_Num;
		string Book_Name;
	};
	void test5()
	{
		Book book();
	}
	class Screen
	{
	public:
		Screen(size_t a):access_ctr(a){}
		void Print()
		{
			cout << access_ctr << endl;
		}
		void some_member()const;
	private:
		mutable size_t access_ctr;

	};
	void Screen::some_member()const
	{
		++access_ctr;
	}
	void test4()
	{
		Screen s1(10);
		s1.some_member();
		s1.Print();
	}
	//Lambdas没有构造函数 
	// 如果要传 容器时 要用dectltype()来推导类型
	//
	void test6()
	{
		int id = 10;
		auto f = [id]()mutable {
			cout << "id:" << id << endl;
			++id;
		};
		id = 42;
		f();//10
		f();//11
		f();//12
		f();
		cout << id << endl;
	}
	class Functor
	{
	private:
		int id;
	public:
		void operator()()
		{
			cout << "id:" << id << endl;
			id++;
		}
	};

	void test7()
	{
		int id = 0;
		auto f = [&id](int paly) {
			cout << "id:" << id << endl;
			id++;
			paly++;
		};
		id = 42;
		f(7);
		f(7);
		f(7);
		f(7);
		cout << id << endl;

	}
	void test6_sma()
	{
		Functor f;
		f();
		f();
		f();
		f();
	}

	class Person
	{
	public:
		Person(int a,string n):Age(a),Name(n){}
		bool operator>(Person p1)
		{
			return this->Age > p1.Age;
		}
	private:
		int Age;
		string Name;
	};
	void Test1()
	{
		auto cmp = [](const Person& p1, const Person& p2)
		{

		};
	}
	void Test2()
	{
		vector<int>v1{ 5,28,50,3,0,4,1,0,55,44,11,587,475 };
		int x = 10;
		int y = 100;
		v1.erase(remove_if(v1.begin(),
			v1.end(),
			[x, y](int n) {return x < n && n < y; }
		), v1.end());
		for (auto i : v1)
		{
			cout << i << " ";
		}
	}
}

#include<bitset>
#include<algorithm>
#include<cstdio>
#include<cmath>
#include<new>
#include<complex>
namespace tt04
{
	void printX()
	{

	}
	//特化
	template<typename T, typename... Types>
	void printX(const T& firstArg, const Types&...args)
	{
		cout << firstArg << endl;
		printX(args...);
	}
	//泛化的 有上面的就不会被调用
	template <typename...Types>
	void PrintX(const Types&...args)
	{
		cout << args << endl;
		cout << 2 << endl;
		printX(args...);
	}

	void testvariadicTempaltes()
	{
		printX(bitset<32>(120), "hello", "world", 520, "I love the ", "petty girl");
	}

	//模拟实现C的printf
	void printf(const char* s)
	{
		while (*s)
		{
			if (*s == '%' && *(++s) != '%')
				throw runtime_error("invalid format string:missing arguments");
			cout << *s++;
		}
	}
	template<typename T, typename...Args>
	void printf(const char* s, T value, Args...args)
	{
		while (*s) {
			if (*s == '%' && *(++s) != '%')
			{
				cout << value;
				printf(++s, args...);
				return;
			}
			cout << *s++;
		}
		throw logic_error("extra argument provided to printf");
	}

	void TestPrintf()
	{
		printf("he is %d years old %s %f", 100, "Hello my World", 3.25);
	}

	// 类 重载<<
	class Person
	{
	public:
		Person(int a, int w) :age(a), weight(w) {}
		int operator<<(iostream& io)
		{
			return this->age;
		}
	private:
		int age;
		int weight;
	};


	// max 
	template<typename _ForwardIterator, typename _Compare>
	_ForwardIterator _max_element(_ForwardIterator _first, _ForwardIterator _last, _Compare _comp)
	{
		if (_first == _last)return _first;
		_ForwardIterator _result = _first;
		while (++_first != _last)
			if (_comp(_result, _first))
				_result = _first;
		return _result;

	}
	struct _Iter_less_iter
	{
		template<typename _Iterator1, typename _Iterator2>
		bool
			operator()(_Iterator1 _it1, _Iterator2 _it2)const
		{
			return *_it1 < *_it2;
		}
	};
	inline _Iter_less_iter _iter_less_iter()
	{
		return _iter_less_iter();
	}

	template<typename _ForwardIterator>
	inline _ForwardIterator max_element
	(_ForwardIterator _first, _ForwardIterator _last)
	{
		return _max_element(_first, _last, _iter_less_iter());
	}

	template<typename _Tp>
	inline _Tp max(initializer_list<_Tp> _1)
	{
		return *max_element(_1.begin(), _1.end());
	}

	void testmax()
	{
		cout << max({ 57,48,60,100,20,10,18 }) << endl;
	}

	/* int maximum(int n)
	{
		return n;
	}
	template<typename...Args>
	int maximum(int n, Args...args)
	{
			return max(n, maximum(args...));
     }

	void testmaximum()
	{
		cout << maximum(10, 20, 3, 0, 4, 85, 40) << endl;
	} */


	template<typename... Values>class tuple;
	template<>class tuple<>{};

	template<typename Head,typename... Tail>
	class tuple<Head, Tail...>:private tuple<Tail...>
	{
		typedef tuple<Tail...>inherited;
	protected:
		Head m_head;
	public:
		tuple(){}
		tuple(Head v,Tail... vtail):m_head(v),inherited(vtail...){}

		// err typename Head::type head() { return m_head; } 第一版本 不行
		//auto head() -> decltype(m_head) { return m_head; } 第二版本
		Head head() { return m_head; }
		inherited& tail() { return *this; }
	/*protected:
		Head m_head;*/
	};
	void Test1()
	{
		tuple<int, float, string> t(14, 6.3, "nice");
		cout << t.head() << endl;
		cout << t.tail().head() << endl;
	}

	void Test2()
	{
		string s1{ "Hello 2 break sister" };
		string s2{ move(s1) };//使用 move是 浅拷贝 使用完后 就 不应该 在使用
		cout << s1 << endl;
	}
	void Test3()
	{
		int* p4 = allocator<int>().allocate(3, (int*)0);
		allocator<int>().deallocate(p4, 3);
	}

	void TestPlacementNew()
	{
		/*int* buf = new int(10);
		int* pc = new(buf);*/
	}
	class Screen
	{
	public:
		Screen(int x) : i(x) {};
		int get() { return i; }
	private:
		int i;
	};
	void TestS1()
	{
		cout << sizeof(Screen) << endl;

		size_t const N = 10;
		Screen* p[N];
		for (int i = 0; i < N; i++)
		{
			p[i] = new Screen(i);
		}

		for (int i = 0; i < N; i++)
		{
			cout << p[i] << endl;
		}
		for (int i = 0; i < N; i++)
			delete p[i];
	
	}
}
#include<cstddef>
#include<iostream>
namespace jj05
{
	class Screen
	{
	public:
		Screen(int x) : i(x) {};
		int get() { return i; }

		void* operator new(size_t);
		void operator delete(void*, size_t);

	private:
		Screen* next;
		static Screen* freeStore;
		static const int screenChunk;
	private:
		int i;
	};
	Screen* Screen::freeStore = 0;
	const int Screen::screenChunk = 24;

	void Screen::operator delete(void* p, size_t)
	{
		(static_cast<Screen*>(p))->next = freeStore;
		freeStore = static_cast<Screen*>(p);
	}
	void* Screen::operator new(size_t size)
	{
		Screen* p;
		if (!freeStore) {
			size_t chunk = screenChunk * size;
			freeStore = p = reinterpret_cast<Screen*>(new char[chunk]);
			for (; p != &freeStore[screenChunk - 1]; ++p)
				p->next = 0;
		}
		p = freeStore;
		freeStore = freeStore->next;
		return p;
	}
	void Test1()
	{
		cout << sizeof(Screen) << endl;

		size_t const N = 10;
		Screen* p[N];
		for (int i = 0; i < N; i++)
		{
			p[i] = new Screen(i);
		}

		for (int i = 0; i < N; i++)
		{
			cout << p[i] << endl;
		}
		for (int i = 0; i < N; i++)
			delete p[i];
	}
	class allocator
	{
	private:
		struct obj {
			struct obj* next;
		};
	public:
		void* allocate(size_t);
		void deallocate(void*, size_t);
	private:
		obj* freeStore = nullptr;
		const int CHUNK = 5;//小一些以便观察
	};
	void allocator::deallocate(void* p, size_t)
	{
		((obj*)p)->next = freeStore;
		freeStore = (obj*)p;
	}
	void* allocator::allocate(size_t size)
	{
		obj* p;
		if (!freeStore)
		{
			size_t chunk = CHUNK * size;
			freeStore = p = (obj*)malloc(chunk);

			for (int i = 0; i < (CHUNK - 1); i++)
			{
				p->next = (obj*)((char*)p + size);
				p = p->next;
			}
			p->next = nullptr;

		}
		p = freeStore;
		freeStore = freeStore->next;
		return p;
	}
	class Foo {
	public:
		long L;
		string str;
		static allocator myAlloc;
	public:
		Foo(long l) :L(l) {};
		static void* operator new(size_t size)
		{
			return myAlloc.allocate(size);
		}
		static void operator delete(void* pdead, size_t size)
		{
			return myAlloc.deallocate(pdead, size);
		}

	};
	allocator Foo::myAlloc;

	void TestAlloc()
	{
		Foo* p[100];
		cout << "sizeof(Foo)" << sizeof(Foo) << endl;
		for (int i = 0; i < 23; i++)
		{
			p[i] = new Foo(i);
			cout << p[i] << ' ' << p[i]->L << endl;
		}
		for (int i = 0; i < 23; ++i)
		{
			delete p[i];
		}
	}

//#define DECLARE_POOL_ALLOC()\
//
//	public:\
//		void* operator new(size_t size){return myAlloc.allocate(size);\
//         void operator delete(void *p){myAlloc.deallocate(p,0);}\
//    protected:\
//         static allocator myAlloc;
//#define IMPLEMENT_POOL_ALLOC(class_name)\
//allocator class_name::myAlloc;
//
//
//	class Foo1 {
//		DECLARE_POOL_ALLOC()
//	public:
//		long L;
//		string str;
//	public:
//		Foo1(long l) :L(l) {}
//	};
//	IMPLENT_POOL_ALLOC(Foo1)

#define MAX_MEMORY 100000000000000000000000000
	void noMoreMemory()
	{
		cerr << "out of memory";
		abort();
	}
	void TestnoMM()
	{
		set_new_handler(noMoreMemory);
		int* p = new int[10];
	}

}

namespace jj01
{
	void Testcout()
	{
		cout << "hello1" << endl;
		cout << "hello2" << ends;
		cout << "hello3<<" << flush;
	}
	//decltype
	template <typename It>
	auto fcn(It beg, It end) -> decltype(*beg)
	{
		return *beg;
	}

	class Complex {
	private:
		double r, i;
	public:
		Complex(double R = 0, double I = 0) :r(R), i(I) {};
		Complex operator+(Complex b);
		Complex operator-(Complex b);
		Complex operator*(Complex b);
		Complex operator/(Complex b);
		void display();

	};
	Complex Complex::operator+(Complex b) {
		return Complex(r + b.r, i + b.i);
	}
	Complex Complex::operator-(Complex b) {
		return Complex(r - b.r, i - b.i);
	}
	Complex Complex::operator*(Complex b) {
		Complex t;
		double x;
		x = 1 / (b.r * r + b.i * b.i);
		t.r=x* (b.r * r + b.i * b.i);
		t.i=x* (b.r * r + b.i * b.i);
		return t;
	}
	Complex Complex::operator/(Complex b) {
		Complex t;
		double x;
		x = 1 / (b.r * b.r + b.i * b.i);
		t.r = x * (r * b.r + i * b.i);
		t.i = x * (i * b.r - r * b.i);
		return t;
	}
	void Complex::display() {
		cout << r;
		if (i > 0)
			cout << "+";
		if (i != 0)
			cout << i << "i" << endl;
		//}display();
	}
	void testcomplex()
	{
		Complex c1(1, 2), c2(3, 4), c3, c4, c5, c6;
		Complex a, b(2, 3);
		a = b + 2; //正确
		// a=2+b;       			//错误
		a.display();
		c3 = c1 + c2;
		c4 = c1 - c2;
		c5 = c1 * c2;
		c6 = c1 / c2;
		c1.display();
		c2.display();
		c3.display();
		c4.display();
		c5.display();
		c6.display();
	}


	bool isNumber(string s) {
		for (int i = 0; i < s.size(); i++)
		{
			if ((s[i] > '9' || s[i] < '0') && (s[i] != 'e' && s[i] != 'E' && s[i] != '.' && s[i] != ' ' && s[i] != '+' && s[i] != '-'))
			{
				return false;
			}

			if (s[i] == 'e' || s[i] == 'E')
			{
				if (s[i + 1] > '9' || s[i + 1] < '0' || s[i - 1]>'9' || s[i - 1] < '0')
				{
					return false;
				}
			}

			if (s[i] == '.')
			{
				if (s[i + 1] > '9' || s[i + 1] < '0')
				{
					return false;
				}
			}

		}
		return true;
	}
	void testloet()
	{
		string s = "0e1 +a ";
		bool p = isNumber(s);
		cout << p << endl;
	}
	
}
#define _CRT_SECURE_NO_WARNINGS
#include<string>
#include<iostream>
#include<cstring>
namespace jj02
{
	class Employee {
	public:
		Employee(string Name, string id) :name(Name),Id(id) {};
		string getName()const { return name; }
		string getID()const { return Id; }
		virtual float getSalary() { return 0.0; }
		virtual void print()const {
			cout << "姓名:" << name << "\t\t编号:" << Id << endl;
		}
	private:
		string name;
		string Id;
	};
	
	class Manager :public Employee {
	public:
		Manager(string Name, string id, int week) :Employee(Name, id) {
			WeeklySalary = week * 10000;
		}
		float getSalary()const { return WeeklySalary; }

		void print()const {
			cout << "经理: " << getName() << "\t\t编号:" << getID()
				<< "\t\t总工资:" << getSalary() << endl;

		}
	private:
		float WeeklySalary;
	};

	class HourWorker :public Employee {
	public:
		HourWorker(string name, string id, int h) :Employee(name, id) {
			TotalMoney = h * hourMoney;
		}
		float getSalary()const { return TotalMoney; }
		void print()const {
			cout << "小时工:" << getName() << "编号:" << getID()
				<< "总工资:" << getSalary() << endl;
		}
	private:
		float hourMoney = 100.0;
		float TotalMoney;
	};

	class SaleWorker :public Employee {
	public:
		SaleWorker(string name, string id, int profit, int x) :Employee(name, id)
		{
			workerMoney = baseMoney + x * 0.05 * profit;
		}
		float getSalary()const { return workerMoney; }
		void print()const
		{
			cout << "销售员: " << getName() << "编号:" << getID()
				<< "总工资:" << getSalary() << endl;
		}
	private:
		float baseMoney = 800.0;
		float workerMoney;

	};
	void testVirtual()
	{
		cout << "请输入工作周：";
		int week;
		cin >> week;
		Manager m("小王", "11111111", week);
		m.print();
		cout << "请输入销售利润：";
		int profit;
		cin >> profit;
		cout << "请输入销售件数：";
		int x;
		cin >> x;
		SaleWorker s("小李", "222222", profit, x);
		s.print();
		cout << "请输入工作小时：";
		int hour;
		cin >> hour;
		HourWorker h("小何", "333333", hour);
		h.print();
	}
	void test()
	{
		vector<int>v = { 10,20,30,40,14,20,30 };
		auto it = find(v.begin(), v.end(),201);
		
		cout << *it << endl;
	}
	class Time {
	private:
		int hh, mm, ss;
	public:
		Time(int h = 0, int m = 0, int s = 0) :hh(h), mm(m), ss(s) {};
		void operator()(int h, int m, int s)
		{
			hh = h;
			mm = m;
			ss = s;

		}
		void ShowTime()
		{
			cout << hh << ":" << mm << ":" << ss <<  endl;
		}
	};
	void testTime()
	{
		Time t1(19, 15, 20);
		t1.ShowTime();
		t1(1, 2, 3);
		t1.ShowTime();
	}
	class X {
	public:
		X& operator=(const X& x)
		{
			cout << "a:";
			return *this;
		}

		//X(int x) :s(x) {};
		int s;
	};
	void testX()
	{
		X obj1, obj2, obj3;
		obj1 = obj2;

	}

	class String {
	private:
		int length;
		char* sPtr;
		void setString(const char* s2);
		friend ostream& operator<<(ostream& os, const String& s)
		{
			return os << s.sPtr;
		};
		friend istream& operator >> (istream& is, String& s)
		{
			return is >> s.sPtr;
		}
	public:
		String(const char* = "");
		const String& operator=(const String& R) {
			length = R.length;
			strcpy(sPtr, R.sPtr); 
			return *this;
		};
		const String& operator+=(const String& R);
		bool operator==(const String& R);
		bool operator!=(const String& R);
		bool operator<(const String& R)const;
		bool operator>(const String& R)const;
		bool operator>=(const String& R);
		bool operator<=(const String& R);
		bool operator!();
		char& operator[](int);
		~String() {};
	};

	const String& String:: operator+=(const String& R) {
		char* temp = sPtr;
		length += R.length;
		sPtr = new char[length + 1];
		strcpy(sPtr, temp);
		strcat(sPtr, R.sPtr);
		delete[]temp;
		return *this;
	}
	String::String(const char* str)
	{
		sPtr = new char[strlen(str) + 1];
		strcpy(sPtr, str);
		length = strlen(str);
	}
	bool String::operator==(const String& R) {
		return strcmp(sPtr, R.sPtr) == 0;
	}
	bool String::operator!=(const String& R) {
		return !(*this == R);
	}
	bool String::operator!() {
		return length == 0;
	}
	bool String::operator<(const String& R)const {
		return strcmp(sPtr, R.sPtr) < 0;
	}
	bool String::operator>(const String& R)const {
		return strcmp(sPtr, R.sPtr) > 0;
	}
	bool String::operator>=(const String& R) { return !(*this < R); }
	char& String::operator[](int subscript) { return sPtr[subscript]; }



}
#include<map>
namespace jj03
{
	const int Size = 5;
	template<class T>class Array {
	private:
		T a[Size];
	public:
		Array() {
			for (int i = 0; i < Size; i++)
				a[i] = 0;
		}
		T& operator[](int i);
		void Sort();
		
	};
	template <class T> T& Array<T>::operator[](int i) {
		if (i<0 || i>Size - 1) {
			cout << "数组下标越界!" << endl;
			exit(1);
		}
		return a[i];
	}

	template <class T>void Array<T>::Sort() {
		int p;
		for (int i = 0; i < Size - 1; i++) {
			p = i;
			for (int j = i; j < Size; j++)
			{
				if (a[p] < a[j])
					p = j;
			}
			T t = a[p];
			a[p] = a[i];
			a[i] = t;
		}
	}
	template <>void Array<char*>::Sort() {
		int p;
		for (int i = 0; i < Size; i++)
		{
			p = i;
			for (int j = i + 1; j < Size; j++)
			{
				if (strcmp(a[p], a[j]) < 0)
					p = j;
				char* t = a[p];
				a[p] = a[i];
				a[i] = t;
			}
		}
	}
	class Time {
	private:
		int hour, minute, second;
	public:
		Time(int h, int m, int s);
		Time operator++();
		friend Time operator--(Time& t);
		void display();

	};

	Time::Time(int h, int m, int s)
	{
		hour = h;
		minute = m;
		second = s;
		if (hour >= 24)
			hour = 0;
		if (minute >= 60)
			minute = 0;
		if (second >= 60)
			second = 0;
	}

	Time Time::operator++() {
		++second;
		if (second >= 60) {
			second = 0;
			++minute;

			if (minute >= 60)
			{
				minute = 0;
				++hour;

				if (hour >= 24)
				{
					hour = 0;
				}
			}
		}
		return *this;
			
	}
	Time operator--(Time& t) {
		--t.second;
		if (t.second < 0) {
			t.second = 59;
			--t.minute;
			if (t.minute < 0) {
				t.minute = 59;
				--t.hour;
				if (t.hour < 0)
					t.hour = 23;
			}
		}
		return t;
	}
	void Time::display() { cout << hour << ":" << minute << ":" << second << endl; }
	void testTime()
	{
		Time t1(23, 59, 59);
		t1.display();
		++t1; //隐式调用
		t1.display();
		t1.operator++(); //显式调用
		t1.display();
		Time t2(24, 60, 60);
		t2.display();
		++t2;
		t2.display();
		--t2;
		t2.display();
	}
	void testmap()
	{
		string name[] = { "张三","李四","王五" };
		double salary[] = { 1200,2000,1450 };
		map<string, double>sal;
		map<string, double>::iterator p;
		for (int i = 0; i < 3; i++) {
			sal.insert(make_pair(name[i], salary[i]));
		}
		sal["tom"] = 6156;
		sal["bob"] = 5999;
		for (p = sal.begin(); p != sal.end(); p++) {
			cout << p->first << " " << p->second << endl;
		}

		string person;
		cout << "输入查找人员的名字:";
		cin >> person;
		int flag = 1;
		for (p = sal.begin(); p != sal.end(); p++)
		{
			if (p->first == person) {
				cout << p->second << endl;
				flag = 0;
			}
		}
		if (flag)
			cout << "没有找到此人!" << endl;
		cout << "输入待删除的员工:";
		cin >> person;
		auto it = sal.find(person);
		if (it != sal.end()) {
			cout << "查找成功:" << (*it).first << ":" << (*it).second << endl;
			sal.erase(it);
			cout << "sha";
		}
	}

	vector<int> plusOne(vector<int>& digits) {
		int k = 0;
		for (int i = 0; i < digits.size(); i++)
		{
			k += digits[i];
			k *= 10;
		}
		k /= 10;
		k += 1;
		vector<int>ans;
		for (int i = digits.size() - 1; i <= 0; i--)
		{
			digits[i] = k % 10;
			k /= 10;
		}
		return digits;
	}
	void testloot()
	{
		vector<int>v = { 1,2,3 };
		plusOne(v);
		for (auto it : v)
		{
			cout << it << " ";
		}
	}
	vector<int> fun(vector<int>& n)
	{
		auto it = n.begin();
		*it = 10;
		return n;
	}
	void test1()
	{
		vector<int>x = { 1,2,3 };
		//x[0] = 2;
		fun(x);

		for (auto it : x)
		{
			cout << it;
		}
		for (auto it = x.crbegin(); it != x.crend(); it++)
		{
			cout << *it << endl;
		}
	}

}
namespace jj04
{
	void test1()
	{
		vector<int>v = { 0,1,2,3,4,5,6 };
		v[0]++;
		cout << v[0];
	}
	//----------------------------------------------------------
	// 参数个数  参数个数逐一递减
// 参数类型  参数类型也逐一递减

	template<typename T>
	void _hash(T t)
	{
		cout << "endl" << endl;
	}
	// 需要重载一个终止函数
	template<typename T>
	void _hash(size_t& seed, const T& val) {
		cout << "hash over" << val << endl;
	}
	
	// 展开函数, 把参数分为一个普通参数和一个参数包，调用一次，参数包大小就减一
	template<typename T,typename ...Args>
	void _hash(size_t& seed, const T& val, const Args&...args){
		cout << "parameter" << val << endl;
		_hash(seed, args...);
	}
	// 泛化版 (1)
	template<typename ... Args>
	size_t _hash(const Args&...args) {
		cout << "hash start" << endl;
		size_t seed = 10;
		_hash(seed, args...);
		return seed;
	}
	// 
	template<typename ...Args>
	class A {
	private:
		int size = 0;// c++11 支持类内初始化
	public:
		A() {
			size = sizeof...(Args);
			cout << size << endl;
		}
	};
	void TestA()
	{
		size_t f = 10;
		_hash("asdas", 2, 3, 4);
		A<int, string, vector<int>>a;// 类型任意

    // Tuple就是利用这个特性(变长参数模板)
		tuple<int, string>t = make_tuple(1, "hha");
		int firstArg = get<0>(t);
		string secondArg = get<1>(t);
		cout << firstArg << " " << secondArg << endl;
	}
	//-------------------------------------------------------------
	void printX() {

	}
	// 特化
	template<typename T,typename ...Type>
	void printX(const T& firstArg, const Type &...args)
	{
		cout << firstArg << endl;// 先减少一个做操作
		printX(args...);// 其余的继续分为一个+一包进行递归知道没有了 调用printX()
	}


	// 如果写了下面接收任意参数,下面这个跟上面可以共存 泛化版  永远不会被调用,前面特化把它取代了
	template<typename T, typename... Type>
	void printX(const Type &...args) {
		printX(args...);
	}

	void TestPrintX()
	{
		printX(1, 2, 3, "hello", "World");
		printX(1, "hello", bitset<16>(377), 42);
	}
	//---------------------------------------------------------

	//err!!!
	//int max(initializer_list<int> initializerList) {
	//	int res = *initializerList.begin();
	//	for (auto elem : initializerList)
	//		res = max(res, elem);  err!!!
	//	return res;
	//}
	// 参数type相同的maximum
	int maximum(int n) {
		return n;
	}
	template<typename...Args>
	int maximum(int n, Args...args) {
		return max(n, maximum(args...));
	}
	void TestMaximum()
	{
		cout << maximum(1, 20, 5, 40, 50) << endl;
	}

	//-----------------------------------------------------------
// tuple递归调用

// 得出这种打印[7,5....,42]
// 需要知道有几个以及现在操作的是第几个   sizeof...()

// cout<< make_tuple(7.5,string("hello"),bitset<16>(377),47);
	template<int IDX,int MAX,typename...Args>
	struct print_tuple {
		static void print(ostream& os, const tuple<Args...>& t) {
			os << get<IDX>(t) << (IDX + 1 == MAX ? "" : ",");
			print_tuple<IDX + 1, MAX, Args...>::print(os, t);
		}
	};

	template<int MAX,typename...Args>
	struct print_tuple<MAX, MAX, Args...> {
		static void print(ostream& os, const tuple<Args...>& t) {

		}
	};

	template<typename ...Args>
	ostream& operator<<(ostream& os, const tuple<Args...>& t) {
		os << "[";
		print_tuple<0, sizeof...(Args), Args...>::print(os, t);
		return os << "]";
	}

	void TsetPrintTuple()
	{
		cout << make_tuple(7.5, string("hello"), bitset<16>(377), 47) << endl;
	}
	//-------------------------------------------------------------------------------

	void TestConst()
	{
		vector<int>vec;
		const vector<int>::iterator it = vec.begin();
		*it = 10;//通过编译，改变 iter 所指之物
		//++it;  err!!//不能通过编译，iter 是个 const 
		vector<int> vecc;
		vector<int>::const_iterator citer = vecc.begin();
		//*citer = 10;//不能通过编译，*citer 是个 const
		++citer;//能通过编译，改变 citer
	}
	class Rational {
	public:

	private:
		int a=2;
	};
	//-------------------------------------------------------
}
#include<algorithm>
#ifndef _UNISTD_H
#define _UNISTD_H
#include <io.h>
#include <process.h>
#endif /* _UNISTD_H */
#include<thread>
#include<chrono>
//#include<unistd.h>
#include <cassert>
namespace jj061 {
	// 上一个例子:variadic5.cpp为递归调用
// 当前这个例子为递归继承
	template<typename...Values>
	class tuple1;

	template<>
	class tuple1<> {

	};

	template<typename Head, typename...Tail>
	class tuple1<Head, Tail...> :private tuple1<Tail...> {
		typedef tuple1<Tail...> inherited;
	protected:
		Head m_head;
	public:
		tuple1() {}

		tuple1(Head h, Tail...tail) :m_head(h), inherited(tail...) {};
		// decltype()中的m_head必须放到前面,否则编译器找不到
		auto head() -> decltype(m_head) { return m_head; }
		// 或者 Head head()  { return m_head; }
		inherited& tail() { return *this; }

	};

	void TestTuple()
	{
		tuple1<int, float, string> t(41, 6.3, "nico");
		cout << sizeof(t) << endl;
		cout << t.head() << endl;
		cout << t.tail().head() << endl;
		cout << t.tail().tail().head() << endl;
	}
	/**
 * string 32   8字节对齐
 * float  4
 * int    4
 * 4+4+32=40 自底向上
 *///----------------------------------------------
 // 1.函数指针
	void fun(int x) {
		while (x-- > 0) {
			cout << x << endl;
		}
	}

	void Testfun()
	{
		// 注意：如果我们创建多线程 并不会保证哪一个先开始
		std::thread t1(fun, 10);
		t1.join();
	}
	void Testfun1()
	{
		// 2.Lambda函数
		auto fun1 = [](int x) {
			while (x-- > 0) {
				cout << x << endl;
			}
		};
		  std::thread t1(fun1, 10);
		  
	// 也可以写成下面：
		std::thread t1_1([](int x) {
			while (x-- > 0) {
				cout << x <<"    2" << endl;
			}
			}, 11);

		t1_1.join();// 注意：如果我们创建多线程 并不会保证哪一个先开始
		t1.join();// 注意：如果我们创建多线程 并不会保证哪一个先开始
	}

	class Base {
	public:
		void operator()(int x) {
			while (x-- > 0) {
				cout << x << endl;
			}
		}
		void fun(int x) {
			while (x-->0){
				cout << x << endl;
			}
		}
	};
	void Testfun2()
	{
		thread t(Base(), 10);
		t.join();
	}
	//static
	void Testfun3()
	{
		Base b;
		thread t(&Base::fun, &b, 10);
		t.join();
	}
	//-------------------------------------------------
	class background_task {
	public:
		void operator()()const {
			cout << "OK" << endl;
		}
	};
	void do_something(int& i) {
		cout << "Do_something" << endl;
	}
	struct func {
		int& i;
		func(int& i_) :i(i_) {};
		void operator()() {
			for (unsigned j = 0; j < 1000000; j++) {
				do_something(i);
			}
		}
	};
	void f() {
		int some_local_state = 0;
		func my_func(some_local_state);
		std::thread t(my_func);
		try {
//        do_something_in_current_thread();
		}
		catch (...) {
			t.join();//1
			throw;
		}
		t.join();//2

	}
	// try catch 只能捕获轻量级错误,所以如需确保线程在函数之前结束——查看是否因为线程函数使用了局部变量的引用，
// 以及其他原因——而后再确定一下程序可能会退出的途径，无论正常与否，可以提供一个简洁的机制，来做解决这个问题。

// 一种方式是使用“资源获取即初始化方式”(RAII，Resource Acquisition Is Initialization)，并且提供一个类，在析构函数中使用join()，
// std::thread支持移动的好处是可以创建thread_guard类的实例，并且拥有其线程的所有权。

	class thread_guard {
		std::thread& t;
	public:
		explicit thread_guard(std::thread &t_):t(t_){}

		~thread_guard() {
			if (t.joinable())
			{
				t.join();
			}
		}
		thread_guard(thread_guard const&) = delete;
		thread_guard& operator=(thread_guard const&) = delete;
	};
	void f1()
	{
		int some_local_state = 0;
		func my_func(some_local_state);
		std::thread t(my_func);
		thread_guard g(t);
		//    do_something_in_current_thread();
		//4
	}
	// 当线程执行到4处时，局部对象就要被逆序销毁了。因此，thread_guard对象g是第一个被销毁的，
// 这时线程在析构函数中被加入2到原始线程中。
// 即使do_something_in_current_thread抛出一个异常，这个销毁依旧会发生。
	void Testfun4()
	{
		background_task f;
		 //  thread t(f);       // ok
		 // t.join();
			//声明一个名为my_threadx的函数,这个函数带有一个参数(函数指针指向没有参数并返回background_task对象的函数)，返回一个std::thread对象的函数
		//    thread my_thread1(background_task());

			// 针对Most Vexing Parse问题解决如下：
		//    thread my_thread1((background_task())); // 多组括号
		//    my_thread1.join();
		//    thread my_thread2{background_task()};   // 新的初始化语法
		//    my_thread2.join();

		//    thread myThread([](){
		//        cout<<"ok"<<endl;
		//    });
		//    myThread.join();
			// 后台运行线程
		std::thread t(f);
		t.detach();
		assert(!t.joinable());

	}

	//----------------------------------------
	// join 注意点
	/**
 * 一旦线程开始，我们要想等待线程完成，需要在该对象上调用join()
 * 双重join将导致程序终止
 * 在join之前我们应该检查显示是否可以被join,通过使用joinable()
*/
	void run(int count) {
		while (count-- > 0) {


			cout << count << endl;
		}
		std::this_thread::sleep_for(chrono::seconds(3));
	}
	void Testrun()
	{
		cout << "main()" << endl;

		thread t1(run, 10);
		cout << "main()" << endl;
		t1.join();
		if (t1.joinable()) {
			t1.join();
		}
		cout << "main() after" << endl;
	}

	void Testautoptr()
	{
		auto_ptr<std::string>p1(new string("hello"));
		auto_ptr<string>p2;
		p2 = p1;//auto_ptr 不会报错 
		//p2剥夺了p1的所有权 当程序 运行P1将会报错  --内存崩溃的问题!

		//unique_ptr代替auto_ptr
		unique_ptr<string>p3(new string("hello"));
		unique_ptr<string>p4;
		//p4 = p3;  err!!!!!  比上面更安全
	}
	void Testfornt()
	{
		vector<int>v = { 0,1,2,3,4,5,6,7 };
		if (!v.empty())
		{
			v.front() = 10;
			cout << v[0] << endl;
			auto& it = v.back();
			it = 30;
			cout << v[7] << endl;
			auto it2 = v.back();//it2 不是引用 是一个值拷贝
			it2 = 10;//不会改变 容器的本身
			cout << v[7] << endl;

			//cout << v[20] << endl;//尽量使用at 而不是[]
			//cout << v.at(20) << endl;


		}
	}
	void TestIntor()
	{
		vector<int>v1 = { 0,1,2,3,3,4,5,6,7 };
		auto it = find(v1.begin(), v1.end(), 3);
		int i = it - v1.begin();
		cout << i << endl;
	}
	void TestVector()
	{
		vector<int>v;
		cout << v.capacity() << endl;
		v.push_back(1);
		v.push_back(1);
		v.push_back(1);
		v.push_back(1);
		v.push_back(1);

		cout << v.size() << endl;
		cout << v.capacity() << endl;
		//v.shrink_to_fit();
		cout << v.capacity() << endl;
		vector<int>v1;
		v1.reserve(50);
		cout << v1.capacity() << endl;

		for (int i = 0; i < 51; i++)
		{
			v1.push_back(i);
		}
		cout << v1.capacity() << endl;
	}
	void TestString()
	{
		string s = "Hello ", s2 = s;
		s2.insert(s2.size(), "World");
		s.append("World");
		cout << s << endl << s2 << endl;
		auto pos = s.find_first_not_of("ello");
		cout << pos << endl;

		//err!!!!!!!!!
		/*string name="CYLXGYCSY3";
		int pos = 0;
		string number="CYL";
		while ((pos = name.find_first_of(number, pos)) != string::npos) {
			cout << "found number at index:" << pos
				<< "element is" << name[pos] << endl;
			++pos;
		}*/
	}
	void TestStringChanger()
	{
		int i = 1314;
		string s = to_string(i);
		double d = stod(s);
		cout << s << endl << d << endl;
		string s2 = "pi = 3.1415926";
		d = stod(s2.substr(s2.find_first_of("+-.012346789")));
		cout << d << endl;

		vector<int>v = { 0,1,2,3,6,4,5 };
		fill(v.begin(), v.end(), 0);
		cout << v[2] << endl;
		//string sum=acc
	}
	void TestUnique()
	{
		vector<int>v = { 0,1,1,22,33,33,5,4,6 };
		sort(v.begin(), v.end());
		auto end_unique = unique(v.begin(), v.end());
		v.erase(end_unique, v.end());
		for (auto it = begin(v); it != end(v); it++) {
			cout << *it << " ";
		}
	}

}
namespace jj07
{
	void TestLambda()
	{
		vector<string>word = { "Hello","World","Perty","Girl" };
		stable_sort(word.begin(), word.end(),
			[](const string& a, const string& b)
			{return a.size() < b.size(); });
		for (auto i = word.begin(); i != word.end(); i++) {
			cout << *i << endl;
		}
		int sz = 3;
		auto wc = find_if(word.begin(), word.end(),
			[sz](const string& a) {return a.size() > sz; });
		cout << *wc << endl;
		auto count = word.end() - wc;
		//cout<<count<<" "<<make_
		for_each(wc, word.end(), [](const string& s) {cout << s << " "; });
		cout << endl;
		int a = 10, b = 20;
		auto sum=[](const int& a, int& b) {return a + b; };
		size_t v1 = 42;
		auto f = [v1] {return v1; };//+&
		v1 = 0;
		auto j = f();
		cout << j << endl;//42 +& 0
	}
	void biggies(vector<string>& words, vector<string>::size_type sz,
		ostream& os = cout, char c = ' ') {
		for_each(words.begin(), words.end(),
			[&, c](const string& s) {os << s << c; });

		for_each(words.begin(), words.end(),
			[=, &os](const string& s) {os << s << c; });
	}
	void TestBiggies()
	{
		vector<string> word = { "I","like","girl" };
		biggies(word, 3);
	}
	void TestMutable()
	{
		size_t v1 = 42;
		auto f = [v1]()mutable {return ++v1; };
		v1 = 0;
		auto j = f();
		cout << j << endl;//43
	}
	void TestMutable2()
	{
		size_t v1 = 42;
		auto f = [&v1]()mutable {return ++v1; };
		v1 = 0;
		auto j = f();
		cout << j << endl;//1
	}
	void TestTransform()
	{
		vector<int>vi = { 1,-1,2,-2,3,-3 };
		auto p=transform(vi.begin(), vi.end(), vi.begin(),
			[](int i) {return i > 0 ? i : -i; });
		cout << *p << endl;
	}
}
int main()
{
	jj07::TestTransform();
	//jj07::TestMutable2();
	//jj07::TestMutable();
	//jj07::TestBiggies();
	//jj07::TestLambda();
	//jj061::TestUnique();
	//jj061::TestStringChanger();
	//jj061::TestString();
	//jj061::TestVector();
	//jj061::TestIntor();
	//jj061::Testfornt();
	//jj061::Testfun();
	//jj061::Testfun4();
	//jj061::Testfun3();
	//jj061::Testfun2();
	//jj061::Testfun1();
	//jj061::Testfun();
	//jj061::TestTuple();
	//jj04::TsetPrintTuple();
	//jj04::TestMaximum();
	//jj04::TestPrintX();
	//jj04::TestA();
	//jj04::test1();
	//jj03::test1();
	//jj03::testloot();
	//jj03::testmap();
	//jj02::testTime();
	//jj02::testX();
	//jj02::testTime();
	//jj02::test();
	//jj02::testVirtual();
	//jj01::testloet();
	//jj01::testcomplex();
	//jj01::Testcout();
	//jj05::TestAlloc();
	//jj05::Test1();
	//tt04::TestS1();
	//tt04::Test2();
	//tt04::Test1();
	//tt04::testmaximum();
	//tt04::testmax();
	//tt04::TestPrintf();
	//tt04::testvariadicTempaltes();
	//tt03::Test2();
	//tt03::test7();
	//tt03::test6();
	//tt03::test6_sma();
	//tt03::test4();
	//tt03::test3();
	//tt03::test1();
	//tt02::test2();
	//tt02::vectext3();
	//tt02::vectext2();
	//tt02::vectext1();
	//tt02::test01();
	//tt01::test1();
	//tt01::test2();
	//tt01::test3();
	//tt01::test4();
	//tt01::test6();
	//t01::stringtest1();
	//tt01::stringtest2();
	//tt01::stringtest3();
	//tt01::stringtest4();
	//tt01::stringtest5();
	return 0;
}