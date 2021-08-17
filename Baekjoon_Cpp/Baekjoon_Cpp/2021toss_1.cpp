#include <cmath>

long long solution(long long orderAmount, long long taxFreeAmount, long long serviceFee) {
    // orderAmount : 주문금액
    // taxFreeAmount : 비과세금액
    // serviceFee : 봉사료        

    if (orderAmount == 0)
        return 0;

    if (orderAmount - taxFreeAmount == 1)
        return 0;

    if (orderAmount - taxFreeAmount - serviceFee == 1)
        return 0;

    return std::ceil((orderAmount - taxFreeAmount - serviceFee) / (long double)11);
}