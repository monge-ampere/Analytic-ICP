// ���� ifdef ���Ǵ���ʹ�� DLL �������򵥵�
// ��ı�׼�������� DLL �е������ļ��������������϶���� ANALYTIC_ICP_EXPORTS
// ���ű���ġ���ʹ�ô� DLL ��
// �κ�������Ŀ�ϲ�Ӧ����˷��š�������Դ�ļ��а������ļ����κ�������Ŀ���Ὣ
// ANALYTIC_ICP_API ������Ϊ�Ǵ� DLL ����ģ����� DLL ���ô˺궨���
// ������Ϊ�Ǳ������ġ�
#ifdef ANALYTIC_ICP_EXPORTS
#define ANALYTIC_ICP_API __declspec(dllexport)
#else
#define ANALYTIC_ICP_API __declspec(dllimport)
#endif

// �����Ǵ� Analytic_ICP.dll ������
class ANALYTIC_ICP_API CAnalytic_ICP {
public:
	CAnalytic_ICP(void);
	// TODO:  �ڴ�������ķ�����
};

extern ANALYTIC_ICP_API int nAnalytic_ICP;

ANALYTIC_ICP_API int fnAnalytic_ICP(void);
