int aa = 0;
int b = 1;
int c = 100;
float f = 2.2;
b = c % f;

bool loop(int n, int m, bool k);

bool loop(int n, int m, bool k) {
    while (n > m) {
        n--;
    }
    return true;
}
