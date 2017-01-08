/*
* This is the setup of the program.
* This turns on the command prompt, and executes a series of python commands to create the log file, which is constantly updated.
* The first two operations are ignored on non-windows systems.
*/

void this_setup() {
  Keyboard.begin();
  delay(2000);
  Keyboard.press(0x83);
  // 0x83 is the Windows key
  delay(100);
  Keyboard.press('r');
  delay(100);
  Keyboard.releaseAll();
  delay(1000);
  Keyboard.print("cmd");
  delay(100);
  Keyboard.write(0xB0);
  delay(1000);
  Keyboard.print("touch times.txt");
  delay(100);
  Keyboard.write(0xB0);
  delay(1000);
  Keyboard.print("py");
  delay(1000);
  Keyboard.write(0xB0);
  delay(1000);
  Keyboard.print("import datetime");
  delay(10);
  Keyboard.write(0xB0);
  delay(1000);
  Keyboard.print("def door(term):");
  delay(10);
  Keyboard.write(0xB0);
  delay(100);
  Keyboard.print(" with open(\"times.txt\", \"a\") as myfile:");
  delay(10);
  Keyboard.write(0xB0);
  delay(10);
  Keyboard.print("  string = \"door \" + term + \" at \" + str(datetime.datetime.now()) + \"\\n\"");
  delay(10);
  Keyboard.write(0xB0);
  delay(10);
  Keyboard.print("  myfile.write(string)");
  delay(10);
  Keyboard.write(0xB0);
  delay(10);
  Keyboard.print("  myfile.close()");
  delay(10);
  Keyboard.write(0xB0);
  delay(100);
  Keyboard.write(0xB0);
  delay(100);
}
