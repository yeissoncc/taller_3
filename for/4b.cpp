# include <stdio.h>

int main(){
	float mayor=0, menor=9999, i,temp, media;
	for(i=0;i<24;i+=4) {
		printf("ingrese temperatura %0.0f \n",i);
		scanf("%f",&temp);
		if(temp>mayor) {
			mayor=temp;
		}
		if(temp<menor) {
			menor=temp;
		}
		media+=temp/6;
	}
printf("mayor %0.2f \n",mayor);

printf("mayor %0.2f \n",menor);

printf("mayor %0.2f \n",media);

	
	return 0;	
}

