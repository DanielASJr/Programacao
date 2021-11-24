n = float (input('Digite um valor positivo: '))

while (n <= 0):
    print ("Apenas números positivos. ")
    n = float (input(' Digite novamente:')) 

A = float (input('Digite o primeiro nº: '))
B = float (input('Digite o segundo nº: '))


while (B < A):
    print ("O segundo valor deve ser maior que o primeiro. ")
    B = int (input(' Digite novamente:')) 

i= B        

while (i >= A):
    T= n*i
    
    print(f'{n} X {i} = {T}')
    i= i-1