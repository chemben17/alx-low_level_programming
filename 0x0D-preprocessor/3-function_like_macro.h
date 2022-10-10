#ifndef ABS_
#define ABS_
#define ABS(x) ({ \
		if (x > 0) \
			x *= 1; \
		else \
			x *= -1; \
		x; \
		}) \
#endif
