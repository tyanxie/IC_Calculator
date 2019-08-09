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
        {"爸爸的哥哥","伯父"},
        {"爸爸的哥哥的妻子","伯母"},
        {"爸爸的弟弟","叔父"},
        {"爸爸的弟弟的妻子","叔母、婶婶"},
        {"爸爸的姐姐","姑姑"},
        {"爸爸的妹妹","姑姑"},
        {"爸爸的姐姐的丈夫","姑父"},
        {"爸爸的妹妹的丈夫","姑父"},
        {"爸爸的哥哥的儿子","堂哥"},
        {"爸爸的哥哥的女儿","堂姐"},
        {"爸爸的弟弟的儿子","堂弟"},
        {"爸爸的弟弟的女儿","堂妹"},
        {"爸爸的姐姐的儿子","表哥"},
        {"爸爸的姐姐的女儿","表姐"},
        {"爸爸的妹妹的儿子","表弟"},
        {"爸爸的妹妹的女儿","表妹"},

        {"妈妈","妈妈"},
        {"妈妈的哥哥","舅舅"},
        {"妈妈的弟弟","舅舅"},
        {"妈妈的哥哥的妻子","舅母"},
        {"妈妈的弟弟的妻子","舅母"},
        {"妈妈的姐姐","姨妈"},
        {"妈妈的妹妹","姨妈"},
        {"妈妈的姐姐的丈夫","姨父"},
        {"妈妈的妹妹的丈夫","姨父"},
        {"妈妈的哥哥的儿子","表哥"},
        {"妈妈的哥哥的女儿","表姐"},
        {"妈妈的弟弟的儿子","表弟"},
        {"妈妈的弟弟的女儿","表妹"},
        {"妈妈的姐姐的儿子","表哥"},
        {"妈妈的姐姐的女儿","表姐"},
        {"妈妈的妹妹的儿子","表弟"},
        {"妈妈的妹妹的女儿","表妹"},

        {"哥哥","哥哥"},
        {"哥哥的妻子","嫂子"},
        {"哥哥的儿子","侄子"},
        {"哥哥的女儿","侄女"},

        {"弟弟","弟弟"},
        {"弟弟的妻子","弟媳"},
        {"弟弟的儿子","侄子"},
        {"弟弟的女儿","侄女"},

        {"姐姐","姐姐"},
        {"姐姐的丈夫","姐夫"},
        {"姐姐的儿子","外甥"},
        {"姐姐的女儿","外甥女"},

        {"妹妹","妹妹"},
        {"妹妹的丈夫","妹夫"},
        {"妹妹的儿子","外甥"},
        {"妹妹的女儿","外甥女"},

        {"丈夫","丈夫"},
        {"丈夫的爸爸","公公"},
        {"丈夫的妈妈","婆婆"},
        {"丈夫的哥哥","叔伯（bai），"
         "其妻子称妯娌"},
        {"丈夫的弟弟","直呼其名即可，"
         "其妻子称妯娌"},
        {"丈夫的姐姐","大姑子"},
        {"丈夫的妹妹","小姑子"},
        {"丈夫的哥哥的儿子","直呼其名即可"},
        {"丈夫的哥哥的女儿","直呼其名即可"},
        {"丈夫的弟弟的儿子","直呼其名即可"},
        {"丈夫的弟弟的女儿","直呼其名即可"},
        {"丈夫的姐姐的儿子","直呼其名即可"},
        {"丈夫的姐姐的女儿","直呼其名即可"},
        {"丈夫的妹妹的儿子","直呼其名即可"},
        {"丈夫的妹妹的女儿","直呼其名即可"},

        {"妻子","妻子"},
        {"妻子的爸爸","岳父"},
        {"妻子的妈妈","岳母"},
        {"妻子的哥哥","大舅子"},
        {"妻子的弟弟","小舅子"},
        {"妻子的姐姐","大姨子"},
        {"妻子的妹妹","小姨子"},
        {"妻子的姐姐","姨娘，"
         "面称随妻子，其丈夫称连襟"},
        {"妻子的妹妹","姨娘，"
         "面称随妻子，其丈夫称连襟"},
        {"妻子的哥哥的儿子","直呼其名即可"},
        {"妻子的哥哥的女儿","直呼其名即可"},
        {"妻子的弟弟的儿子","直呼其名即可"},
        {"妻子的弟弟的女儿","直呼其名即可"},
        {"妻子的姐姐的儿子","直呼其名即可"},
        {"妻子的姐姐的女儿","直呼其名即可"},
        {"妻子的妹妹的儿子","直呼其名即可"},
        {"妻子的妹妹的女儿","直呼其名即可"},

        {"儿子","儿子"},
        {"儿子的儿子","孙子"},
        {"儿子的女儿","孙女"},
        {"儿子的妻子","儿媳"},
        {"儿子的儿子的儿子","曾孙"},
        {"儿子的儿子的女儿","曾孙女"},

        {"女儿","女儿"},
        {"女儿的儿子","外孙"},
        {"女儿的女儿","外孙女"},
        {"女儿的丈夫","女婿"}
    };
    //直接暴力遍历
    result = relationship_map[relationship];
    if (!result.length()) {
        result = "你这样玩是找不到对象的！";
    }
}

string calculator_relatives::get_result() {
    return result;
}
