#include < stdio.h>
void main()
{
	// 비교연산자 (6가지)
	// 논리연산자 (&& , || , !)  
	// 1. &&			 >>> and :  a  &&  b :  a도 참이고 b도 참이면 , 참 
	// 2. || (shift + \) >>> or  :  a  ||  b :  a가 참이거나 b가 참이면 , 참 
	// 3. !              >>> not : !a        :  a가 거짓이면 , 참
	int num1 = 10; //축약형
	int num2 = 20;
	int num3 = 30;
	int num4 = 40;
	//num1 = ?? , num2 = ?? , num3 = ?? ,num4 =??
	if(num1 < num2 && num3 >num4 ){
		printf("참1\n");
	}
	//num1 = ?? , num2 = ?? , num3 = ?? ,num4 =??
	if(num1 < num2 || num3 > num4){
		printf("참2\n");
	}
	//num1 = ?? , num2 = ?? , num3 = ?? ,num4 =??
	if(!(num1 <num2) && !(num3 > num4)){
		printf("참3\n");
	}
	//문제 a) 위의 식이 모두 출력되도록 해보세요.
	//문제 1) 점수 0~99 까지 3개를 입력받고 총합과 평균을 구한다음 평균이 60 넘으면 합격 미만이면 불합격
	//문제 2) (조건) 한과목이라도 60미만이면 불합격 (70 70 59)==> 불합격
}