f = open("in.txt",'r').read().split('\n')
f1 = open("out.txt", 'w')

for line in f:
	line = line.replace("\"", "\\\"" )
	line = line.replace("\\n", "\\\\n")
	f1.write("Keyboard.print(\"" + line + "\");" + "\n")
	f1.write("delay(10);" + "\n")
	f1.write("Keyboard.write(0xB0);" + "\n")
	f1.write("delay(10);" + "\n")
