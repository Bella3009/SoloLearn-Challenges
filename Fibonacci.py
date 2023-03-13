num = int(input())
num_list = [0,1]

def fibonacci(n):
    if n <= 1:
        print(num_list[n])
    else:
        print(0)
        print(1)
        for r in range(2,n):
            a = num_list[-1]
            b = num_list[-2]
            c = a + b
            num_list.append(c)
            print(c)

fibonacci(num)
