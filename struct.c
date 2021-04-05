#include <stdio.h>
#include <inttypes.h>

struct _Rational {
    int32_t Top;
    int32_t Bottom;
};
typedef struct _Rational Rational;

Rational* add(const Rational* left, const Rational* right) {
    Rational* sum = malloc(sizeof(Rational));

    sum->Top = left->Top * right->Bottom + left->Bottom * right->Top;
    sum->Bottom = left->Bottom * right->Bottom;

    normalize(sum);
    
    return sum;
}

Rational* subtract(const Rational* left, const Rational* right) {
    Rational* sum = malloc(sizeof(Rational));

    sum->Top = left->Top * right->Bottom - left->Bottom * right->Top;
    sum->Bottom = left->Bottom * right->Bottom;

    normalize(sum);
    
    return sum;
}

Rational* multiply(const Rational* left, const Rational* right) {
    Rational* sum = malloc(sizeof(Rational));

    sum->Top = left->Top * right->Top;
    sum->Bottom = left->Bottom * right->Bottom;

    normalize(sum);

    return sum;
}

Rational* divide(const Rational* left, const Rational* right) {
    Rational* sum = malloc(sizeof(Rational));

    sum->Top = left->Top * right->Bottom;
    sum->Bottom = left->Bottom * right->Top;

    normalize(sum);

    return sum;
}

Rational* normalize(const Rational* input) {
    int32_t n1, n2, gcd, i;
    Rational* result = malloc(sizeof(Rational));

    for(i = 1; i <= n1 && i <= n2; ++i) {
        if (n1 % i == 0 && n2 % i == 0)
            gcd = i;
    }

    result->Top = input->Top / gcd;
    result->Bottom = input->Bottom / gcd;

    return result;
}