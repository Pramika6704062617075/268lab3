#include<stdio.h>
int main () {
	int h , m , s , plusm , g , g2 , g3 ,h1,h2,h3,h4,h5,m9,m8,m10 ,m2 , m4; 
	scanf("%d:%d:%d" ,&h,&m,&s ) ;
	printf("Hour:%d\nMinute:%d\nsecond:%d\n" , h,m,s);
	printf("Next minutes: ") ;
	scanf("%d" , &plusm ) ;
	
	if (plusm>=60) {
	
		h1 = h + 1 ;
		m8 = plusm - 60;
		m9 = m8 + m;
		if (m9 >= 60) {
			h2 = h1 + 1;
			m10 = m9 - 60;
			printf("Hour:%d\nMinute:%d\nsecond:%d\n" ,h2 ,m10 , s) ;
		}
		
		else
		printf("Hour:%d\nMinute:%d\nsecond:%d\n" ,h1 ,m9 , s) ;	
}
	else {                  // 59 58 57
	    m2 =  m + plusm ;
	    if (m2 >= 60) {
	    	h3 = h + 1 ;
	    	m4 = m2 - 60 ;
	    	printf("Hour:%d\nMinute:%d\nsecond:%d\n" ,h3 ,m4 , s) ;
		}
		else
		printf("Hour:%d\nMinute:%d\nsecond:%d\n" ,h ,m2 , s) ;	
}

	return 0 ;
}
