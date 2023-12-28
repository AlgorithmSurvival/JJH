#include <iostream>
#include <string>

using namespace std;

string ear(string str){
	return str;
}
string face(string str){
	return str;
}
string body(string str){
	return str;
}
string leg(string str){
	return str;
}

string foot(string str){
	return str;
}

void summon_dog(){
	cout << ear("|\\_/|") << "\n";
	cout << face("|q p|   /}") << "\n";
	cout << body("( 0 )\"\"\"\\") << "\n";
	cout << leg("|\"^\"`    |") <<"\n" ;
	cout << foot("||_/=\\\\__|")<<endl;
}

int main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	summon_dog();

	return 0;
}