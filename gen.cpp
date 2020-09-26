#include<bits/stdc++.h>
using namespace std;
int rand(int a, int b) {
	return a + rand() % (b - a + 1);
}
int main(int argc,char* argv[]) {
	srand(atoi(argv[1]));
	int n = rand(2,30);
	printf("%d\n",n);

	for(int i=0;i<n;++i){
        int x = rand(1,1000);
        printf("%d ",x);

	}

	puts("");

}
