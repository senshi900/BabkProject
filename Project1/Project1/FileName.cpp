//#include <iostream>
//#include <vector>
//#include <fstream>
//#include <string>
//#include "chstring.h"
//
//using namespace std;
//std::vector<int> vec; // A dynamic size array
//
//
//int randomnumber(int from , int to) {
//
//	int randnum= rand() % (to-from+1) + from;
//	return randnum;
//}
//enum encahrtype {capital =1  ,spical=3 ,digit=4};
//
//char GetRandomchar(encahrtype CharType) {
//	switch (CharType) {
//		case encahrtype::capital:
//			return randomnumber(65, 90);
//			break;
//			
//				return randomnumber(97, 122);
//				break;
//				case encahrtype::spical:
//					return randomnumber(33, 47);
//					break;
//					case encahrtype::digit:
//						return randomnumber(48, 57);
//						break;
//	}
//}
//
//int readnumber() {
//	cout<< "input: ";
//	int num;
//	cin >> num;
//	return num;
//}
//
//void genratekeys(int num) {
//	for (int i = 0; i < num; i++) {
//		for (int j = 0; j < 4; j++) {
//			if (j != 3) {
//				cout << char(randomnumber(65, 90)) << char(randomnumber(65, 90)) << char(randomnumber(65, 90)) << char(randomnumber(65, 90)) << "-";
//			}
//			else {
//				cout << char(randomnumber(65, 90)) << char(randomnumber(65, 90)) << char(randomnumber(65, 90)) << char(randomnumber(65, 90)) << "";
//
//
//			}
//		}
//		cout << endl;
//
//	}
//	
//}
//
//
//void readarreyelemnts(int arr[100],int& arrlength) {
//
//	cout<<"enter the leanth of the array: ";
//	cin >> arrlength;
//	cout << "enter the array elemnts: ";
//	for (int i = 0; i < arrlength; i++) {
//		cout<<"enter the elemnt number "<<i+1<<" : ";
//		cin >> arr[i];
//	}
//	
//}
//
//void PrintArray(int arr[10],int arrlength) {
//	cout << "the array elemnts are: ";
//	for (int i = 0; i < arrlength; i++) {
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
//int TimesTepeated(int num,int arr[100], int arrlength) {
//	int j = 0;
//	cout<<"enter the number to check ";
//	
//	for (int i = 0; i < arrlength; i++) {
//		if (arr[i] == num) {
//					j++;
//			
//		}
//	}
//	return j;
//
//}
//
//void randomarraynumbers(int arr[100],int arrylength) {
//
//	
//	for (int i = 0; i < arrylength; i++) {
//		arr[i] = randomnumber(-100, 100);
//	}
//}
//int maxnumofarray(int arr[100], int arrlength) {
//	int max = 0;
//	for (int i = 0; i < arrlength; i++) {
//		if (arr[i] > max) {
//					max = arr[i];
//
//		}
//	}
//	return max;
//}
//
//int minumofarray(int arr[100], int arrlength) {
//	int min = arr[0];
//	for (int i = 0; i < arrlength; i++) {
//		if (arr[i]<  min) {
//			min = arr[i];
//
//		}
//	}
//	return min;
//}
//double sumofarray(int arr[100], int arrlength) {
//
//	int sum = 0;
//	for (int i = 0; i < arrlength; i++) {
//		sum+=arr[i];
//	}
//	return sum;
//	
//}
//double avrageofarray(int arr[100], int arrlength) {
//
//  double avrage= sumofarray(arr, arrlength) / arrlength;
//  return avrage;
//
//
//}
//void reeadarr(int arr[100], int arrlength) {
//
//	for (int i = 0; i < arrlength; i++) {
//		cout<<"enter element"<<i+1<<" : ";
//		cin >> arr[i];
//	}
//}
//
//void reversed(int arr[100], int arr2[100], int arrlength) {
//
//	for (int i = 0; i < arrlength; i++) {
//		arr2[i] = arr[arrlength - i+1];
//	}
//}
//
//void serchinarray(int arr[100], int arrlength) {
//
//	cout<<"please enter a number to serarch for: ";
//	int num;
//	cin >> num;
//
//
//	for (int i = 0; i < arrlength; i++) {
//		if (arr[i] == num) {
//			cout << "the number you are lokking for is :" << num << endl;
//			cout << "the number found at posittion:" << i << endl;
//			cout << "the number foud its order :" << i + 1 << endl;
//			break;
//		}
//		else if ((i + 1) == arrlength) {
//			cout << "the number you are lokking for is :" << num << endl;
//			cout << "the number not found" << endl;
//		}
//
//
//	}
//		
//
//	
//}
//
//void addingnumberinarray(int arr[100]) {
//	int num;
//	int answer=1;
//	int arrlength = 1;
//	
//		while (answer != 0) {
//			cout << "please enter a number ?" << endl;
//			cin >> num;
//			cout << "do your want to add more numbers? [0]:no [1]:yes" << endl;
//			cin >> answer;
//			arrlength++;
//			for (int i = arrlength-1; i < arrlength; i++)
//			{
//				arr[i] =+ num;
//
//			}
//			
//
//
//	   }
//		cout<<"array length:"<<arrlength<<endl;
//		for (int i = 0; i < arrlength; i++) {
//			cout << arr[i] << " ";
//		}		
//
//}
//
//void randomarray(int arr[100], int arrlength) {
//
//	for (int i = 0; i < arrlength; i++) {
//		arr[i] = GetRandomchar(digit);
//	}
//}
//
//void postivenum(int arr[100], int arrlength) {
//	int counter = 0;
//	for (int i = 0; i < arrlength; i++) {
//		if (arr[i] < 0) {
//			counter++;
//		}
//	
//	}
//	cout<<"the number of postive numbers are: "<<counter<<endl;
//}
//void ceilnum(int num) {
//	
//	}
//
//
//int roundcounter() {
//	int rounds;
//	cout<<"how many rounds do you want to play? 1-10 ";
//	cin >> rounds;
//
//	return rounds;
//
//}
//enum game {roc=1,sizer=2,paper=3};
//
//
//int resultofround(int player,int computer) {
//
//	if (player == computer) {
//		return 2;
//	}
//	else if (player == roc && computer == sizer) {
//		return 0;
//	}
//	else if (player == sizer && computer == roc) {
//		return 1;
//	}
//	else if (player == roc && computer == paper) {
//		return 0;
//	}
//	else if (player == paper && computer == roc) {
//		return 1;
//	}
//	else if (player == paper && computer == sizer) {
//		return 0;
//	}
//	else if (player == sizer && computer == paper) {
//		return 1;
//	}
//	else if (player == sizer && computer == roc) {
//		return 0;
//	}
//	else if (player == roc && computer == sizer) {
//		return 1;
//	}
//}
//string changeinttostring(int num) {
//	if (num == 1) {
//		return "roc";
//	}
//	else if (num == 2) {
//		return "paper";
//	}
//	else if (num == 3)
//	{
//		return "sizer";
//	}
//	else return "???";
//}
//string wiiner(int num) {
//	if (num == 1) {
//		return "player";
//	}
//	else if (num == 0) {
//		return "computer";
//	}
//	else if (num == 2) {
//		return "draw";
//	}
//	else return "????";
//}
//void roundresult(int player, int computer,int round) {
//
//	
//
//	cout << "___________________round[" << changeinttostring(round) << "]_______________" << endl;
//	cout << "playuer choice:" << changeinttostring(player) << endl;
//	cout << "computer choice:" << changeinttostring(computer) << endl;
//	cout << "winner:" << wiiner(round) << endl;
//	cout << "___________________________________________________________" << endl;
//}
//void gameendresult(int rounds,int playercouter,int computercounter,int drawcounter) {
//
//	cout << "_________________________________________________________" << endl;
//	cout << "++                               +++Game Over +++" << endl;
//	cout << "____________________________________________________________________"<<endl;
//	cout << "___________________________________Game Result______________________________" << endl;
//
//	cout << "game rounds" << rounds << endl;
//	cout << "player won :" << playercouter << "times" << endl;
//	cout << "computer won :" << computercounter << "times" << endl;
//	cout << "draw times :" << drawcounter << endl;
//	if (playercouter > computercounter) {
//		cout << "final winner :player" << endl;
//	}
//	else if (playercouter < computercounter) {
//		cout << "final winner :computer" << endl;
//	}
//	else
//	{
//		cout << "final winner :draw" << endl;
//	}
//
//
//}
//
//void StartGame() {
//	int rounds = roundcounter();
//	int computer = 0;
//	int player = 0;
//	int draw = 0;
//	int playerchoice;
//	
//
//	for (int i = 0; i < rounds; i++) {
//		cout << "round 1 begins :" << endl;
//		cout << "your choice [1] stone ,paper[2],scissors[3]";
//		cin >> playerchoice;
//		int computerchoice = randomnumber(0, 3);
//	int result=	resultofround(playerchoice, computerchoice);
//	if (result == 1) {
//		player++;
//	}
//	else if (result == 0) {
//		computer++;
//	}
//	else if (result == 2) {
//		draw++;
//	}
//	roundresult(playerchoice, computerchoice, result);
//
//	}
//	gameendresult(rounds, player, computer, draw);
//}
//
//
//int rounds() {
//	int rounds = 0;
//	cout << "how many question do you want to answer ?" << endl;
//	cin >> rounds;
//	
//	return rounds;
//}
//
//int levels() {
//	int level = 0;
//	cout << "Enter Questions Level [1], Easy,[2] Med[3] Hard,[4]Mix ?" << endl;
//	cin >> level;
//	return level;
//}
//int opration() {
//	int opration = 0;
//	cout << "Enter Opration Type [1] Add ,[2] Sub ,[3] Mul ,[4] Div,[5] Mix ?" << endl;
//	cin >> opration;
//	return opration;
//}
//string oprationconvertor(int opration) {
//	if (opration == 1) {
//		return"+";
//	}
//	else if (opration == 2) {
//		return "-";
//	}
//	else if (opration == 3) {
//		return"*";
//	}
//	else if (opration == 4) {
//		return "4";
//	}
//
//}
//bool checkanswer(int num1, int num2, int answer,int type) {
//	switch (type) {
//	case 1:
//		if ((num1 + num2) == answer) {
//			return true;
//		}
//		else return false;
//	case 2:
//		if ((num1 - num2) == answer) {
//			return true;
//		}
//		else return false;
//	case 3:
//		if ((num1 * num2) == answer) {
//			return true;
//		}
//		else return false;
//	case 4:
//		if ((num1 / num2) == answer) {
//			return true;
//		}
//		else return false;
//	
//	}
//
//}
//int rightanswer(int num1, int num2, int type) {
//	switch (type) {
//	case 1:
//		
//			return num1 + num2;
//	case 2:
//			return num1 - num2;
//		
//	case 3:
//			return num1 * num2;
//		
//	case 4:
//		return num1 / num2;
//	}
//
//}
//int thelevels(int level) {
//	switch (level) {
//	case 1:
//		return randomnumber(1, 10);
//	case 2:
//		return randomnumber(10, 100);
//	case 3:
//	return	randomnumber(100, 1000);
//	case 4:
//		return randomnumber(1000, 100000);
//	case 5: 
//		return randomnumber(1, 1000);
//	}
//}
//void questions(int rounds,int level,int type) {
//	int answer = 0;
//	for (int i = 0; i < rounds; i++)
//	{
//		cout << "Question[" << i+1 << "]" << endl;
//		int num1 = thelevels(level);
//		int num2 = thelevels(level);
//		cout << num1 << endl;
//		cout << num2;
//		cout << oprationconvertor(type) << endl;
//		cout << "_________________________________" << endl;
//		cin >> answer;
//	bool isture=	checkanswer(num1, num2, answer,type);
//	if (isture) {
//		cout << "right answer good job ! (:" << endl;
//	}
//	else {
//		cout << "wrong ansewr ):" << endl;
//		cout << "the right answer was " << rightanswer(num1, num2, type) << endl;
//	}
//	}
//	
//
//}
//
//
//
//void startthegame() {
//int round=	rounds();
//int level=	levels();
//int oprations= opration();
//	questions(round,level,oprations);
//
//}
//
//
//enum enQuestionsLevel{EasyLevel=1,MedLevel=2,HaedLevel=3,Mix=4};
//enum enOperationType{Add=1,Sub=2,Mult=3,Div=4,MixOp=5};
//string GetOpTypeSymbol(enOperationType Optype) {
//	switch (Optype) {
//	case enOperationType::Add:
//			return"+";
//		case enOperationType::Sub:
//			return"-";
//		case enOperationType::Mult:
//			return"*";
//		case enOperationType::Div:
//			return "/";
//		default:
//			return "mix";
//	}
//}
//
//struct stEmployee {
//
//	string Firstname;
//	string LasdtName;
//	float Salary;
//
//};
//
//struct stUser {
//	string name;
//	string phone;
//	short age;
//
//};
//
//void TakeuserInfo(){
//	stUser user;
//	string choice;
//	vector<stUser> vUser;
//	bool isture = true;
//	do
//	{
//		cout << "enter your name" << endl;
//		cin >> user.name;
//		cout << "enter your age" << endl;
//		cin >> user.age;
//		cout << "enter your phone number" << endl;
//		cin >> user.phone;
//		vUser.push_back(user);
//		cout << "do you want to enter more info? n/y " << endl;
//		
//		cin >> choice;
//		if (choice == "n") {
//			isture=false;
//
//		}
//
//
//	} while (isture);
//
//	for (stUser user : vUser) {
//		cout << "your name" << user.name;
//		cout << "your age" << user.age;
//		cout << "your phone number" << user.phone;
//	}
//	
//
//		
//
//};
//
//void LoadDataFromFileToVector(string FileName,vector<string>&vFileContent) {
//	fstream MyFile;
//	MyFile.open(FileName, ios::in);
//
//	if (MyFile.is_open()) {
//		string Line;
//		while (getline(MyFile, Line)) {
//			vFileContent.push_back(Line);
//		}
//		MyFile.close();
//	}
//}
//void SaveVectorToFile(string FileName,vector<string> vFileContent) {
//	fstream MyFile;
//	MyFile.open(FileName, ios::out);
//	if (MyFile.is_open()) {
//		for (string& Line : vFileContent) {
//			if (Line != "") {
//				MyFile << Line << endl;
//			}
//		}
//		MyFile.close();
//	}
//}
//
//void DeleteRecordFromFile(string FileName, string Record) {
//	vector <string> vFileContent;
//	LoadDataFromFileToVector(FileName, vFileContent);
//	for (string& Line : vFileContent) {
//		if (Line == Record) {
//			Line = "";
//		}
//	}
//	SaveVectorToFile(FileName,vFileContent);
//}
//
//
//void PrintFileContent(string FileName) {
//	fstream Myfile;
//	Myfile.open(FileName, ios::in);
//	if (Myfile.is_open()) {
//		string Line;
//		while (getline(Myfile, Line)) {
//			cout << Line << endl;
//		}
//		Myfile.close();
//	}
//}
//
//void print2darray(int arr) {
//	for (int i = 0; i < arr; i++) {
//		cout << arr << endl;
//	}
//
//
//}
//
//void arrayd(int arr[3][3], int row, int colmn) {
//	int number = 1;
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			arr[i][j] = randomnumber(0,1);
//		}
//	}
//
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			cout << arr[i][j] << "   ";
//		}
//		cout << endl;
//	}
//
//	
//
//}
//bool isidentty(int arr[3][3]) {
//	
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			if (arr[i][i] != arr[i][i]) {
//				return false;
//			}
//			else if (i != j && arr[i][j] != 0) {
//				return false;
//			}
//			
//			
//		}
//		
//	}
//	return true;
//
//}
//
//int sidentty(int arr[3][3]) {
//	int	counterr=0;
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			if (arr[i][j] == 0) {
//			counterr=counterr+1;
//			}
//		}
//
//	}
//	return counterr;
//
//}
//
//void sumofmatrix(int arr[3][3]) {
//	int sum = 0;
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			sum += arr[i][j];
//		}
//	}
//	cout << sum << endl;
//}
//
//void sumof3darray(int arr[3][3]) {
//	int sum = 0;
//
//		for (int i = 0; i < 3; i++) {
//			sum = 0;
//			for (int j = 0; j < 3; j++) {
//			
//			 sum += arr[i][j];
//			
//			}
//			cout << "sum of row  " << i+1 << "	" << sum << endl;
//			
//		}
//
//}
//
//
//void sumof3darrayin1array(int arr[3][3],int arrr[3]) {
//	int sum = 0;
//
//	for (int i = 0; i < 3; i++) {
//		sum = 0;
//		for (int j = 0; j < 3; j++) {
//
//			sum += arr[j][i];
//		 
//
//		}
//		arrr[i]= sum;
//
//		cout << arrr[i] << endl;
//
//	}
//}
//
//
//void transpose(int arr[3][3], int row, int colmn) {
//	int number = 1;
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			arr[i][j] = randomnumber(1, 100);
//		}
//	}
//
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			cout << arr[j][i] << "   ";
//		}
//		cout << endl;
//	}
//}
//void mulof2matix(int arr[3][3], int arr2[3][3],int arr3[3][3]) {
//	
//
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			arr[i][j] = arr2[i][j] * arr3[i][j];
//		}
//	}
//
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			cout << arr[i][j] << "   ";
//		}
//		cout << endl;
//	}
//}
//
//
//void isdoubled(int arr1[3][3], int arr2[3][3], int arr3[3][3]) {
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			
//		}
//	}
//}
//
//
//void minandmax(int arr[3][3]) {
//	int min = 0;
//	int max = 0;
//
//	min = arr[0][0];
//	min = arr[0][0];
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			if (min > arr[i][j]) {
//				min = arr[i][j];
//			}
//			if (max < arr[i][j]) {
//				max = arr[i][j];
//			}
//
//		}
//	}
//
//	cout << "max:" << max;
//	cout << "min" << min;
//}
//
//void fivonachi(int arr[10]) {
//	for (int i = 1; i < 10; i++) {
//		arr[i + 1] = arr[i - 1] + arr[i];
//	}
//
//	cout << "the array elemnts are: ";
//	for (int i = 0; i < 10; i++) {
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
//
//string readstring() {
//	string s1;
//	cout << "enter your string" << endl;
//	getline(cin, s1);
//	return s1;
//}
//
//void printeachletter(string s1) {
//	
//	bool isFirstLeter = true;
//	cout << "after:" << endl;
//	for (int i = 0; i < s1.length(); i++) {
//		if (s1[i] != ' '&& isFirstLeter) {
//			cout << s1[i] << endl;
//
//		}
//		isFirstLeter = (s1[i] == ' ' ? true : false);
//		
//
//	}
//}
//
//string toupper(string s1) {
//
//
//	cout << "after:" << endl;
//	for (int i = 0; i < s1.length(); i++) {
//		if (s1[i] != ' ' ) {
//			s1[i] = toupper(s1[i]);
//			
//
//		}
//		
//
//
//	}
//	return s1;
//}
//
//
//string tolower(string s1) {
//
//
//	cout << "after:" << endl;
//	for (int i = 0; i < s1.length(); i++) {
//		if (s1[i] != ' ') {
//			s1[i] = tolower(s1[i]);
//
//
//		}
//
//
//
//	}
//	return s1;
//}
//enum enWhatToCount{uppercasw=1,lowercace=2,all=3};
//
//int selectWhatToDisplay(string s1, enWhatToCount WhatToCount) {
//	int counter = 0;
//	if (WhatToCount == enWhatToCount::all) {
//		return s1.length();
//	}
//	for (int i = 0; i < s1.length(); i++) {
//
//		if (isupper(s1[i]) && WhatToCount == enWhatToCount::uppercasw) {
//			counter++;
//		}
//		else if (islower(s1[i]) && WhatToCount == enWhatToCount::lowercace) {
//			counter++;
//		}
//	}
//	return counter;
//}
//
//char inverting(char s1) {
//	return isupper(s1) ? tolower(s1) : toupper(s1);
//}
//
//string invertchar(string cahrcter) {
//
//	for (int i = 0; i < cahrcter.length(); i++) {
//	
//		cahrcter[i] = inverting(cahrcter[i]);
//}
//	return cahrcter;
//
//
//}
//
//
//
//char readchar() {
//	char c;
//	cout << "enter a charcter" << endl;
//	cin >> c;
//	return c;
//}
//
//int readhowmanychar(string s1,char c) {
//	int counter = 0;
//	for (int i = 0; i < s1.length(); i++) {
//		if (s1[i] == c) {
//			counter++;
//		}
//	}
//	return counter;
//}
//
//
//void printeachwoerd(string s1) {
//	for(int i = 0; i < s1.length(); i++) {
//		if (s1[i] != ' ') {
//			cout << s1[i];
//		}
//		else
//		{
//			cout << endl;
//		}
//
//	}
//}
//
//void printechword(string s1 ) {
//	string delim = " ";
//
//	cout << "your string words" << endl;
//	short pos = 0;
//	string sWord;
//
//	while ((pos = s1.find(delim)) != std::string::npos) {
//		sWord = s1.substr(0, pos);
//		if (sWord != "") {
//			cout << sWord << endl;
//		}
//		s1.erase(0, pos + delim.length());
//	}
//	if (s1 != "") {
//		cout << s1 << endl;
//	}
//}
//
//
//
//vector<string>splitfun(string s1) {
//	string delim = " ";
//	vector<string> myvec;
//
//	short pos = 0;
//	string sWord;
//
//	while ((pos = s1.find(delim)) != std::string::npos) {
//		sWord = s1.substr(0, pos);
//		if (sWord != "") {
//			myvec.push_back(sWord);
//		}
//		s1.erase(0, pos + delim.length());
//	}
//	return myvec;
//}
//
//void trimleft(string s1) {
//	string delim = " ";
//
//
//	short pos = 0;
//	string sWord;
//
//	while ((pos = s1.find(delim)) != std::string::npos) {
//		sWord = s1.substr(0, pos);
//		if (sWord != "") {
//			cout << sWord;
//		}
//		s1.erase(0, pos + delim.length());
//	}
//
//}
//
//
//string printvector(vector<string>vector, string delim) {
//
//	string v1 = "";
//	for (string v : vector) {
//		v1 = v1 + v + delim;
//	}
//	return  v1.substr(0, v1.length() - delim.length());
//}
//
//string ReerseWordsinString(string s1) {
//	vector <string>vstring;
//	string s2 = "";
//
//	vector<string>::iterator itr = vstring.end();
//	while (itr != vstring.begin()) {
//		--itr;
//		s2 += *itr + "";
//	}
//	s2 = s2.substr(0, s2.length() - 1);
//	return s2;
//}
//
//
//string repralse(string s1, string stringtoreplace, string afterreplace) {
//	short pos = s1.find(stringtoreplace);
//	while (pos != std::string::npos) {
//		s1 = s1.replace(pos, stringtoreplace.length(), afterreplace);
//		pos = s1.find(stringtoreplace);
//	}
//	return s1;
//}
//
//string myrepralse(string s1, string stringtoreplace, string afterreplace) {
//	short pos = s1.find(stringtoreplace);
//	while (pos != std::string::npos) {
//		s1 = s1.replace(pos, stringtoreplace.length(), afterreplace);
//		pos = s1.find(stringtoreplace);
//	}
//	return s1;
//}
//
//
//
//vector<string> SplitString(string S1, string Delim) {
//	vector<string> vString;  // Vector to store the substrings
//	short pos = 0;           // Position variable for finding delimiters
//	string sWord;            // Variable to store each substring
//
//	// Use find() function to get the position of the delimiters
//	while ((pos = S1.find(Delim)) != std::string::npos) {
//		sWord = S1.substr(0, pos);  // Store the substring
//
//		if (sWord != "") {
//			vString.push_back(sWord);  // Add the substring to the vector if it's not empty
//		}
//
//		S1.erase(0, pos + Delim.length());  // Erase the processed part of the string
//	}
//
//	if (S1 != "") {
//		vString.push_back(S1);  // Add the last word of the string to the vector
//	}
//
//	return vString;  // Return the vector of substrings
//}
//
//struct clintinfo {
//	string name;
//	string phone;
//	string pincode;
//	string accountnumber;
//	double balance;
//};
//
//clintinfo readclintinfo() {
//	
//	clintinfo info;
//
//	cout << "enter your name" << endl;
//	cin >> info.name;
//	cout << "enter your phone number" << endl;
//	cin >> info.phone;
//
//	cout << "enter your accountnumber number" << endl;
//	cin >> info.accountnumber;
//
//	cout << "enter your balance number" << endl;
//	cin >> info.balance;
//
//	cout << "enter your pincode number" << endl;
//	cin >> info.pincode;
//
//	return info;
//
//}
//
//
//string converdatatooneline(clintinfo clint,string spleter= "#//#") {
//	
//	string record = "";
//
//	record += clint.name + spleter;
//	record += clint.phone + spleter;
//	record += clint.accountnumber+ spleter;
//	record += clint.pincode + spleter;
//	record += to_string(clint.balance);
//
//	cout << record << endl;
//	return record;
//}
//
//clintinfo convertlinetorecord(string line, string Seperator = "#//#") {
//	
//	clintinfo clint;
//
//	vector<string>myvector;
//	myvector = SplitString(line, Seperator);
//		
//	clint.name = myvector[0];
//	clint.phone = myvector[1];
//	clint.accountnumber = myvector[2];
//	clint.pincode = myvector[3];
//	to_string(clint.balance) = myvector[4];
//
//	return clint;
//}
//
//void PrintClintRecord(clintinfo clint) {
//
//	cout << "name:" << clint.name << endl;
//	cout << "phone:" << clint.phone << endl;
//	cout << "accountnumber:" << clint.accountnumber << endl;
//	cout << "pincode:" << clint.pincode << endl;
//	cout << "balance:" << clint.balance << endl;
//
//}
//clintinfo ReadNewClient() {
//	clintinfo Client;  // Assuming that sClient is a struct or class type
//
//	// Prompt for and read account number
//	cout << "Enter Account Number? ";
//	getline(cin >> ws, Client.name);
//
//	// Prompt for and read pin code
//	cout << "Enter PinCode? ";
//	getline(cin, Client.phone);
//
//	// Prompt for and read name
//	cout << "Enter Name? ";
//	getline(cin, Client.accountnumber);
//
//	// Prompt for and read phone
//	cout << "Enter Phone? ";
//	getline(cin, Client.pincode);
//
//	// Prompt for and read account balance
//	cout << "Enter AccountBalance? ";
//	cin >> Client.balance;
//
//	// Return the constructed client object
//	return Client;
//}
//bool FintClintByAccountNumber(string AccountNumber,vector<clintinfo>vClint,clintinfo &Clint) {
//	for (clintinfo c : vClint) {
//		if (c.accountnumber == AccountNumber) {
//			Clint = c;
//			return true;
//		}
//	}
//	return false;
//
//}
//
//vector <clintinfo> LoadClintInformation(string filename = "clint.txt") {
//
//	vector<clintinfo>vclint;
//
//	fstream MyFile;
//	MyFile.open(filename, ios::in);
//	if (MyFile.is_open()) {
//		string line;
//		clintinfo clint;
//		while (getline(MyFile, line)) {
//			clint = convertlinetorecord(line);
//			vclint.push_back(clint);
//		}
//		MyFile.close();
//	}
//	return vclint;
//}
//
//void PrintClintData(vector<clintinfo> vclint) {
//		
//	for (clintinfo v : vclint) {
//		PrintClintRecord(v);
//		cout << endl;
//	}
//}
//
//void AddDataLineToFile(string Filename,string stdataline) {
//	fstream Myfile;
//	Myfile.open(Filename, ios::out | ios::app);
//	if (Myfile.is_open()) {
//		Myfile << stdataline << endl;
//		Myfile.close();
//	}
//}
//
//void AddNewClint() {
//	clintinfo clint;
//	clint = readclintinfo();
//	AddDataLineToFile("clint.txt", converdatatooneline(clint));
//}
//
//void addclint() {
//	char addmore = 'y';
//	do {
//		system("cls");
//		cout << "adding new clint" << endl;
//		AddNewClint();
//		cout << "clint added succesfuly,do you want to add more clints? Y/N?";
//		cin >> addmore;
//		
//	} while (toupper(addmore)=='Y');
//}
//
//void SerchForUser(vector<clintinfo> vClint) {
//	string Clintnum;
//	clintinfo clint;
//	cout << "enter clint number" << endl;
//	cin >> Clintnum;
//
//
//	for (clintinfo v : vClint) {
//		if (Clintnum == v.accountnumber) {
//			PrintClintRecord(v);
//		}
//		else {
//			cout << "not found";
//		}
//	}
//}
//string ReadClintAccountNumber() {
//	string number;
//	cout << "enter your clint number" << endl;
//	cin >> number;
//	return number;
//}
//
//bool isleap(int num) {
//	if (num % 400 == 0) {
//		return true;
//	}
//	else if (num % 100 == 0) {
//		return false;
//	}
//	else if (num % 4 == 0) {
//		return true;
//	}
//	return false;
//}
//
//int ReadYear() {
//	int num;
//	cout << "enter the year" << endl;
//	cin >> num;
//	return num;
//}
//void printall(int num) {
//	if (isleap(num)== true) {
//		cout << " number of days in " << num << "is 366" << endl;
//		cout << " number of hours in " << num << "is 8784" << endl;
//		cout << " number of minutes in " << num << "is 527040" << endl;
//		cout << " number of sec in " << num << "is 31622400" << endl;
//	}
//	else {
//		cout << " number of days in " << num << "is 365" << endl;
//		cout << " number of hours in " << num << "is 8760" << endl;
//		cout << " number of minutes in " << num << "is 525600" << endl;
//		cout << " number of sec in " << num << "is 31536000" << endl;
//	}
//
//
//}
//
//bool IsLeapYear(short year) {
//	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
//}
//
//short NumOfDaysInYear(short Year) {
//	return IsLeapYear(Year) ? 366 : 365;
//}
//
//short NumOfHoursInYear(short Year) {
//	return NumOfDaysInYear(Year) * 60;
//}
//short NumOfMinutesInYear(short Year) {
//	return NumOfHoursInYear(Year) * 60;
//}
//short NumOfSecoundsInYear(short Year) {
//	return NumOfMinutesInYear(Year) * 60;
//}
//
//short NumOfDaysInMonth(short month,short year) {
//	if (month < 1 || month > 12) {
//		return 0;
//	}
//	short arr[13] = { 0, 31,IsLeapYear(year) ? 29 : 28,31,30,31,30,31,31,30,31,30,31 };
//	return arr[month];
//}
//
//int ReadMonth() {
//	int month;
//	cout << "enter the month" << endl;
//	cin >> month;
//	return month;
//
//}
//
//int ReadDay() {
//	int day;
//	cout << "enter the day" << endl;
//		cin >> day;
//		return day;
//}
//
//int Dayofweekorder(int year, int month, int day) {
//	int a = (14 - month) / 12;
//	int y = year - a;
//	int m = month + 12*a - 2;
//
//	int d = day + y + (y / 4) - (y / 100) + (y / 400) + (31 * m / 12);
//	return d % 7;
//}
//
//string MonthShortName(short month) {
//
//	string arr[12] = { "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec" };
//
//	return arr[month - 1];
//}
//
//void TheDay(int num) {
//
//	string arr[7] = { "sun","mon","tus","wen","tuh","Fri","sat" };
//
//	cout << arr[num];
//}
//
//void PrintMonthCalendar(short month, short year) {
//	int NumOfDays;
//	int Current = Dayofweekorder(year,month ,1);
//	NumOfDays = NumOfDaysInMonth(month,year);
//	printf("_______________%s___________\n\n", MonthShortName(month).c_str());
//
//	printf("Sun  Mon  Tue  Wen  Fri  Sat\n");
//	int i;
//	for (i = 0; i < Current; i++) {
//		printf("    ");
//	}
//		
//
//	for (int j = 1; j <= NumOfDays; j++) {
//		printf("%5d", j);
//		if (++i == 7) {
//			i = 0;
//			printf("\n");  
//		}
//	}
//
//
//	printf("\n  _________________________________\n");
//
//
//}
//short NumOfDaysFromStartTheYear(short day,short month, short year) {
//	int totaldays = 0;
//	for (int i = 1; i < month-1; i++) {
//		totaldays += NumOfDaysInMonth(i, year);
//	}
//	totaldays += day;
//	return totaldays;
//}
//
//struct sDate {
//	short Year;
//	short Month;
//	short Day;
//};
//
//
//sDate GetDateFromDayInYear(short DateOrderInYear, short Year) {
//	sDate Date;
//	short RemaningDays = DateOrderInYear;
//	short MonthDays = 0;
//	Date.Year = Year;
//	Date.Month = 1;
//
//	while (true) {
//		MonthDays = NumOfDaysInMonth(Date.Month, Year);
//
//		if (RemaningDays > MonthDays) {
//			RemaningDays -= MonthDays;
//			Date.Month++;
//		}
//		else {
//			Date.Day = RemaningDays;
//			break;
//		}
//	}
//	return Date;
//
//}
//
//
//
//
//sDate ReadFullDate() {
//	sDate Date;
//	Date.Year = ReadYear();
//	Date.Month = ReadMonth();
//	Date.Day = ReadDay();
//	return Date;
//}
//
//sDate DateAddDays(short Days, sDate Date) {
//	short RemaningDays = Days + NumOfDaysFromStartTheYear(Date.Day, Date.Month, Date.Year);
//	short MonthDays = 0;
//	Date.Month = 1;
//
//	while (true) {
//		MonthDays = NumOfDaysInMonth(Date.Month, Date.Year);
//		if (RemaningDays > MonthDays) {
//			RemaningDays -= MonthDays;
//			Date.Month++;
//			if (Date.Month > 12) {
//				Date.Month = 1;
//				Date.Year++;
//			}
//		}
//		else {
//			Date.Day = RemaningDays;
//			break;
//		}
//	}
//	return Date;
//}
//
//bool IsLastDayInMonth(short day1,short Year,short month) {
//	short day2=NumOfDaysInMonth(month, Year);
//	return day1 == day2 ? true : false;
//}
//
//bool IsLastMonth(  short month) {
//	
//	return month == 12 ? true : false;
//}
//short ReadDayToAdd() {
//	short num = 0;
//	cout << "Enter How Many Day You Want To add" << endl;
//	cin >> num;
//	return num;
//}
//
//class calculator {
//
//private:
//	double total = 0;
//
//public:
//	int add(int num) {
//		total += num;
//		cout << "num after adding " << num << "  is  " << total << endl;
//
//		return total + num;
//	}
//
//	void PrintResult() {
//		cout << "total now is " << total << endl;
//	}
//};
//
//class clsPerson {
//private:
//	int _id; string _firstname; string _lastname; string _fullname; string _email; string _phone;
//	
//	
//
//public:
//	clsPerson(int id, string firstname, string lastname, string fullname, string email, string phone) {
//		_id = id;
//		_firstname = firstname;
//		_lastname = lastname;
//		_fullname = fullname;
//		_email = email;
//		_phone = phone;
//	}
//	void SendEmail(string subject,string body) {
//		cout << "the following message sent successfully to email : " << _email << endl;
//		cout << "subject: " << subject << endl;
//		cout << "body : " << body << endl;
//		
//	}
//	
//
//};
//
//
//
//int main()
//
//{
//
//
//	return 0;
//}