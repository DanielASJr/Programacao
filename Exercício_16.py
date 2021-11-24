a = int(input("Digite a medida 1: "))
b = int(input("Digite a medida 2: "))
c = int(input("Digite a medida 3: "))

s1= a+b
s2= b+c
s3= a+c

if (s1>c and s2>a and s3>b):
    if (a==b and b==c):
        print ("Tratam-se de medidas de um TRIÂNGULO EQUILÁTERO!")

    else:
        if (a!=b and b!=c and a!=c):
            print ("Tratam-se de medidas de um TRIÂNGULO ESCALENO!")

        else:
            print ("Tratam-se de medidas de um TRIÂNGULO ISÓSCELES!")


else:
    print ("Não são medidas de um triângulo!")