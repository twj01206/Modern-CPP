/*****************************************************************//**
 * \file   源.cpp
 * \brief  头文件
 * 
 * \author 26240
 * \date   November 2024
 *********************************************************************/

#include <iostream>
#include <string_view>
#include <format>

// TWJ的个人信息
inline constexpr std::string_view aboutMe() {
    return R"(
    - 本名 TWJ，你也可以叫我懒猫、WJ、童总
    - 是个 00 后，生于广西，居住佛山 工作广州
    - 本性懒宅，懒而不宅，时而沙雕，时而正经
    - MBTI 性格：jazz强行把我变外向了，社恐抑郁不起来，（草是一种植物）
    - 有很多个很可爱的对象，常态化new中...
    )";
}

// TWJ 的工作信息
inline constexpr std::string_view aboutMyWork() {
    return R"(
    - 主业C++软件开发，懂一点用户体验，懂一点产品
    - 目前就职于字节飞书团队，做 to B 业务
    - 以前写 Vue，现在写 React
    - 会做一点 Web，会写一点小程序
    - 更多方向探索中...
    )";
}

// TWJ 的历史
inline constexpr std::string_view aboutMyHistory() {
    return R"(
    - 很久很久以前是个 OIer / ACMer，算法学了点皮毛，最终全都颗粒无收，竞赛以陪跑告终
    - 毕业于山东某双非大学，软件工程专业
    - 曾经是个修电脑的，会搞点简单的维修，拆装，清理，现在也会，但都是业余级别
    - 曾经是个炉石和游戏王 OCG 玩家，打过音游，喜欢玩 OW 和 R6，现在已全部退坑
    )";
}

// TWJ 的爱好
inline constexpr std::string_view aboutMyHobbies() {
    return R"(
    - 日常少不了音乐，听歌风格偏好日系，也有一些英文和纯音，或 ACG 类音乐，几乎不怎么听中文歌。
    - 微距、风景摄影爱好者，有台古董单反 Canon EOS 600D，但近期以手机拍为主了。博客内设有“图集”专栏，可以看到我之前的拍摄作品。
    - 烹饪爱好者，超级吃货，乐于探索没吃过的新食物，平常在家总会想办法做点饭菜，学过烘焙，也喜欢做些甜点。
    - Falcom 轨迹系列游戏忠实爱好者，黎 2 已通
    - 机械键盘爱好者，自用纯白无刻 ikbc C87
    )";
}

// TWJ 的小目标
inline constexpr std::string_view aboutMyWish() {
    return R"(
    - 职业目标：大前端工程师 + 用户体验设计师
    - 拥有一辆车（努力中！）
    - 拥有一台 4K 显示器（Get！）
    - 拥有一台 PS5（Get！）
    - 拥有一台 VR（Get！）
    - 拥有一台 MacBook Pro（努力中！）
    )";
}

int main() {
    // 打印所有信息，使用 std::format 进行输出
    std::cout << std::format("{}", aboutMe()) << "\n";
    std::cout << std::format("{}", aboutMyWork()) << "\n";
    std::cout << std::format("{}", aboutMyHistory()) << "\n";
    std::cout << std::format("{}", aboutMyHobbies()) << "\n";
    std::cout << std::format("{}", aboutMyWish()) << "\n";

    return 0;
}
