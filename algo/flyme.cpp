#include <stdio.h>
#include <math.h>

int main() {
	int t;
	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		long long int x, y, dist = 0, k = 0, cnt = 0;
		scanf("%lld %lld", &x, &y);
		dist = y - x;
		
		k = sqrt(dist);

		if (k*k != dist) {
			dist -= k * (k + 1) / 2;
			cnt += k;
		}

		while (dist) {
			if (k*k == dist) {
				dist -= k * k;
				cnt += 2 * k - 1;
			}
			else if (k*(k + 1) / 2 == dist) {
				dist -= k * (k + 1) / 2;
				cnt += k;
			}
			else if (k*(k + 1) / 2 < dist) {
				dist -= k;
				cnt++;
			}
			else if (((k)*(k + 1) / 2) > dist) {
				k--;
			}
		}

		printf("%lld\n", cnt);
	}

	return 0;
}