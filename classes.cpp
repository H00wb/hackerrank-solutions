#include <iostream>
#include <sstream>
using namespace std;

class Student{
    private:
    int age,standard;
    std::string first_name, last_name;
    
    public:
    void set_age(int age1){
        age = age1;
    }
    void set_standard(int std1){
        standard = std1;
    }
    void set_first_name(std::string first_name_1)
    {
        first_name = first_name_1;
    }

    void set_last_name(std::string last_name_1)
    {
        last_name = last_name_1;
    } 

    int get_age(){
        return age;
    }

    int get_standard(){
        return standard;
    }

    std::string get_last_name(){
        return last_name;
    }
    
    std::string get_first_name(){
        return first_name;
    }
    
    std::string to_string()
    {
        stringstream ss,ss1;
        ss << age;
        ss1<< standard;
        std::string numage,numstd;
        ss>>numage;
        ss1>>numstd;
        std::string result = numage + "," + first_name + "," + last_name +"," + numstd;
        return result;
        
    }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
