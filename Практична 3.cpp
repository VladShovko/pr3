#include <iostream>
#include <string>



using std::string;	
using std::cout;
using std::endl;	

void main()
{
	//
	string Name = "God of War Ragnarok";
	//
	string Mode = "Single-player";
	//
	string Genre = "Action-adventure, hack and slash";
	//
	string Platform= "PlayStation 4, PlayStation 5";
	//
	string Developer = "Santa Monica Studio";
	//
	string Publisher = "Sony Interactive Entertainment";
	// 
	unsigned int Coast = 2700;
	// 
	unsigned int ReleaseYear =2022;
	// 
	double Release = 09.11;

	// Загальний об'єм пам'яті (в байтах) необхідний для 
	// зберігання відомостей про ноутбук
	unsigned int totalMemoryInBytes = 
		sizeof(Mode) +
		sizeof(Coast) +
		sizeof(Genre) +
		sizeof(Platform) +
		sizeof(Name) +
		sizeof(Developer) +
		sizeof(Publisher) +
		sizeof(ReleaseYear);
		sizeof(Release);
	//
	cout << "Name:\t\t\t" << Name << endl;
	cout << "Coast (GRN):\t\t" << Coast << endl;
	cout << "Mode:\t\t\t" << Mode << endl;
	cout << "Genres:\t\t\t" << Genre << endl;
	cout << "Platforms:\t\t" << Platform << endl;
	cout << "Developer:\t\t" << Developer << endl;
	cout << "Publisher:\t\t" << Publisher << endl;
	cout << "Release year:\t\t" << ReleaseYear << endl;
	cout << "Release date:\t\t" << Release << endl;
	cout << "Total Memory In Bytes:\t" << totalMemoryInBytes << endl;
}
