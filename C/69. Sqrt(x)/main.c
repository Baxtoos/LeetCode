const double tolerancia = 0.0001;

int mySqrt(int x) {
    int n = x; //estimativa
    int nAnt;
    do {
        nAnt = n;
        n = (n + x / n) / 2.0;
    } while (fabs(n - nAnt) > tolerancia); //funcao recursiva que repete ate chegar a uma boa apresentacao

    return n;
}

//fabs - arredonda o float para inteiro mais proximo