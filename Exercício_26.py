num = int(input('Digite um número para a tabuada: '))
while(num<=0):
    print("Erro! Somente números de 1 a 10")
    num = int(input('Digite um número para a  tabuada: '))
i = 1
while(i<11):
    r = num * i
    print(f'{num} X {i} = {r}')
    i = i + 1 