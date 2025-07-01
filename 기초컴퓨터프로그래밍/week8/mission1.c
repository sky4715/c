/**********************************
����Ʈ�����к� 2024042053 �迩��
8���� �ǽ�
������ ���� ���ϱ�
**********************************/

#include <stdio.h>
#define PI 3.141592  // ������ ����

// �Լ� ����
int selectMenu();  // �޴� ���� �Լ�
int inputNum();    // ���� �Է� �Լ�
double triangle(int, int);  // �ﰢ�� ���� ��� �Լ�
double rectangle(int, int);  // �簢�� ���� ��� �Լ�
double circle(int);  // �� ���� ��� �Լ�

int main(void){
    int noMenu, n1, n2;  // �޴� ���� ��ȣ�� �Է� �� ����
    double res;  // ��� ����� ������ ����

    noMenu = selectMenu();  // �޴� ����
    if(noMenu == 1){  // �ﰢ�� ���� ����
        printf("�ﰢ�� ���� ���ϱ�\n");

        n1 = inputNum();  // �غ� �Է�
        n2 = inputNum();  // ���� �Է�

        res = triangle(n1, n2);  // �ﰢ�� ���� ���
        
        printf("�ﰢ���� ����: %.2lf\n", res);  // ��� ���
    }
    else if(noMenu == 2){  // �簢�� ���� ����
        printf("�簢�� ���� ���ϱ�\n");

        n1 = inputNum();  // ���� �Է�
        n2 = inputNum();  // ���� �Է�

        res = rectangle(n1, n2);  // �簢�� ���� ���

        printf("�簢���� ����: %.2lf\n", res);  // ��� ���
    }
    else{  // �� ���� ����
        printf("���� ���� ���ϱ�\n");

        n1 = inputNum();  // ������ �Է�

        res = circle(n1);  // �� ���� ���

        printf("���� ����: %.2lf\n", res);  // ��� ���
    }

    return 0;  // ���α׷� ����
}

// �޴� ���� �Լ� ����
int selectMenu(){
    int noMenu;  // �޴� ��ȣ ����

    // �޴��� ������ ������ �ݺ�
    do{
        printf("�޴��� �����ϼ���\n");
        printf("*****************\n");
        printf("1 ---- �ﰢ�� ���� \n");
        printf("2 ---- �簢�� ���� \n");
        printf("3 ---- �� ���� \n");
        printf("*****************\n");
        
        scanf("%d", &noMenu);  // �޴� ��ȣ �Է�
    }while(noMenu < 1 || noMenu > 3);  // 1���� 3 ������ ��ȣ�� �ƴ� ��� �ݺ�
    return noMenu;  // ������ �޴� ��ȣ ��ȯ
}

// ���� �Է� �Լ� ����
int inputNum(){   
    int num;  // �Է¹��� ���� ������ ����

    printf("����cm: ");  // ���� �Է� ��û
    scanf("%d", &num);  // �Է¹��� ������ num�� ����

    return num;  // �Է°� ��ȯ
}

// �ﰢ�� ���� ��� �Լ� ����
double triangle(int a, int b){
    double res;  // ���� ��� ���� ����

    res = a * b / 2.0;  // �ﰢ�� ���� ���

    return res;  // ���� ��ȯ
}

// �簢�� ���� ��� �Լ� ����
double rectangle(int a, int b){
    double res;  // ���� ��� ���� ����

    res = a * b;  // �簢�� ���� ���

    return res;  // ���� ��ȯ
}

// �� ���� ��� �Լ� ����
double circle(int a){
    double res;  // ���� ��� ���� ����

    res = a * a * PI;  // �� ���� ��� (������^2 * ������)

    return res;  // ���� ��ȯ  
}



