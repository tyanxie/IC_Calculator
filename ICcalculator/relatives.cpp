#include "relatives.h"

#include <unordered_map>
#include <map>
using namespace std;

calculator_relatives::calculator_relatives(string relation) {
    relationship = relation;
    result = "";
    relationship_map_search();
}

void calculator_relatives::relationship_map_search() {
    //建立亲戚关系哈希表
    unordered_map<string, string> relationship_map = {
        {"爸爸","爸爸"},
        {"爸爸的爸爸","爷爷"},
        {"爸爸的妈妈","奶奶"},
        {"爸爸的爸爸的爸爸","太爷爷"},
        {"爸爸的爸爸的妈妈","太奶奶"},
        {"妈妈","妈妈"},
        {"哥哥","哥哥"},
        {"弟弟","弟弟"},
        {"姐姐","姐姐"},
        {"妹妹","妹妹"},
        {"丈夫","丈夫"},
        {"妻子","妻子"},
        {"儿子","儿子"},
        {"女儿","女儿"}
    };
    //直接暴力遍历
    result = relationship_map[relationship];
    if (!result.length()) {
        result = "找不到对象！";
    }
}

string calculator_relatives::get_result() {
    return result;
}
