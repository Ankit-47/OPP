//Wap to findd sum oof 4 number using user defined function
    #include<iostream>
    using namespace std;

    int sum(int a, int b, int c, int d);

    int main()
{
    int x, y, z, w;
    cout << "Enter the numbers to find the sum: ";
    cin >> x >> y >> z >> w;
    int result = sum(x, y, z, w);
    cout << "Sum of entered numbers is = " << result;
    return 0;
}

    int sum(int a, int b, int c, int d)
{
    return a + b + c + d;
}
