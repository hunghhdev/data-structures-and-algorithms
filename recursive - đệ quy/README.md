# Đệ quy
 - Một hàm được gọi là đệ quy nếu một lệnh trong thân hàm gọi đến chính hàm đó
 - Đệ quy giúp giải quyết bài toán theo cách nghĩ thông thường một cách tự nhiên
 - Đệ quy phải xác định được **điểm dừng**. Nếu không xác định chính xác thì làm bài toán bị sai và có thể bị lặp vĩnh viễn (Stack Overhead)

### VD
```
int giaiThua(int n)
{
    if(n <= 1) 
        return(1);
    return n*giaiThua(n-1);
}
```

 - Cơ chế hoạt động của đệ qui tuân thủ theo LIFO(Last In Fist Out), còn gọi là cơ chế Stack.
 