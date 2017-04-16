#pragma once
#include"../../Common/d3dApp.h"
#include <DirectXColors.h>
#include"CubeMap.h"

using namespace DirectX;

class d3dSceneApp : public D3DApp
{
public:
	/// <summary>
	/// ¹¹Ôìº¯Êý
	/// </summary>
	d3dSceneApp(HINSTANCE hInstance);

	~d3dSceneApp();

	virtual bool Initialize()override;

private:
	virtual void OnResize()override;
	virtual void Update(const GameTimer& gt)override;
	virtual void Draw(const GameTimer& gt)override;

	void BuildDescriptorHeaps();

	CubeMap* cubeMap_sky;
	std::unordered_map<std::string, std::unique_ptr<Texture>>  m_Textures;
	CD3DX12_ROOT_PARAMETER slotRootParameter[5];
	//d3dSceneApp* mSceneApp;

};