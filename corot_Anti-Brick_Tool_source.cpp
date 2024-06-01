#include <iostream>
#include <limits>
#include <thread>
#include <chrono>
#include <sstream>
#include <windows.h>

using namespace std;
int s;
string deviceName = "���� K60 Ultra";
string deviceCode = "corot";
string projectName = "һ��ˢ���שpreloader";
string imgVer = "v1";
string imgAuth = "null";
string toolAuth = "AviderMin";
string buildDate = "2024.06.01";
string imgFile = "preloader_corot.img";
string apkFile = "KernelSU_v0.9.4_11838-release.apk";
string Group = "749222815";

void MENU();
void INF();
void IN_SYSTEM();
bool CheckADBDevice();
void FASTBOOT_MODE();
void INSTALL_APK();
void REBOOT_BOOTLOADER();
void FLASHING();
void FLASH_OVER();
void FLASH_FAILED();

int main() {
    system("color 3f");
    system(("TITLE " + deviceName + "һ��ˢ�빤�� --By " + toolAuth).c_str());
    INF();
    cout << "���س�������..." << endl;
    cin.get();
    system("cls");
    MENU();
    system("pause");
    return 0;
}

void INF() {
    cout << endl;
    cout << "     " << deviceName << " һ��ˢ�빤��" << endl;
    cout << "                                --By " << toolAuth << endl;
    cout << "***********************************************" << endl;
    cout << "           Img������Ϣ" << endl;
    cout << "      Img���� ��" << projectName << endl;
    cout << "      Img�汾 ��" << imgVer << endl;
    cout << "      Img���� ��" << imgAuth << endl;
    cout << "      ������ͣ�" << deviceName << endl;
    cout << "      ���ʹ��ţ�" << deviceCode << endl;
    cout << "      �������ߣ�" << toolAuth << endl;
    cout << "      ����ʱ�䣺" << buildDate << endl;
    cout << "      ˢ������Ⱥ��" << Group << endl;
    cout << "***********************************************" << endl;
    cout << "" << endl;
}

void MENU() {
    cout << endl;
    cout << "   " << deviceName << " һ��ˢ�빤��" << endl;
    cout << "                                --By " << toolAuth << endl;
    cout << "***********************************************" << endl;
    cout << "" << endl;
    cout << "	     ��ѡ���ܣ�" << endl;
    cout << "" << endl;
    cout << "   1. �ڿ���״̬��ˢ�루�����ͼ�飬�Ƽ���" << endl;
    cout << "" << endl;
    cout << "   2. ��fastbootģʽ��ˢ��" << endl;
    cout << "" << endl;
    cout << "   3. ��װKernelSUӦ��" << endl;
    cout << "" << endl;
    cout << "***********************************************" << endl;
    int choice;
    do {
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "��ѡ���˿���״̬������ִ��������Bootloader����.." << endl;
                Sleep(2);
                IN_SYSTEM();
                return;
            case 2:
                cout << "��ѡ����fastbootģʽ������ִ��ˢ�����..." << endl;
                Sleep(2);
                system("cls");
                FASTBOOT_MODE();
                return;
            case 3:
                cout << "��ѡ���˰�װKernelSUӦ�ã�����ִ�а�װ����..." << endl;
                Sleep(2);
                system("cls");
                INSTALL_APK();
                return;
            default:
                cout << "��Ч��ѡ��������ѡ��" << endl;
                Sleep(1);
                system("cls");
                MENU();
                return;
        }

        cout << "����������ز˵�" << endl;
        cin.get();
        cin.ignore(numeric_limits < streamsize > ::max(), '\n');
        cout << endl;

    } while (choice != 0);
    cout << "��лʹ�ã��ټ���" << endl;
    cout << "******************************" << endl;
}

void FLASH_OVER() {
    system("cls");
    cout << "   " << deviceName << " һ��ˢ�빤��" << endl;
    cout << "                                --By " << toolAuth << endl;
    cout << "***********************************************" << endl;
    cout << "" << endl;
    cout << "             ˢдPreloader���" << endl;
    cout << endl;
    cout << "            �ֻ�����������ϵͳ" << endl;
    cout << endl;
    cout << "           " << toolAuth << "��л��ʹ�ñ�����" << endl;
    cout << "" << endl;
    cout << "***********************************************" << endl;
    cout << endl;
    cout << "           ����������رմ˴��ڣ�" << endl;
    cout << endl;
    system("fastboot reboot");
    cin.get();
    return;
}

void FLASH_FAILED() {
    system("cls");
    cout << "   " << deviceName << " һ��ˢ�빤��" << endl;
    cout << "                                --By " << toolAuth << endl;
    cout << "***********************************************" << endl;
    cout << "" << endl;
    cout << "                   ˢ��ʧ�ܣ�" << endl;
    cout << endl;
    cout << "           1.�����ֻ��ͺ��Ƿ���ȷ" << endl;
    cout << "           2.��ȷ��fastboot�Ƿ�����" << endl;
    cout << "           3.��ѹ���������б�����" << endl;
    cout << "             �������ɹ�������ϵ����" << endl;
    cout << endl;
    cout << "           " << toolAuth << "��л��ʹ�ñ�����" << endl;
    cout << endl;
    cout << "            ����������˳�����" << endl;
    cout << "" << endl;
    cout << "***********************************************" << endl;
    cin.get();
    return;
}

void FLASHING() {
    system("cls");
    cout << "   " << deviceName << " һ��ˢ�빤��" << endl;
    cout << "                                --By " << toolAuth << endl;
    cout << "***********************************************" << endl;
    cout << "" << endl;
    cout << "     "<< "���ڽ���ˢ��Preloader����" << endl ;
    cout << "   "<<"�������ʱ��ͣ���ڴ˽��棬���飺��" << endl;
    cout << endl;
    cout << "      ��1.USB���Ƿ���ȷ���ӡ�" << endl;
    cout << "      ��2.���������Ƿ���ȷ��װ��ʶ��" << endl;
    cout << "      ��3.�ֻ��Ƿ����fastbootģʽ��" << endl;
    cout << endl;
    cout << "             ���������ù��ߣ�" << endl;
    cout << "" << endl;
    cout << "***********************************************" << endl;
    int result = system(("fastboot flash preloader_ab " + imgFile).c_str());
    if (result == 0) {
        FLASH_OVER();
    } else {
        FLASH_FAILED();
    }
    return;
}

void REBOOT_BOOTLOADER() {
    cout << "***********************************************" << endl;
    cout << endl;
    cout << "             �ֻ�������..." << endl;
    cout << endl;
    cout << "***********************************************" << endl;
    cout << "   ������ʱ��ͣ���ڴ˽��棬�������ù��ߣ�" << endl;
    int result = system("adb reboot bootloader");
    if (result == 0) {
        FLASHING();
    }
    return;
}

void IN_SYSTEM() {
    system("cls");
    cout << endl;
    cout << "   " << deviceName << " һ��ˢ�빤��" << endl;
    cout << "                                --By " << toolAuth << endl;
    cout << "***********************************************" << endl;
    cout << "" << endl;
    cout << "         �������ֻ���ȷ���ӵ����ԣ�" << endl;
    cout << endl;
    cout << "           ��ȷ����" << endl;
    cout << "      ��1.�ֻ�bootloaderδ����" << endl;
    cout << "      ��2.�ֻ����ڿ���״̬��" << endl;
    cout << "      ��3.�ֻ�����USB���ԡ�" << endl;
    cout << "      ��4.�������Ѿ���ȷ��װ������" << endl;
    cout << "      ��5.�ֻ���ʾUSB������Ȩʱ��ѡʼ�յ����Ȩ��" << endl;
    cout << endl;
    cout << "***********************************************" << endl;
    cout << endl;
    cout << "     " << "���ڼ���豸�Ƿ���������..." << endl;
    cout << endl;
    cout << "   ������ʱ��ͣ���ڴ˽��棬�����������" << endl;
    cout << "***********************************************" << endl;
    char choice;
    bool shouldContinue = true;
    while (shouldContinue) {
        if (CheckADBDevice()) {
            std::cout << "�豸���ɹ����ѷ��������ӵ��豸��" << std::endl;
            std::cout << "�豸���������������Bootloader..." << std::endl;
            Sleep(3);
            return REBOOT_BOOTLOADER();
        } else {
            std::cerr << "�豸���ʧ�ܣ��������ӣ�" << std::endl;
            std::cerr << "������������������Ƿ�Ϊ��Ӧ���͡�" << std::endl;
            char choice;
            do {
                std::cout << "�� r ���¼�飬������ q �˳�: ";
                std::cin >> choice;
                std::cin.ignore(std::numeric_limits < std::streamsize > ::max(), '\n');
            } while (choice != 'r' && choice != 'R' && choice != 'q' && choice != 'Q');

            if (choice == 'r' || choice == 'R') {} else if (choice == 'q' || choice == 'Q') {
                shouldContinue = false;
            }
        }
    }
}

void FASTBOOT_MODE() {
    system("cls");
    cout << endl;
    cout << "   " << deviceName << " һ��ˢ�빤��" << endl;
    cout << "                                --By " << toolAuth << endl;
    cout << "***********************************************" << endl;
    cout << "" << endl;
    cout << "          �������ֻ���ȷ���ӵ����ԣ�" << endl;
    cout << endl;
    cout << "          ��ȷ����" << endl;
    cout << "        ��1.�ֻ�bootloaderδ����" << endl;
    cout << "        ��2.�ֻ�����fastbootģʽ��" << endl;
    cout << "        ��3.�������Ѿ���ȷ��װ������" << endl;
    cout << endl;
    cout << "            �����������������" << endl;
    cout << "" << endl;
    cout << "***********************************************" << endl;
    cin.get();
    FLASHING();
    return;
}

void INSTALL_APK() {
    system("cls");
    cout << endl;
    cout << "   " << deviceName << " һ��ˢ�빤��" << endl;
    cout << "                                --By " << toolAuth << endl;
    cout << "***********************************************" << endl;
    cout << "" << endl;
    cout << "          �������ֻ���ȷ���ӵ����ԣ�" << endl;
    cout << endl;
    cout << "          ��ȷ����" << endl;
    cout << "        ��1.�ֻ�������USB���ԡ�" << endl;
    cout << "        ��2.�����Ѱ�װADB������" << endl;
    cout << "        ��3.�ֻ�������Ȩ�˵��Եĵ���Ȩ�ޡ�" << endl;
    cout << "          ��������Ȩ�����ֶ���Ȩ" << endl;
    cout << endl;
    cout << "            �����������������" << endl;
    cout << "" << endl;
    cout << "***********************************************" << endl;
    cin.get();
    int adbDevicesResult = system("adb devices");
    if (adbDevicesResult != 0) {
        std::cerr << "ADB�豸���ʧ�ܣ��������ӣ�" << std::endl;
        return;
    }
    std::string installCommand = "adb install " + apkFile;
    int installResult = system(installCommand.c_str());
    if (installResult != 0) {
        std::cerr << "APK��װʧ�ܣ������ļ�·����ADB���ӣ�" << std::endl;
    } else {
        std::cout << "APK��װ�ɹ���" << std::endl;
    }
    Sleep(2);
    system("cls");
    return MENU();
}

bool CheckADBDevice() {
    std::string adbOutput = "";
    FILE * pipe = popen("adb shell getprop ro.product.vendor.name", "r");
    if (!pipe) {
        std::cerr << "Failed to execute adb shell getprop ro.product.vendor.name" << std::endl;
        return false;
    }

    char buffer[128];
    while (fgets(buffer, sizeof(buffer), pipe)) {
        adbOutput += buffer;
    }

    pclose(pipe);


    size_t pos;
    while ((pos = adbOutput.find_first_of("\n\r ")) != std::string::npos) {
        adbOutput.erase(pos, 1);
    }

    if (adbOutput == deviceCode) {
        return true;
    }

    return false;
}
