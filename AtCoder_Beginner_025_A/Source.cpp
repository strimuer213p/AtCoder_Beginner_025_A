/*
��蕶
�����N�͒Z�߂̌Ăі����l���Ă��܂��B�Ăі��͔��p�������A���t�@�x�b�g 2 �����ō\������܂��B
�����N�ɂ͍D���� 5 ��ނ̃A���t�@�x�b�g������܂��B�����N�́A�ȉ��̏����𖞂������� 2 �̕����񂷂ׂĂ��l���A�����̏W�����u�Ăі����̏W���v�ƌĂԂ��Ƃɂ��܂��B
���� : ������� 1 �����ڂ� 2 �����ڂ������N���D���� 5 ��ނ̃A���t�@�x�b�g�̂����ꂩ�ł���B
�����ŁA2 �̒��� 2 �̈قȂ镶���� S,T �Ɋւ��āAS �� T �����������Ő�ɗ���Ƃ����̂́A�ȉ��̏����̂����̂����ꂩ���������ꂽ�Ƃ��ł��B
������ S �� 1 �����ڂƕ����� T �� 1 �����ڂ��قȂ�A�������� S �� 1 �����ڂ������� T �� 1 �����ڂ����A���t�@�x�b�g�� (ABC ��) �Ő�ł���B
������ S �� 1 �����ڂƕ����� T �� 1 �����ڂ������ŁA�������� S �� 2 �����ڂ������� T �� 2 �����ڂ����A���t�@�x�b�g�� (ABC ��) �Ő�ł���B
�Ⴆ�΁A�D���ȃA���t�@�x�b�g�� a, b, c, d, e �̂Ƃ��A�u�Ăі����̏W���v�Ɋ܂܂�镶����́A�������ɁAaa, ab, ac, ad, ae, ba, bb, bc, bd, be, ca, cb, cc, cd, ce, da, db, dc, dd, de, ea, eb, ec, ed, ee �ƂȂ�܂��B
�u�Ăі����̏W���v���\�����镶����͑S���� 25 ����܂��B�����N�͂����̕�������������ɕ��ׂ��Ƃ��ɐ擪���� N �ԖڂƂȂ镶������ŏI�I�ȌĂі��ɂ��邱�Ƃɂ��܂����B
���Ȃ��̉ۑ�́A�����N����߂��ŏI�I�ȌĂі������߂邱�Ƃł��B
*/

#include<iostream>
#include<string>
#include<vector>

int main() {
	int num;
	std::string str;
	std::string total;
	std::vector<std::string> name;

	std::getline(std::cin, str);
	std::cin >> num;
	for (int i = 0; i < str.size(); i++) {
		for (int j = 0; j < str.size(); j++) {
			total = str.substr(i, 1) + str.substr(j, 1);     //substr
															 //std::cout << total << str[i] << str[j] << std::endl;
			name.push_back(total);
		}
	}

	std::cout << name[num - 1] << std::endl;

	return 0;
}