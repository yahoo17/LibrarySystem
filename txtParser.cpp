#include <C:\Users\DELL\source\repos\LibrarySystem\txtParser.h>

vector<bookDataStruct> txtParser (fstream& file)
{
	string buffer;
	vector <bookDataStruct>  bookData;
	while(getline(file, buffer))
	{
		//这里写把每一行分解成一个对象
		int firstDelimiter;
		int secondDelimiter;
		firstDelimiter= buffer.find('#');
		secondDelimiter = buffer.find('#', firstDelimiter + 1);
		//name =sub(first)
		//id=sub(first+1,sec-first-1)
		//num=sub(sec+1)

		//看一下匿名对象哈
		bookDataStruct oj(buffer.substr(0, firstDelimiter), buffer.substr(firstDelimiter + 1, secondDelimiter - firstDelimiter - 1), stoi(buffer.substr(secondDelimiter + 1)));
			
		
		bookData.push_back(oj);

	}
	return bookData;
}