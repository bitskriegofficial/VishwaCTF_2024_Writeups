#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int createTopping(int curr, int idx, int &not_remainder)
{
    int temp = 0;
    int num = 1;
    num = num << 1;
    while (curr)
    {
        int remainder = curr % idx;
        if (remainder)
        {
            temp = temp * 10 + remainder;
            curr = curr - remainder;
        }
        else
        {
            num = num | 1;
            curr = curr / idx;
        }
        num = num << 1;
    }
    temp = temp << 1;
    temp = temp | 1;
    not_remainder = temp;
    return num | 1;
}

int createBase(int not_remainder)
{
    int num = 0;
    for (int i = 0; i < 30; ++i)
    {
        if (not_remainder)
        {
            num = num | (not_remainder & 1);
            not_remainder = not_remainder >> 1;
        }
        num = num << 1;
    }
    return num;
}

int create(int curr, int idx)
{
    int not_remainder = 0;
    int topping = createTopping(curr, idx, not_remainder);
    int base = createBase(not_remainder);
    int num = base | topping;
    return num;
}

bool checkValidity(int num)
{
    for (int i = 2; i * i < num; ++i)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

void extraSecurity(vector<int> &encryption)
{
    int n = encryption.size();
    for (int i = 0; i < n; ++i)
    {
        int idx = i + 2;
        if (checkValidity(idx))
        {
            encryption[i] = ~encryption[i];
        }
    }
}

void encode(vector<int> &encryption, const string &data, string &key)
{
    int len = data.length();
    for (int i = 0; i < len; ++i)
    {
        int curr = data[i];
        int idx = (i % 8) + 2;
        int num = create(curr, idx);
        encryption.push_back(num);
    }
}

void applyKey(vector<int> &encryption, string &key)
{
    int n = key.size();
    for (int i = 0; i < n; ++i)
    {
        int curr = key[i];
        int cnt = 0;
        int cpy = curr;
        while (cpy)
        {
            if (cpy & 1)
                ++cnt;
            cpy = cpy >> 1;
        }
        curr = curr << (i + 10);
        while (cnt--)
        {
            curr = curr << 1;
            curr = curr ^ 1;
        }
        int k = encryption.size();
        for (int j = 0; j < k; ++j)
        {
            encryption[j] = encryption[j] ^ curr;
        }
    }
}

void writeToFile(const vector<int> &encryption)
{
    ofstream outfile("Encrypted.txt");
    string data;
    for (auto ele : encryption)
    {
        data += to_string(ele);
        data += " ";
    }
    outfile << data;
    outfile.close();
}

int main()
{
    // fstream file;
    // file.open("Flag.txt");
    string printable="0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ!\"#$%&'()*+,-./:;<=>?@[\\]^_`{|}~";
    vector<int> tar = {-1934298443,-1728250251,-2103640211,-1153630219,1775435890,-1670578291,2009268234,-2009268235,1950549658,-1992754035,1673724026,-1398997107,1405288466,1824718858,2131951730,-1765998643,1934298490,-1330315635,2063794322,1889730674,1124270194,-2059599891,1086521394,-1858273331,1909484170,1229390194,1757609994,-1275265139,1201864818,-1892876403,1673723922,2009268234,1950549402,1229390194,1947140466,-1942159371,1849884786,1703084146,1824718858,-1665335347,1909484170,-1229390195,1757609994,1170407434,1124270194,-1918042227,2038628466,-1982005363,1950549834,1124270322,1782775922,-1738735731,1768095858,1842544754,2127757426};

    int n = printable.size();
    int m = tar.size();

    string data = "";
    for(int j=0; j<m; j++) {
        for(int i=0; i<n; i++) {
            vector<int> temp;
            data.push_back(printable[i]);
            string key = "VishwaCTF";
            encode(temp, data, key);
            applyKey(temp, key);
            extraSecurity(temp);
            if(temp[j]==tar[j]) {
                cout<<printable[i];
                break;
            }
            data.pop_back();
        }
    }

    // file >> data;
    // file.close();
    // vector<int> encryption;
    // string key = "VishwaCTF";
    // encode(encryption, "Vi", key);
    // applyKey(encryption, key);
    // extraSecurity(encryption);
    // // writeToFile(encryption);
    // cout<<encryption[0]<<" "<<encryption[1];
    return 0;
}