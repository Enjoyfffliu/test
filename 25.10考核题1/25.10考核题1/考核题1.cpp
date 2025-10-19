//## 题目 1: 字符串处理与单词统计
//
//### 题目描述
//编写一个程序，用户输入一段英文句子，程序需要统计并输出以下信息： <br / >
//
//句子中单词的总数。 <br / >
//句子中最长单词及其长度。 <br / >
//句子中每个单词的长度，并按照单词长度进行排序后输出。 <br / >
//
//### 功能要求
//输入一段英文句子，单词之间用空格分隔，句子以句号.结束。 <br / >
//统计句子中的单词总数和每个单词的长度。 <br / >
//输出最长单词及其长度。 <br / >
//按照单词长度排序后输出所有单词。 <br / >
//
//### 输入输出
//输入一段英文句子。<br / >
//输出单词的总数、最长单词及其长度、每个单词的长度（按顺序排序）<br / >
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
		//将输入的句子传入到mySentence
		cout << "输入一段英文句子，单词之间用空格分隔，句子以句号.结束" << endl;
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
	//	//防止内存开拓多余
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
		cout << "单词总数为："<<endl<<v.size()<< endl;
		cout << "单词长度从大到小依序为：" << endl;
		for (vector<string>::iterator it = v.begin(); it != v.end(); it++)
		{
			cout << *it << " " << "单词长度为：" << (*it).size() << "  ";
		}
		cout << endl;
		cout << "最长单词为：" << v.front() << endl;
		cout << "其单词长度为" << (v.front()).size();
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