/*****************************************************************//**
 * \file   Դ.cpp
 * \brief  ͷ�ļ�
 * 
 * \author 26240
 * \date   November 2024
 *********************************************************************/

#include <iostream>
#include <string_view>
#include <format>

// TWJ�ĸ�����Ϣ
inline constexpr std::string_view aboutMe() {
    return R"(
    - ���� TWJ����Ҳ���Խ�����è��WJ��ͯ��
    - �Ǹ� 00 �����ڹ�������ס��ɽ ��������
    - ������լ��������լ��ʱ��ɳ��ʱ������
    - MBTI �Ը�jazzǿ�а��ұ������ˣ����������������������һ��ֲ�
    - �кܶ���ܿɰ��Ķ��󣬳�̬��new��...
    )";
}

// TWJ �Ĺ�����Ϣ
inline constexpr std::string_view aboutMyWork() {
    return R"(
    - ��ҵC++�����������һ���û����飬��һ���Ʒ
    - Ŀǰ��ְ���ֽڷ����Ŷӣ��� to B ҵ��
    - ��ǰд Vue������д React
    - ����һ�� Web����дһ��С����
    - ���෽��̽����...
    )";
}

// TWJ ����ʷ
inline constexpr std::string_view aboutMyHistory() {
    return R"(
    - �ܾúܾ���ǰ�Ǹ� OIer / ACMer���㷨ѧ�˵�Ƥë������ȫ���������գ����������ܸ���
    - ��ҵ��ɽ��ĳ˫�Ǵ�ѧ���������רҵ
    - �����Ǹ��޵��Եģ�����򵥵�ά�ޣ���װ����������Ҳ�ᣬ������ҵ�༶��
    - �����Ǹ�¯ʯ����Ϸ�� OCG ��ң�������Σ�ϲ���� OW �� R6��������ȫ���˿�
    )";
}

// TWJ �İ���
inline constexpr std::string_view aboutMyHobbies() {
    return R"(
    - �ճ��ٲ������֣�������ƫ����ϵ��Ҳ��һЩӢ�ĺʹ������� ACG �����֣���������ô�����ĸ衣
    - ΢�ࡢ�羰��Ӱ�����ߣ���̨�Ŷ����� Canon EOS 600D�����������ֻ���Ϊ���ˡ����������С�ͼ����ר�������Կ�����֮ǰ��������Ʒ��
    - ��⿰����ߣ������Ի�������̽��û�Թ�����ʳ�ƽ���ڼ��ܻ���취���㷹�ˣ�ѧ���決��Ҳϲ����Щ��㡣
    - Falcom �켣ϵ����Ϸ��ʵ�����ߣ��� 2 ��ͨ
    - ��е���̰����ߣ����ô����޿� ikbc C87
    )";
}

// TWJ ��СĿ��
inline constexpr std::string_view aboutMyWish() {
    return R"(
    - ְҵĿ�꣺��ǰ�˹���ʦ + �û��������ʦ
    - ӵ��һ������Ŭ���У���
    - ӵ��һ̨ 4K ��ʾ����Get����
    - ӵ��һ̨ PS5��Get����
    - ӵ��һ̨ VR��Get����
    - ӵ��һ̨ MacBook Pro��Ŭ���У���
    )";
}

int main() {
    // ��ӡ������Ϣ��ʹ�� std::format �������
    std::cout << std::format("{}", aboutMe()) << "\n";
    std::cout << std::format("{}", aboutMyWork()) << "\n";
    std::cout << std::format("{}", aboutMyHistory()) << "\n";
    std::cout << std::format("{}", aboutMyHobbies()) << "\n";
    std::cout << std::format("{}", aboutMyWish()) << "\n";

    return 0;
}
