print('Tabuada do 5')
 
num = int(input("Digite o numero 5 para obter a tabuada: "))
 
while(num != 5):
    print("Não pode esse número!")
    num = int(input("Digite um outro numero para obter a tabuada: "))
 
i = 1
 
while(i < 11):
    r = num * i
    print(f'{num} X {i} = {r}')
    i = i + 1