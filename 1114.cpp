#include<iostream>
#include<string>
using namespace std;

int max_match(string s1, string s2)
{
	int len1=s1.length(), len2=s2.length();
	int l=0, k=0;
	int sum=0;
	int max=0;
	for ( int i=0;i<len1;i++)
	{
		for ( int j=len2-1;j>=0;j--)
		{
			k = i;
			l = j;
			sum = 0 ;
			while(s1[k]==s2[l] && k<len1 && l<len2)
			{
				sum++;
				k++;
				l++;
			}
			if (sum>max)
			{
				max = sum;
			}
		}
	}
	return max;
}

int main()
{
	string s1,s2;
	cin >> s1 >> s2;
	cout << max_match(s1,s2) << endl;
}
 