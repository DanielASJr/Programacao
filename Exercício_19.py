a=float(input ('digite a aceleração          '))
t=float(input ('digite o tempo de percurso   '))
V0=float(input ('digite a velocidade inicial  '))

V=(V0+(a*t))

if(V>120):
    print(f" veículo muito rápido ")

elif((V<=120) and (V>80)):
    print(f"veículo rápido ")

elif((V>60) and (V<=80)):
    print("velocidade de cruzeiro")

elif((V<=60) and (V>40)):
    print("velocidade permitida")

else:
    print("veículo muito lento")