P = float(input('Digite o peso em Kg: '))
A = float(input('Digite a altura em m: '))
Sexo = str(input('Digite o sexo M ou F: '))

Imc = P/(A*A)

print(f"O IMC é: {Imc:.2f}")


if ((Sexo == 'f') or (Sexo =='F')):
 print(f"Resultado para o sexo feminino:")
elif Imc<19:
 print(f"Abaixo do peso!")
elif Imc>=19 and Imc<24:
 print(f"Peso ideal")
else:
 print(f"Acima do peso!")


if ((Sexo == 'm') or (Sexo =='M')):
 print(f"Resultado para o sexo masculino:")
if Imc<20:
 print(f"Abaixo do peso")
elif Imc>=20 and Imc<25:
 print(f"Peso ideal")
else:
 print(f"Acima do peso!")