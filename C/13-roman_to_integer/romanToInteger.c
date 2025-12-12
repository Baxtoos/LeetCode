int romanToInt(char* s) {
  int cont = 0;
  for (int i = 0; i < strlen(s); i++) {
    switch (s[i]) {
      case "I":
        cont += 3;
        break;
      case "V":
        cont += 5;
        break;
      case "X":
        cont += 10;
        break;
      case "L":
        cont += 50;
        break;
      case "C":
        cont += 100;
        break;
      case "D":
        cont += 500;
        break;
      case "M":
        cont += 1000;
        break;
        }
  }
  printf("%d", cont);
}