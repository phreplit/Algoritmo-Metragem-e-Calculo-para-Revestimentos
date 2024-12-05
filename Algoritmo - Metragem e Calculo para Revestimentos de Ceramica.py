
'''  Author: PHNO - Tecnologo | Pos-Graduado
    Data Release: 29/11/2024
    Versao Codigo: 0.0.0.2v
    Replit: @PHNO, @PHREPLIT
    E-mail: phreplit@gmail.com  '''

''' Algoritmo: Metragem e Calculo para Revestimentos de Ceramica, algoritmo desenvolvido em python, desenvolvido para profissionais da engenharia civil e areas correlatas. '''

import os # import lib - os clear
import sys
import json

def reset_text():
    os.system('cls' if os.name=='nt' else 'clear')

op = 0 
while op != -1:
  print('')
  print(' Metragem e Calculo para Revestimentos ')
  print('')
  print('')
  print('1. Calcular Metro Quadrado de um Comodo')
  print('2. Calcular Quantidade de Ceramicas por M. Q.')
  print('3. Calcular Quantidade de Caixas de C. por M. Q.')
  print('4. Sair')
  print('')
  print('[8] Info')
  print('[9] Sobre')
  print('')
  op = int(input('Escolha uma opcao: '))
  if op == 1:
   print('')
   v1 = int(input('Digite o comprimento do comodo: '))
   print('')
   v2 = int(input('Digite a largura do comodo: '))
   result = v1 * v2
   print('')
   print('O comodo tem {} metros quadrados.'.format(result))
   print('')
   print('Teclar enter para retornar ao menu...')
   a1 = str(input(''))
   reset_text()
  elif op == 2:
   v4 = int(4)
   print('')
   v3 = int(input('Digite quantos metros quadrados tem o comodo: '))
   print('')
   result2 = v3 * v4
   print('')
   print('Para alicerçar {} M. Q. de um comodo sera necessario, {} ceramica(s).'.format(v3,result2))
   print('')
   print('Teclar enter para retornar ao menu...')
   a2 = str(input(''))
   reset_text() # clear screen - lib os
  elif op == 3:
   cx1 = int(8)  
   v6 = int(4)
   print('')
   v5 = int(input('Digite quantos metros quadrados tem o comodo: '))
   print('')
   resultado = v5 * v6
   calcqtdcaixa = resultado / cx1
   print('')
   print('Para alicerçar {} M. Q. de um comodo sera necessario, {} caixas de ceramica.'.format(v5,calcqtdcaixa))
   print('')
   print('Teclar enter para retornar ao menu...')
   a2 = str(input(''))
   reset_text() # clear screen - lib os
  elif op == 4:
   print('')
   print('Algoritmo Finalizado!')
   print('')
   break
  elif op == 8:
   reset_text()
   print('')
   print('Info')
   print('')
   print("Para Calcular o Metro Quadrado de um Comodo:")
   print("Calculamos o comprimento x a largura, veja como exemplo um comodo com (3,70 metros de comprimento x 2,70 metros de largura) temos que C x L = a 10MQ.")
   print("")
   print("Para Calcular Revestimentos de Ceramica:")
   print("Com base em uma placa ceramica de 50cm x 50cm entao temos que 2 x 2 placas ceramicas = 4 placas ceramicas o que equivale a 1MQ, esse sera o padrao do calculo 4 placas ceramicas = 1MQ, entao tem se que Quaisquer (N) metros quadrados x 4 = a (N) quantidade de placas por metro quadrado.")
   print("")
   print("Para Calcular Quantidade de Caixas de Ceramica: ")
   print("Sabendo que cada caixa tem 8 placas de ceramica, entao para cada 1 caixa de ceramica temos 2mq, e ent o Quaisquer (N) metros quadrados x 4(um mq) = (N) quantidade de ceramicas e esse resultado dividido por uma caixa (8) = a (N) quantidade de caixas de ceramica para alicerçar um comodo.")
   print('')
   print('Informacao Importante: ')
   print('')
   print('Algoritmo desenvolvido com variaveis inteiras, nao permite numero e virgula - ex: 2,90 metros mude para 3 metros.')
   print('')
   print('Teclar enter para retornar ao menu...')
   a5 = str(input(''))
   reset_text()
  elif op == 9:
   reset_text()
   print('')
   print('Algoritmo: Metragem e Calculo para Revestimentos')
   print('')
   print('Author: PHNO')
   print('Data Release: 29/11/2024')
   print('Versao Codigo: 0.0.0.2v')
   print('Replit: @PHNO, @PHREPLIT')
   print('E-mail: phreplit@gmail.com')
   print('')
   print('Teclar enter para retornar ao menu...')
   a5 = str(input(''))
   reset_text()
  else: 
   print('')
   print('Erro. Opcao Incorreta!')
   print('')
   print('Teclar enter para retornar ao menu...')
   a6 = str(input(''))
   reset_text()
