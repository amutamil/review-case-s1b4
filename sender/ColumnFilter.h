#pragma once
#include<vector>
#include<string>
#include<map>
#include<iostream>
using namespace std;
namespace ColumnFilter
{
	class ColumnFilter
	{
	private:
		vector<string> ColumnReview;
		vector<vector<string>> csvFileArray;
		int col_number;
	public:
		ColumnFilter(vector<vector<string>> CFA,int col_num):csvFileArray(CFA),col_number(col_num){}

		vector<string> getColumn()
		{
			int zeroBasedColumnNumber = col_number-1;
			for(unsigned int i_row = 0; i_row < csvFileArray.size(); i_row++)
			{
				vector<string> sub(csvFileArray[i_row]);
				sub.push_back("");
				ColumnReview.push_back(sub.at(zeroBasedColumnNumber));
			}
			return ColumnReview;
		}
		void printColumnReview()
		{
			for (unsigned int i_word = 1; i_word < ColumnReview.size(); i_word++)
			{
				cout << ColumnReview[i_word];
				cout << endl;
			}
		}

		
	};
	void getColumnReview(vector<vector<string>> csvFileArray,int colNum);
}
