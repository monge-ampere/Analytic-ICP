// ���� ifdef ���Ǵ���ʹ�� DLL �������򵥵�
// ��ı�׼�������� DLL �е������ļ��������������϶���� SMOOTHADJUSTMENT_EXPORTS
// ���ű���ġ���ʹ�ô� DLL ��
// �κ�������Ŀ�ϲ�Ӧ����˷��š�������Դ�ļ��а������ļ����κ�������Ŀ���Ὣ
// SMOOTHADJUSTMENT_API ������Ϊ�Ǵ� DLL ����ģ����� DLL ���ô˺궨���
// ������Ϊ�Ǳ������ġ�
#ifdef SMOOTHADJUSTMENT_EXPORTS
#define SMOOTHADJUSTMENT_API __declspec(dllexport)
#else
#define SMOOTHADJUSTMENT_API __declspec(dllimport)
#endif

// �����Ǵ� SmoothAdjustment.dll ������
class SMOOTHADJUSTMENT_API CSmoothAdjustment {
public:
	CSmoothAdjustment(void);
	// TODO:  �ڴ�������ķ�����
};

extern SMOOTHADJUSTMENT_API int nSmoothAdjustment;

SMOOTHADJUSTMENT_API int fnSmoothAdjustment(void);
