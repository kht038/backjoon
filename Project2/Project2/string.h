#pragma once

class string
{
private:
protected:
public:
    // �����Ϸ��� �ڵ����� ����ȯ
    // �Ϲ��� ����ȯ�� ����
    explicit string(void);
    string(const char* _str);
    ~string();

    char* str;
    int strlength;

    int get_length() { return strlength; };
    char* get_str() { return str; };
};