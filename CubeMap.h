#pragma once
#include "../../Common/d3dApp.h"
#include "../../Common/Camera.h"
#include"../../Common/d3dUtil.h"
#include"FrameResource.h"

class CubeMap
{
public:
	CubeMap();
	~CubeMap();
	bool Initialize(Microsoft::WRL::ComPtr<ID3D12Device> device,
					Microsoft::WRL::ComPtr<ID3D12GraphicsCommandList> commandlist,
					std::unordered_map<std::string, std::unique_ptr<Texture>> * ptextures,
					CD3DX12_ROOT_PARAMETER* slotRootParameter
		);
//private:
//	/// <summary>
//	/// ���ڴ��ڴ�С�ǵ���
//	/// </summary>
//	virtual void OnResize()override;
//	/// <summary>
//	/// ÿ֡����һ�θú���������������
//	/// </summary>
//	/// <param name="gt"> ����ʱ�����</param>
//	virtual void Update(const GameTimer& gt)override;
//	/// <summary>
//	/// ÿ֡����һ�θú�����ʹ��GPU��Ⱦ
//	/// </summary>
//	/// <param name="gt"> ����ʱ�����</param>
//	virtual void Draw(const GameTimer& gt)override;
//
//
//
//	//virtual void OnMouseDown(WPARAM btnState, int x, int y)override;
//	//virtual void OnMouseUp(WPARAM btnState, int x, int y)override;
//	//virtual void OnMouseMove(WPARAM btnState, int x, int y)override;
//
//	void OnKeyboardInput(const GameTimer& gt);
//	void AnimateMaterials(const GameTimer& gt);
//	void UpdateObjectCBs(const GameTimer& gt);
//	void UpdateMaterialBuffer(const GameTimer& gt);
//	void UpdateMainPassCB(const GameTimer& gt);
	/// <summary>
	/// ����������������뵽mTexture����������
	/// </summary>
	void LoadTextures(std::string name, std::wstring Filename);
	/// <summary>
	/// ��HLSL�е���Դ(buffer)
	/// </summary>
	void BuildRootSignature();
//	/// <summary>
//	/// ������Դ�Ѳ���䣨��ͼ��
//	/// </summary>
//	void BuildDescriptorHeaps();
//	/// <summary>
//	/// ����GPU���ú�������ں���ں����Ĳ���
//	/// </summary>
//	void BuildShadersAndInputLayout();
//	void BuildShapeGeometry();
//	void BuildPSOs();
//	/// <summary>
//	/// ����֡��Դ
//	/// </summary>
//	void BuildFrameResources();
//	/// <summary>
//	/// ͨ��������ͼ��������
//	/// </summary>
//	void BuildMaterials(std::string name, std::wstring Filename,
//		XMFLOAT4 DiffuseAlbedo = XMFLOAT4(1.0f, 1.0f, 1.0f, 1.0f), XMFLOAT3 FresnelR0 = XMFLOAT3(0.1f, 0.1f, 0.1f), float Roughness = 1.0f);
//	/// <summary>
//	/// ����������Ⱦ����
//	/// </summary>
//	void BuildRenderItems();
//	/// <summary>
//	/// ��Ⱦ������Ⱦ����
//	/// </summary>
//	void DrawRenderItems(ID3D12GraphicsCommandList * cmdList, const std::vector<RenderItem*>& ritems);
	/// <summary>
	/// �������ֲ�����ʽ����HLSL�����ã������Լ��趨����
	/// </summary>
	std::array<const CD3DX12_STATIC_SAMPLER_DESC, 6> GetStaticSamplers();
//private:
//	/// <summary>
//	/// ����ǩ��������HLSL����Դ��buffer)
//	/// </summary>
//	ComPtr<ID3D12RootSignature> mRootSignature = nullptr;
//	/// <summary>
//	/// ���SRV����Դ�ѣ���ͼ��
//	/// </summary>
//	ComPtr<ID3D12DescriptorHeap> mSrvDescriptorHeap = nullptr;
	/// <summary>
	/// SRV��CBV�������Ĵ�С���ڹ���SRV��Դ�ѵ�ʱ������ƫ�ƵĴ�С
	/// </summary>
	UINT mCbvSrvDescriptorSize = 0;
//	/// <summary>
//	/// GPU���ú�������ں�����HLSL����ں�����
//	/// </summary>
//	std::unordered_map<std::string, ComPtr<ID3DBlob>> mShaders;
//	/// <summary>
//	/// HLSL�ڵ��ú�����ʱ�������ݵ���֯��ʽ��������ں��������룩
//	/// </summary>
//	std::vector<D3D12_INPUT_ELEMENT_DESC> mInputLayout;
//	/// <summary>
//	/// ��Ⱦ�ܵ�״̬
//	/// </summary>
//	std::unordered_map<std::string, ComPtr<ID3D12PipelineState>> mPSOs;
//	//֡��Դ
//	/// <summary>
//	/// ֡��Դ����
//	/// </summary>
//	std::vector<std::unique_ptr<FrameResource>> mFrameResources;
//	/// <summary>
//	/// ��ǰ֡��Ⱦ���õ�֡��Դ
//	/// </summary>
//	FrameResource* mCurrFrameResource = nullptr;
//	int mCurrFrameResourceIndex = 0;
//	/// <summary>
//	/// ����Ҫ��Ⱦ��RenderItem
//	/// </summary>
//	std::vector<std::unique_ptr<RenderItem>> mAllRitems;
//	/// <summary>
//	/// ��ӦPSOҪ��Ⱦ��RenderItem
//	/// </summary>
//	std::vector<RenderItem*> mRitemLayer[(int)RenderLayer::Count];
//	/// <summary>
//	/// ��Ӧ�������״
//	/// </summary>
//	std::unordered_map<std::string, std::unique_ptr<MeshGeometry>> mGeometries;
//
//
	Camera mCamera;
//	std::unique_ptr<SkyBox> sky;
//	PassConstants mMainPassCB;
//
//
	//������ͼ�õ���Դ
	std::unordered_map<std::string, std::unique_ptr<Texture>>* mTextures;
//	std::vector<std::string> texNames;
//	UINT mTextureIndex = 0;
//	//��պеı�־
//	UINT mSkyTexHeapIndex = 0;
//	//���������������Դ
//	UINT mMaterialIndex = 0;
//	/// <summary>
//	/// ���в��ʵļ���
//	/// </summary>
//	std::unordered_map<std::string, std::unique_ptr<Material>> mMaterials;
	Microsoft::WRL::ComPtr<ID3D12Device> md3dDevice;
	Microsoft::WRL::ComPtr<ID3D12GraphicsCommandList> mCommandList;
	CD3DX12_ROOT_PARAMETER* mSlotRootParameter;
};


