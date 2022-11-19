import os

test = 1
while True:
    os.system("python3 gen.py > input.txt")
    os.system("./solve < input.txt > output.txt")
    os.system("./slow < input.txt > correct.txt")
    output = open("output.txt").read()
    correct = open("correct.txt").read()
    if output != correct:
        print("Error on test", test)
        break
    print("Test", test, "OK")
    test += 1
    if test == 101:
        break
