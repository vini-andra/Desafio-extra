int main( ) {
	float n1, n2, ppd, n3, eu, soma;
	int f;
	
	printf("digite a sua n1 , n2 e ppd: ");
	scanf("%f %f %f",&n1 ,&n2 ,&ppd);
	
	if (n1 < 0 || n1 > 4.5 || n2 < 0 || n2 > 4.5 || ppd < 0 || ppd > 1) {
		return 3;
	}
	
	printf("fez o EU? (1 = s e 0 = n)");
	scanf("%d", &f);
	
	if (f == 1){
		printf("nota no EU:");
		scanf("%f", &eu);
	}
	
	if (eu < 0 || eu > 1) {
		return 3;
	}
	
	printf("fez a n3? (1 = s e 0 = n)");
	scanf("%d", &f);
	
	if (f == 1) {
		printf("nota na n3:");
		scanf("%f", &n3);
	}
	
	else if (f == 0) {
		soma = n1 + n2 + ppd + eu;
		
		if (soma < 7) {
			printf("%f reprovado!", soma);
		}
		
		else if (soma > 7) {
			if (soma < 10) {
				printf("%f aprovado!", soma);
			}
			
			else if (soma > 10) {
				printf("10 aprovado!");
			}
		}
		return 0;	
	}
	
	if (n3 < 0 || n3 > 4.5) {
		return 3;
	}
	
	if (n1 < n2) {
		n1 = n3;
	}
	
	else {
		n2 = n3;
	}
	
	soma = n1 + n2 + ppd + eu;
	
	if (soma < 7) {
		printf("%f reprovado!", soma);
	}
	
	else if (soma > 7) {
		if (soma <= 10){
			printf("%f apriovado!", soma);
		}
		
		else if (soma > 10 ) {
			printf("10 aprovado!");
		}
	}
	return 0;
}
