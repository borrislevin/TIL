int add(int a, int b) { return a + b; }

void foo(  int(*f)(int, int) )
{
}

int main()
{
	foo(add); 

	foo( ? );

	int n1 = add(1, 2);
}