// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
    if (a == b) {
        return a;
    }
    if (a > b) {
        int s = a;
        a = b;
        b = s;
    }
    return gcd(a, b - a);
    // поместить сюда текст реализации алгоритма (на С++)
}
