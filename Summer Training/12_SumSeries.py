def series(num):
    if(num==1):
        return 1
    else:
        return (1/(num))+series(num-1)

num = int(input("Enter the number till which you want to see the sum of the series: "))

print(f'The sum of the series is: {series(num)}')