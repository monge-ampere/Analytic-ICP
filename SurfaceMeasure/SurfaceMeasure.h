// ���� ifdef ���Ǵ���ʹ�� DLL �������򵥵�
// ��ı�׼�������� DLL �е������ļ��������������϶���� SURFACEMEASURE_EXPORTS
// ���ű���ġ���ʹ�ô� DLL ��
// �κ�������Ŀ�ϲ�Ӧ����˷��š�������Դ�ļ��а������ļ����κ�������Ŀ���Ὣ
// SURFACEMEASURE_API ������Ϊ�Ǵ� DLL ����ģ����� DLL ���ô˺궨���
// ������Ϊ�Ǳ������ġ�
#ifdef SURFACEMEASURE_EXPORTS
#define SURFACEMEASURE_API __declspec(dllexport)
#else
#define SURFACEMEASURE_API __declspec(dllimport)
#endif

// �����Ǵ� SurfaceMeasure.dll ������
class SURFACEMEASURE_API CSurfaceMeasure {
public:
	CSurfaceMeasure(void);
	// TODO:  �ڴ�������ķ�����
};

extern SURFACEMEASURE_API int nSurfaceMeasure;

SURFACEMEASURE_API int fnSurfaceMeasure(void);
