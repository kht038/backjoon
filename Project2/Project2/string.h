#pragma once

class string
{
private:
protected:
public:
    // 컴파일러가 자동으로 형변환
    // 암묵적 형변환을 막아
    explicit string(void);
    string(const char* _str);
    ~string();

    char* str;
    int strlength;

    int get_length() { return strlength; };
    char* get_str() { return str; };
};