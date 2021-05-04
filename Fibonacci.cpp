int Fibonacci(int n)
{
    if(n == 1 || n == 2) return 1;
    else return Fibonacci(n - 1) + Fibonacci(n - 2);
}

int Fibonacci_2(int n, int first, int second)
{
    if(n <= 1) return first;
    else return Fibonacci_2(n-1, second, first + second);
}