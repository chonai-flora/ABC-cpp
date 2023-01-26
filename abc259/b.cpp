#include <cstdio>
#include <cmath>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);
    double a, b, d;
    scanf("%lf%lf%lf", &a, &b, &d);
    d *= .01745329251994329547;
    printf("%.20lf %.20lf\n",
           a * cos(d) - b * sin(d), a * sin(d) + b * cos(d));
    return 0;
}