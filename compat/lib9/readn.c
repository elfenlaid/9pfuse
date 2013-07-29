#include <lib9.h>
#include <errno.h>

long
readn(int f, void *av, long n)
{
	char *a;
	long m, t;

	a = av;
	t = 0;
	while(t < n){
		while ((m = read(f, a+t, n-t)) == -1 && (errno == EAGAIN || errno == EINTR))
			continue;
		if(m <= 0){
			if(t == 0)
				return m;
			break;
		}
		t += m;
	}
	return t;
}
