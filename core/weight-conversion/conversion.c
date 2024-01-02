#define POUNDS_PER_KILO 2.22
#define OUNCES_PER_POUND 16
#define GRAMS_PER_KILO 1000

float pounds_to_kilo(int pounds) {
    return pounds / POUNDS_PER_KILO;
}

int pounds_to_ounces(int pounds) {
    return pounds * OUNCES_PER_POUND;
}

float kilo_to_grams(float kilos) {
    return kilos * GRAMS_PER_KILO;
}
