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
void summon_cat(){
	cout << ear("\\    /\\") << "\n";
	cout << face(" )  ( \')") << "\n";
	cout << body("(  /  )") << "\n";
	cout << leg(" \\(__)|") <<endl;
}

int main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	summon_cat();

	return 0;
}