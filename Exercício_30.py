n1=1
n2=1

print("Os primeiros 30 numeros da sequencia de Fibonacci sao: ")
print("", n1, "\n", n2)

for i in range (2, 30, 1):
    soma=n1+n2 
    print("", soma)
    n1=n2
    n2=soma