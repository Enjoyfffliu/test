//## ��Ŀ 1: �ַ��������뵥��ͳ��
//
//### ��Ŀ����
//��дһ�������û�����һ��Ӣ�ľ��ӣ�������Ҫͳ�Ʋ����������Ϣ�� <br / >
//
//�����е��ʵ������� <br / >
//����������ʼ��䳤�ȡ� <br / >
//������ÿ�����ʵĳ��ȣ������յ��ʳ��Ƚ������������� <br / >
//
//### ����Ҫ��
//����һ��Ӣ�ľ��ӣ�����֮���ÿո�ָ��������Ծ��.������ <br / >
//ͳ�ƾ����еĵ���������ÿ�����ʵĳ��ȡ� <br / >
//�������ʼ��䳤�ȡ� <br / >
//���յ��ʳ��������������е��ʡ� <br / >
//
//### �������
//����һ��Ӣ�ľ��ӡ�<br / >
//������ʵ�����������ʼ��䳤�ȡ�ÿ�����ʵĳ��ȣ���˳������<br / >
#include<iostream>
using namespace std;
#include <string>
#define SIZE 9999
#include<vector>
#include <algorithm>
bool myCompare(const string&a, const string& b)
{
	return a.size() > b.size();
}
class WordProcess
{
public:
	WordProcess()
	{
		spaceNum = 0;
		wordLen = NULL;
		wordPos = NULL;
	}
	void find_Word()
	{
		//������ľ��Ӵ��뵽mySentence
		cout << "����һ��Ӣ�ľ��ӣ�����֮���ÿո�ָ��������Ծ��.����" << endl;
		cin.get(mySentence, SIZE);
		int i = 0;
		string currentWord;
		while (mySentence[i] != '.')
		{
			if (mySentence[i] == ' ')
			{
				v.push_back(currentWord);
				currentWord.clear();
//				spaceNum++;
			}
			else
			{
				currentWord += mySentence[i];
			}
			i++;
		}
		if (mySentence[i] == '.')
		{
			v.push_back(currentWord);
			currentWord.clear();
		}
	}
	void algorithmSort()
	{
		sort(v.begin(),v.end(),myCompare);
	}
	//	//��ֹ�ڴ濪�ض���
	//	wordPos = new int[spaceNum + 1];
	//	wordLen = new int[spaceNum + 1];
	//	i = 0;
	//	int j = 0;
	//	do
	//	{
	//		i++;
	//		if (mySentence[i] == '.')
	//		{
	//			wordPos[spaceNum] = i;
	//		}
	//		if (mySentence[i] == ' ')
	//		{
	//			wordPos[j] = i;
	//			j++;
	//		}
	//	}while (mySentence[i] != '.');
	//}
	//void calculateWordLen()
	//{
	//	if (spaceNum == 0 && wordPos==NULL)
	//	{
	//		return;
	//	}
	//	else 
	//	{
	//		for (int i = 0; i < spaceNum + 1; i++)
	//		{
	//			if (i == 0)
	//			{
	//				wordLen[i] = wordPos[i];
	//			}
	//			else
	//			{
	//				wordLen[i] = wordPos[i] - wordPos[i - 1] - 1;
	//			}
	//		}
	//	}
	//}
	void myPrint()
	{
		/*for (int i = 0; i < spaceNum + 1; i++)
		{
			cout << wordLen[i] << endl;
		}*/
		cout << "��������Ϊ��"<<endl<<v.size()<< endl;
		cout << "���ʳ��ȴӴ�С����Ϊ��" << endl;
		for (vector<string>::iterator it = v.begin(); it != v.end(); it++)
		{
			cout << *it << " " << "���ʳ���Ϊ��" << (*it).size() << "  ";
		}
		cout << endl;
		cout << "�����Ϊ��" << v.front() << endl;
		cout << "�䵥�ʳ���Ϊ" << (v.front()).size();
	}
	//void mySort()
	//{
	//	
	//}
	//~WordProcess()
	//{
	//	if (wordPos != NULL)
	//	{
	//		delete[] wordPos;
	//		wordPos = NULL;
	//	}
	//	if (wordLen != NULL)
	//	{
	//		delete[] wordLen;
	//		wordLen = NULL;
	//	}
	//}
private:
	int spaceNum;
	char mySentence[SIZE];
	int* wordPos;
	int* wordLen;
	vector<string>v;
};
int main()
{
	WordProcess m1;
	m1.find_Word();
	m1.algorithmSort();
	m1.myPrint();
	system("pause");
	return 0;
}