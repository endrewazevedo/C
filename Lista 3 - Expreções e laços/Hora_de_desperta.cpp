#include <stdio.h>

int main(void){
	int h1, m1, s1, h2, m2, s2;
	
	scanf("%d%d%d%d%d%d", &h1, &m1, &s1, &h2, &m2, &s2);
	s2 += s1;
	if(s2 > 59){
		s2 = s2 % 60;
		m1++;
	}
	m2 += m1;
    if(m2 > 59){
        m2 = m2 % 60;
        h1++;
    }
	h2 += h1;
    if(h2 > 23){
        h2 = h2 % 24;
    }

	printf("%02d:%02d:%02d", h2, m2, s2);
}