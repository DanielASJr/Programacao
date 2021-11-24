num = int(input('digite um numero para a tabuada '))
num = 1
i = 1
while(i<=19):
    i = i + 1
    for num in range(1, 11, 1):
        r = num * i
        print(f'{i} X {num} = {r}')
        num = num + 1
        if(num>10):
            print("\n")