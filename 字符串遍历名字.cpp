//#include<stdio.h>
//int main()
//{
//	char arr[5][100] = {
//		"xiaoshishi","xiaodandan","xiaojingjing","xiaolili","xiaolele"
//	};
//	int len = sizeof(arr) / sizeof(arr[0]);
//
//	for (int i = 0; i < len; i++)
//	{
//		char* p1 = arr[i];//p1��xiaoshishi��Ԫ�ص�ַ
//		char *p2 = p1;//p2��x��Ԫ�ص�ַ
//	
//		while (1)
//		{
//			char p3 = *p2;//ע��ô���λ���Ա㽫p3���иı�
//			if (p3== '\0')
//			{
//				break;
//			}
//			printf("%c", p3);
//			p2++;
//		}
//		printf("\n");
//	}
//
//	return 0;
//
//}