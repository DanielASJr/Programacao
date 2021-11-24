print("Solicitar o sexo do usuário")

sexo = str(input('Digite o sexo: '))

while ((sexo!='F' and sexo!='f') and (sexo!='M' and sexo!='m')):
 print("Erro! Somente F ou M")
 sexo = str(input("Digite novamente: "))

if sexo =='m' or sexo=='M':
 print("Sexo Masculino") 
else:
 print("Sexo Feminino ")