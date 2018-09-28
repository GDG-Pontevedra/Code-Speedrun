# Code Speedrun #0 - Python

from math import floor

def convertMove(m):
	days = 0

	# Para cada letra do primeiro movemento...
	for i in range(len(m[0])):

		# Obtense a distancia entre a letra do primeiro
		# movemento e a letra do segundo
		daysOfChar = ord(m[1][i]) - ord(m[0][i])

		# Se a letra do primeiro movemento vai despois 
		# ca letra do segundo, recórrese todo o
		# alfabeto
		if daysOfChar < 0: daysOfChar += 26

		# Súmanse os días nos que se incrementa a letra en
		# 13, e cando non se poida máis, os días nos que se
		# incrementa en 1
		days += daysOfChar % 13 + floor(daysOfChar / 13)

	return days

# Probas
print(convertMove(["ABCT", "PBDI"])) # 7
print(convertMove(["MZB", "WEY"])) # 26
print(convertMove(["DIADTL", "OUEGMD"])) # 43