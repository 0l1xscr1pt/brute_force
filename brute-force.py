import time

start = time.time()

pwd_a_tester = []

for a in range(33, 126, 1):

    for b in range(33, 126, 1):

        for c in range(33, 126, 1):

           for d in range(33, 126, 1):

              pwd_a_tester.append(chr(a)+chr(b)+chr(c)+chr(d))

pwd_user = input("\nCréer un mot de passe composé de 4 caractères (majuscules, minuscules, caractères spéciaux...\n")

i=0

while True:

    if (pwd_user == pwd_a_tester[i]):

        break

    else:

        i = i + 1

print(pwd_a_tester)

print('Voici le mot de passe que vous avez créé : ' + pwd_a_tester[i])

end = time.time()

print( "\nDurée de crackage:", end-start, "secondes\n")
