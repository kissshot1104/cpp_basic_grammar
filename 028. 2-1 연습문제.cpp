//다음 두 함수의 우너형에서 잘못된 점은 무엇인지 답하세요 

/*

1. int test_func(int nparam1 = 5, int nparam2, int nparam3 = 10)
2. int test_func(int nparam1 = 5,int nparam2)


1. 중간에 nparam2의 디폴트값이 정해지지않았다.
2. 디폴트 값을 정해놓는 순서는 왼쪽부터가 아닌 오른쪽부터이다.
*/