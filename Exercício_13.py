base = float(input("Digite o valor da base: "))
altura = float(input("Digite o valor da altura: "))

area = base * altura

print(f"o valor da area do terreno e de : {area:.2f} ")

if(area > 100):
    print(f"terreno grande")
else:
    print(f"terreno pequeno")