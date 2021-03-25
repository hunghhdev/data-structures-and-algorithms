# Đệ quy
 - Một hàm được gọi là đệ quy nếu một lệnh trong thân hàm gọi đến chính hàm đó
 - Đệ quy giúp giải quyết bài toán theo cách nghĩ thông thường một cách tự nhiên
 - Đệ quy phải xác định được **điểm dừng**. Nếu không xác định chính xác thì làm bài toán bị sai và có thể bị lặp vĩnh viễn (Stack Overhead)

#### VD
```
int giaiThua(int n)
{
    if(n == 1) 
        return 1;
    return n*giaiThua(n-1);
}
```

 - Cơ chế hoạt động của đệ qui tuân thủ theo LIFO(Last In Fist Out), còn gọi là cơ chế Stack.
 
## Đệ quy tuyến tính
 - Là trường hợp hàm chỉ gọi lại chính nó 1 lần. tương tự vd trên
 - Khi kết thúc đệ quy. Sẽ lấy giá trị trong stack theo thứ tự vào sau ra trước (Last in first out), đồng thới giải phóng bộ nhớ. và kết thúc giải thuật

## Đệ quy đuôi
 - là một trường hợp đặc biệt của đệ quy tuyến tính, Giống như tên của nó, đệ quy đuôi là hàm thực hiện gọi đệ quy ở sau cùng. 
 #### VD
 ```
 int gcd(int m, int n)
 {
     int r;
     if (m < n) return gcd(n, m);
     r = m % n;
     if (r == 0) return n;
     else return gcd(n, r);
 }
 ```
 - Nếu không có chỉ thị lệnh hay biến sau khi gọi đệ quy thì sẽ k lưu vào stack.

## Đệ quy nhị phân - Binary recursive
- Là dạng đệ quy 2 lần gọi chính nhó. Hiểu đơn giản là trong một hàm đệ quy, mà có dòng lệnh gọi chính hàm đó hai lần.
#### VD
```
int fib(int n)
{
    if(n <= 2) return 1;
    return fib(n - 1) + fib(n - 2);
}
```

## Đệ quy đa tuyến - Exponential recursion
 - Một hàm được gọi là đệ quy đa tuyến nếu mỗi lần gọi đệ quy nó phát sinh ra khoảng n lần gọi đệ quy khác. Thông thường câu lệnh gọi đệ quy được đặt trong các vòng lặp.

```
void daTuyen(int i, int n, int *X)
{
    int val;    
    for (val = 0; val < 2; val++)
    {
        X[i] = val;
        if (i == (n-1))      
        {
            int j;
            for(j = 0; j < n; j ++)     
            {
                cout<< X[j];
            }
            cout<<"\n";
        }
        else          
        {
            daTuyen(i+1, n, X); 
        }
    }
}
```
