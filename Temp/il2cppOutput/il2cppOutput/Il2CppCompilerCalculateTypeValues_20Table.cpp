#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// Wrld.Streaming.GameObjectStreamer
struct GameObjectStreamer_t58553855;
// Wrld.Meshes.MeshUploader
struct MeshUploader_t2514496830;
// UnityEngine.Transform
struct Transform_t162339628;
// Wrld.Space.UnityWorldSpaceCoordinateFrame
struct UnityWorldSpaceCoordinateFrame_t1964903341;
// Wrld.Resources.Terrain.Heights.TerrainHeightProvider
struct TerrainHeightProvider_t864035057;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,Wrld.Streaming.GameObjectRecord>
struct Dictionary_2_t663523033;
// UnityEngine.GameObject
struct GameObject_t2585357824;
// Wrld.Materials.MaterialRepository
struct MaterialRepository_t2603564751;
// System.Collections.Generic.Dictionary`2<System.String,Wrld.Meshes.PreparedMeshRecord>
struct Dictionary_2_t1918756887;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t3438784243;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t1552550425;
// System.Int32[]
struct Int32U5BU5D_t1512348946;
// System.IntPtr[]
struct IntPtrU5BU5D_t2341601032;
// System.Collections.IDictionary
struct IDictionary_t2371933080;
// Wrld.Common.Maths.DoubleVector3[]
struct DoubleVector3U5BU5D_t616237692;
// System.Collections.Generic.List`1<System.Runtime.InteropServices.GCHandle>
struct List_1_t3608079320;
// Wrld.Meshes.PreparedMeshRepository
struct PreparedMeshRepository_t1221402556;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t3233086080;
// Wrld.Meshes.MeshBuilder/<CreatePreparedMeshes>c__AnonStorey0
struct U3CCreatePreparedMeshesU3Ec__AnonStorey0_t912803738;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>,System.Int32>
struct Func_2_t2344701647;
// Wrld.Streaming.GameObjectRepository
struct GameObjectRepository_t3643871365;
// Wrld.Streaming.GameObjectFactory
struct GameObjectFactory_t2430137727;
// System.Void
struct Void_t2987813122;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t833023919;
// Wrld.Meshes.PreparedMesh[]
struct PreparedMeshU5BU5D_t2944829490;
// Wrld.Materials.TextureLoadHandler
struct TextureLoadHandler_t265694606;
// Wrld.MapGameObjectScene
struct MapGameObjectScene_t2105249059;
// Wrld.StreamingUpdater
struct StreamingUpdater_t2242571017;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t1465719297;
// System.IAsyncResult
struct IAsyncResult_t2632705616;
// System.AsyncCallback
struct AsyncCallback_t1366190822;
// UnityEngine.XR.iOS.UnityARAnchorManager
struct UnityARAnchorManager_t1296195923;
// UnityEngine.MeshFilter
struct MeshFilter_t3511768593;




#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef MATRIX4X4EXTENSIONS_T2605440422_H
#define MATRIX4X4EXTENSIONS_T2605440422_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.Common.Maths.Matrix4x4Extensions
struct  Matrix4x4Extensions_t2605440422  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATRIX4X4EXTENSIONS_T2605440422_H
#ifndef MAPGAMEOBJECTSCENE_T2105249059_H
#define MAPGAMEOBJECTSCENE_T2105249059_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.MapGameObjectScene
struct  MapGameObjectScene_t2105249059  : public RuntimeObject
{
public:
	// Wrld.Streaming.GameObjectStreamer Wrld.MapGameObjectScene::m_terrainStreamer
	GameObjectStreamer_t58553855 * ___m_terrainStreamer_0;
	// Wrld.Streaming.GameObjectStreamer Wrld.MapGameObjectScene::m_roadStreamer
	GameObjectStreamer_t58553855 * ___m_roadStreamer_1;
	// Wrld.Streaming.GameObjectStreamer Wrld.MapGameObjectScene::m_buildingStreamer
	GameObjectStreamer_t58553855 * ___m_buildingStreamer_2;
	// Wrld.Meshes.MeshUploader Wrld.MapGameObjectScene::m_meshUploader
	MeshUploader_t2514496830 * ___m_meshUploader_3;

public:
	inline static int32_t get_offset_of_m_terrainStreamer_0() { return static_cast<int32_t>(offsetof(MapGameObjectScene_t2105249059, ___m_terrainStreamer_0)); }
	inline GameObjectStreamer_t58553855 * get_m_terrainStreamer_0() const { return ___m_terrainStreamer_0; }
	inline GameObjectStreamer_t58553855 ** get_address_of_m_terrainStreamer_0() { return &___m_terrainStreamer_0; }
	inline void set_m_terrainStreamer_0(GameObjectStreamer_t58553855 * value)
	{
		___m_terrainStreamer_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_terrainStreamer_0), value);
	}

	inline static int32_t get_offset_of_m_roadStreamer_1() { return static_cast<int32_t>(offsetof(MapGameObjectScene_t2105249059, ___m_roadStreamer_1)); }
	inline GameObjectStreamer_t58553855 * get_m_roadStreamer_1() const { return ___m_roadStreamer_1; }
	inline GameObjectStreamer_t58553855 ** get_address_of_m_roadStreamer_1() { return &___m_roadStreamer_1; }
	inline void set_m_roadStreamer_1(GameObjectStreamer_t58553855 * value)
	{
		___m_roadStreamer_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_roadStreamer_1), value);
	}

	inline static int32_t get_offset_of_m_buildingStreamer_2() { return static_cast<int32_t>(offsetof(MapGameObjectScene_t2105249059, ___m_buildingStreamer_2)); }
	inline GameObjectStreamer_t58553855 * get_m_buildingStreamer_2() const { return ___m_buildingStreamer_2; }
	inline GameObjectStreamer_t58553855 ** get_address_of_m_buildingStreamer_2() { return &___m_buildingStreamer_2; }
	inline void set_m_buildingStreamer_2(GameObjectStreamer_t58553855 * value)
	{
		___m_buildingStreamer_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_buildingStreamer_2), value);
	}

	inline static int32_t get_offset_of_m_meshUploader_3() { return static_cast<int32_t>(offsetof(MapGameObjectScene_t2105249059, ___m_meshUploader_3)); }
	inline MeshUploader_t2514496830 * get_m_meshUploader_3() const { return ___m_meshUploader_3; }
	inline MeshUploader_t2514496830 ** get_address_of_m_meshUploader_3() { return &___m_meshUploader_3; }
	inline void set_m_meshUploader_3(MeshUploader_t2514496830 * value)
	{
		___m_meshUploader_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_meshUploader_3), value);
	}
};

struct MapGameObjectScene_t2105249059_StaticFields
{
public:
	// Wrld.MapGameObjectScene Wrld.MapGameObjectScene::ms_instance
	MapGameObjectScene_t2105249059 * ___ms_instance_4;

public:
	inline static int32_t get_offset_of_ms_instance_4() { return static_cast<int32_t>(offsetof(MapGameObjectScene_t2105249059_StaticFields, ___ms_instance_4)); }
	inline MapGameObjectScene_t2105249059 * get_ms_instance_4() const { return ___ms_instance_4; }
	inline MapGameObjectScene_t2105249059 ** get_address_of_ms_instance_4() { return &___ms_instance_4; }
	inline void set_ms_instance_4(MapGameObjectScene_t2105249059 * value)
	{
		___ms_instance_4 = value;
		Il2CppCodeGenWriteBarrier((&___ms_instance_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MAPGAMEOBJECTSCENE_T2105249059_H
#ifndef GAMEOBJECTFACTORY_T2430137727_H
#define GAMEOBJECTFACTORY_T2430137727_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.Streaming.GameObjectFactory
struct  GameObjectFactory_t2430137727  : public RuntimeObject
{
public:
	// UnityEngine.Transform Wrld.Streaming.GameObjectFactory::m_parentTransform
	Transform_t162339628 * ___m_parentTransform_0;

public:
	inline static int32_t get_offset_of_m_parentTransform_0() { return static_cast<int32_t>(offsetof(GameObjectFactory_t2430137727, ___m_parentTransform_0)); }
	inline Transform_t162339628 * get_m_parentTransform_0() const { return ___m_parentTransform_0; }
	inline Transform_t162339628 ** get_address_of_m_parentTransform_0() { return &___m_parentTransform_0; }
	inline void set_m_parentTransform_0(Transform_t162339628 * value)
	{
		___m_parentTransform_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_parentTransform_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECTFACTORY_T2430137727_H
#ifndef UNITYWORLDSPACETRANSFORMUPDATESTRATEGY_T3676755343_H
#define UNITYWORLDSPACETRANSFORMUPDATESTRATEGY_T3676755343_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.Space.UnityWorldSpaceTransformUpdateStrategy
struct  UnityWorldSpaceTransformUpdateStrategy_t3676755343  : public RuntimeObject
{
public:
	// Wrld.Space.UnityWorldSpaceCoordinateFrame Wrld.Space.UnityWorldSpaceTransformUpdateStrategy::m_frame
	UnityWorldSpaceCoordinateFrame_t1964903341 * ___m_frame_0;

public:
	inline static int32_t get_offset_of_m_frame_0() { return static_cast<int32_t>(offsetof(UnityWorldSpaceTransformUpdateStrategy_t3676755343, ___m_frame_0)); }
	inline UnityWorldSpaceCoordinateFrame_t1964903341 * get_m_frame_0() const { return ___m_frame_0; }
	inline UnityWorldSpaceCoordinateFrame_t1964903341 ** get_address_of_m_frame_0() { return &___m_frame_0; }
	inline void set_m_frame_0(UnityWorldSpaceCoordinateFrame_t1964903341 * value)
	{
		___m_frame_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_frame_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYWORLDSPACETRANSFORMUPDATESTRATEGY_T3676755343_H
#ifndef VALUETYPE_T1216698651_H
#define VALUETYPE_T1216698651_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t1216698651  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t1216698651_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t1216698651_marshaled_com
{
};
#endif // VALUETYPE_T1216698651_H
#ifndef COORDINATECONVERSIONS_T2437884897_H
#define COORDINATECONVERSIONS_T2437884897_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.Space.CoordinateConversions
struct  CoordinateConversions_t2437884897  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COORDINATECONVERSIONS_T2437884897_H
#ifndef RESOURCECEILINGPROVIDER_T84502825_H
#define RESOURCECEILINGPROVIDER_T84502825_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.Streaming.ResourceCeilingProvider
struct  ResourceCeilingProvider_t84502825  : public RuntimeObject
{
public:
	// Wrld.Resources.Terrain.Heights.TerrainHeightProvider Wrld.Streaming.ResourceCeilingProvider::m_terrainHeightProvider
	TerrainHeightProvider_t864035057 * ___m_terrainHeightProvider_0;

public:
	inline static int32_t get_offset_of_m_terrainHeightProvider_0() { return static_cast<int32_t>(offsetof(ResourceCeilingProvider_t84502825, ___m_terrainHeightProvider_0)); }
	inline TerrainHeightProvider_t864035057 * get_m_terrainHeightProvider_0() const { return ___m_terrainHeightProvider_0; }
	inline TerrainHeightProvider_t864035057 ** get_address_of_m_terrainHeightProvider_0() { return &___m_terrainHeightProvider_0; }
	inline void set_m_terrainHeightProvider_0(TerrainHeightProvider_t864035057 * value)
	{
		___m_terrainHeightProvider_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_terrainHeightProvider_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOURCECEILINGPROVIDER_T84502825_H
#ifndef EARTHCONSTANTS_T1378983928_H
#define EARTHCONSTANTS_T1378983928_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.Space.EarthConstants
struct  EarthConstants_t1378983928  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EARTHCONSTANTS_T1378983928_H
#ifndef TERRAINHEIGHTPROVIDER_T864035057_H
#define TERRAINHEIGHTPROVIDER_T864035057_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.Resources.Terrain.Heights.TerrainHeightProvider
struct  TerrainHeightProvider_t864035057  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TERRAINHEIGHTPROVIDER_T864035057_H
#ifndef GAMEOBJECTREPOSITORY_T3643871365_H
#define GAMEOBJECTREPOSITORY_T3643871365_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.Streaming.GameObjectRepository
struct  GameObjectRepository_t3643871365  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,Wrld.Streaming.GameObjectRecord> Wrld.Streaming.GameObjectRepository::m_gameObjectsById
	Dictionary_2_t663523033 * ___m_gameObjectsById_0;
	// UnityEngine.GameObject Wrld.Streaming.GameObjectRepository::m_root
	GameObject_t2585357824 * ___m_root_1;
	// Wrld.Materials.MaterialRepository Wrld.Streaming.GameObjectRepository::m_materialRepository
	MaterialRepository_t2603564751 * ___m_materialRepository_2;

public:
	inline static int32_t get_offset_of_m_gameObjectsById_0() { return static_cast<int32_t>(offsetof(GameObjectRepository_t3643871365, ___m_gameObjectsById_0)); }
	inline Dictionary_2_t663523033 * get_m_gameObjectsById_0() const { return ___m_gameObjectsById_0; }
	inline Dictionary_2_t663523033 ** get_address_of_m_gameObjectsById_0() { return &___m_gameObjectsById_0; }
	inline void set_m_gameObjectsById_0(Dictionary_2_t663523033 * value)
	{
		___m_gameObjectsById_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_gameObjectsById_0), value);
	}

	inline static int32_t get_offset_of_m_root_1() { return static_cast<int32_t>(offsetof(GameObjectRepository_t3643871365, ___m_root_1)); }
	inline GameObject_t2585357824 * get_m_root_1() const { return ___m_root_1; }
	inline GameObject_t2585357824 ** get_address_of_m_root_1() { return &___m_root_1; }
	inline void set_m_root_1(GameObject_t2585357824 * value)
	{
		___m_root_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_root_1), value);
	}

	inline static int32_t get_offset_of_m_materialRepository_2() { return static_cast<int32_t>(offsetof(GameObjectRepository_t3643871365, ___m_materialRepository_2)); }
	inline MaterialRepository_t2603564751 * get_m_materialRepository_2() const { return ___m_materialRepository_2; }
	inline MaterialRepository_t2603564751 ** get_address_of_m_materialRepository_2() { return &___m_materialRepository_2; }
	inline void set_m_materialRepository_2(MaterialRepository_t2603564751 * value)
	{
		___m_materialRepository_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_materialRepository_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECTREPOSITORY_T3643871365_H
#ifndef PREPAREDMESHREPOSITORY_T1221402556_H
#define PREPAREDMESHREPOSITORY_T1221402556_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.Meshes.PreparedMeshRepository
struct  PreparedMeshRepository_t1221402556  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,Wrld.Meshes.PreparedMeshRecord> Wrld.Meshes.PreparedMeshRepository::m_meshRecords
	Dictionary_2_t1918756887 * ___m_meshRecords_0;

public:
	inline static int32_t get_offset_of_m_meshRecords_0() { return static_cast<int32_t>(offsetof(PreparedMeshRepository_t1221402556, ___m_meshRecords_0)); }
	inline Dictionary_2_t1918756887 * get_m_meshRecords_0() const { return ___m_meshRecords_0; }
	inline Dictionary_2_t1918756887 ** get_address_of_m_meshRecords_0() { return &___m_meshRecords_0; }
	inline void set_m_meshRecords_0(Dictionary_2_t1918756887 * value)
	{
		___m_meshRecords_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_meshRecords_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PREPAREDMESHREPOSITORY_T1221402556_H
#ifndef PREPAREDMESH_T4152516835_H
#define PREPAREDMESH_T4152516835_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.Meshes.PreparedMesh
struct  PreparedMesh_t4152516835  : public RuntimeObject
{
public:
	// UnityEngine.Vector3[] Wrld.Meshes.PreparedMesh::m_verts
	Vector3U5BU5D_t3438784243* ___m_verts_0;
	// UnityEngine.Vector2[] Wrld.Meshes.PreparedMesh::m_uvs
	Vector2U5BU5D_t1552550425* ___m_uvs_1;
	// UnityEngine.Vector2[] Wrld.Meshes.PreparedMesh::m_uv2s
	Vector2U5BU5D_t1552550425* ___m_uv2s_2;
	// System.Int32[] Wrld.Meshes.PreparedMesh::m_indices
	Int32U5BU5D_t1512348946* ___m_indices_3;
	// System.String Wrld.Meshes.PreparedMesh::m_name
	String_t* ___m_name_4;
	// UnityEngine.Vector3[] Wrld.Meshes.PreparedMesh::m_normals
	Vector3U5BU5D_t3438784243* ___m_normals_5;

public:
	inline static int32_t get_offset_of_m_verts_0() { return static_cast<int32_t>(offsetof(PreparedMesh_t4152516835, ___m_verts_0)); }
	inline Vector3U5BU5D_t3438784243* get_m_verts_0() const { return ___m_verts_0; }
	inline Vector3U5BU5D_t3438784243** get_address_of_m_verts_0() { return &___m_verts_0; }
	inline void set_m_verts_0(Vector3U5BU5D_t3438784243* value)
	{
		___m_verts_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_verts_0), value);
	}

	inline static int32_t get_offset_of_m_uvs_1() { return static_cast<int32_t>(offsetof(PreparedMesh_t4152516835, ___m_uvs_1)); }
	inline Vector2U5BU5D_t1552550425* get_m_uvs_1() const { return ___m_uvs_1; }
	inline Vector2U5BU5D_t1552550425** get_address_of_m_uvs_1() { return &___m_uvs_1; }
	inline void set_m_uvs_1(Vector2U5BU5D_t1552550425* value)
	{
		___m_uvs_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_uvs_1), value);
	}

	inline static int32_t get_offset_of_m_uv2s_2() { return static_cast<int32_t>(offsetof(PreparedMesh_t4152516835, ___m_uv2s_2)); }
	inline Vector2U5BU5D_t1552550425* get_m_uv2s_2() const { return ___m_uv2s_2; }
	inline Vector2U5BU5D_t1552550425** get_address_of_m_uv2s_2() { return &___m_uv2s_2; }
	inline void set_m_uv2s_2(Vector2U5BU5D_t1552550425* value)
	{
		___m_uv2s_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_uv2s_2), value);
	}

	inline static int32_t get_offset_of_m_indices_3() { return static_cast<int32_t>(offsetof(PreparedMesh_t4152516835, ___m_indices_3)); }
	inline Int32U5BU5D_t1512348946* get_m_indices_3() const { return ___m_indices_3; }
	inline Int32U5BU5D_t1512348946** get_address_of_m_indices_3() { return &___m_indices_3; }
	inline void set_m_indices_3(Int32U5BU5D_t1512348946* value)
	{
		___m_indices_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_indices_3), value);
	}

	inline static int32_t get_offset_of_m_name_4() { return static_cast<int32_t>(offsetof(PreparedMesh_t4152516835, ___m_name_4)); }
	inline String_t* get_m_name_4() const { return ___m_name_4; }
	inline String_t** get_address_of_m_name_4() { return &___m_name_4; }
	inline void set_m_name_4(String_t* value)
	{
		___m_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_name_4), value);
	}

	inline static int32_t get_offset_of_m_normals_5() { return static_cast<int32_t>(offsetof(PreparedMesh_t4152516835, ___m_normals_5)); }
	inline Vector3U5BU5D_t3438784243* get_m_normals_5() const { return ___m_normals_5; }
	inline Vector3U5BU5D_t3438784243** get_address_of_m_normals_5() { return &___m_normals_5; }
	inline void set_m_normals_5(Vector3U5BU5D_t3438784243* value)
	{
		___m_normals_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_normals_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PREPAREDMESH_T4152516835_H
#ifndef APIKEYPREVALIDATOR_T579177306_H
#define APIKEYPREVALIDATOR_T579177306_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.Scripts.Utilities.APIKeyPrevalidator
struct  APIKeyPrevalidator_t579177306  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APIKEYPREVALIDATOR_T579177306_H
#ifndef EXCEPTION_T1339058960_H
#define EXCEPTION_T1339058960_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t1339058960  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t2341601032* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t1339058960 * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t1339058960, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t2341601032* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t2341601032** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t2341601032* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t1339058960, ___inner_exception_1)); }
	inline Exception_t1339058960 * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t1339058960 ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t1339058960 * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t1339058960, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t1339058960, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t1339058960, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t1339058960, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t1339058960, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t1339058960, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t1339058960, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t1339058960, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t1339058960, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T1339058960_H
#ifndef ASSERTHANDLER_T4134007346_H
#define ASSERTHANDLER_T4134007346_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.AssertHandler
struct  AssertHandler_t4134007346  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSERTHANDLER_T4134007346_H
#ifndef UNPACKEDMESH_T4194896125_H
#define UNPACKEDMESH_T4194896125_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.Meshes.MeshUploader/UnpackedMesh
struct  UnpackedMesh_t4194896125  : public RuntimeObject
{
public:
	// UnityEngine.Vector3[] Wrld.Meshes.MeshUploader/UnpackedMesh::vertices
	Vector3U5BU5D_t3438784243* ___vertices_0;
	// UnityEngine.Vector2[] Wrld.Meshes.MeshUploader/UnpackedMesh::uvs
	Vector2U5BU5D_t1552550425* ___uvs_1;
	// UnityEngine.Vector2[] Wrld.Meshes.MeshUploader/UnpackedMesh::uv2s
	Vector2U5BU5D_t1552550425* ___uv2s_2;
	// System.Int32[] Wrld.Meshes.MeshUploader/UnpackedMesh::indices
	Int32U5BU5D_t1512348946* ___indices_3;
	// Wrld.Common.Maths.DoubleVector3[] Wrld.Meshes.MeshUploader/UnpackedMesh::originECEF
	DoubleVector3U5BU5D_t616237692* ___originECEF_4;
	// System.String Wrld.Meshes.MeshUploader/UnpackedMesh::materialName
	String_t* ___materialName_5;
	// System.String Wrld.Meshes.MeshUploader/UnpackedMesh::name
	String_t* ___name_6;
	// System.Collections.Generic.List`1<System.Runtime.InteropServices.GCHandle> Wrld.Meshes.MeshUploader/UnpackedMesh::gcHandles
	List_1_t3608079320 * ___gcHandles_7;

public:
	inline static int32_t get_offset_of_vertices_0() { return static_cast<int32_t>(offsetof(UnpackedMesh_t4194896125, ___vertices_0)); }
	inline Vector3U5BU5D_t3438784243* get_vertices_0() const { return ___vertices_0; }
	inline Vector3U5BU5D_t3438784243** get_address_of_vertices_0() { return &___vertices_0; }
	inline void set_vertices_0(Vector3U5BU5D_t3438784243* value)
	{
		___vertices_0 = value;
		Il2CppCodeGenWriteBarrier((&___vertices_0), value);
	}

	inline static int32_t get_offset_of_uvs_1() { return static_cast<int32_t>(offsetof(UnpackedMesh_t4194896125, ___uvs_1)); }
	inline Vector2U5BU5D_t1552550425* get_uvs_1() const { return ___uvs_1; }
	inline Vector2U5BU5D_t1552550425** get_address_of_uvs_1() { return &___uvs_1; }
	inline void set_uvs_1(Vector2U5BU5D_t1552550425* value)
	{
		___uvs_1 = value;
		Il2CppCodeGenWriteBarrier((&___uvs_1), value);
	}

	inline static int32_t get_offset_of_uv2s_2() { return static_cast<int32_t>(offsetof(UnpackedMesh_t4194896125, ___uv2s_2)); }
	inline Vector2U5BU5D_t1552550425* get_uv2s_2() const { return ___uv2s_2; }
	inline Vector2U5BU5D_t1552550425** get_address_of_uv2s_2() { return &___uv2s_2; }
	inline void set_uv2s_2(Vector2U5BU5D_t1552550425* value)
	{
		___uv2s_2 = value;
		Il2CppCodeGenWriteBarrier((&___uv2s_2), value);
	}

	inline static int32_t get_offset_of_indices_3() { return static_cast<int32_t>(offsetof(UnpackedMesh_t4194896125, ___indices_3)); }
	inline Int32U5BU5D_t1512348946* get_indices_3() const { return ___indices_3; }
	inline Int32U5BU5D_t1512348946** get_address_of_indices_3() { return &___indices_3; }
	inline void set_indices_3(Int32U5BU5D_t1512348946* value)
	{
		___indices_3 = value;
		Il2CppCodeGenWriteBarrier((&___indices_3), value);
	}

	inline static int32_t get_offset_of_originECEF_4() { return static_cast<int32_t>(offsetof(UnpackedMesh_t4194896125, ___originECEF_4)); }
	inline DoubleVector3U5BU5D_t616237692* get_originECEF_4() const { return ___originECEF_4; }
	inline DoubleVector3U5BU5D_t616237692** get_address_of_originECEF_4() { return &___originECEF_4; }
	inline void set_originECEF_4(DoubleVector3U5BU5D_t616237692* value)
	{
		___originECEF_4 = value;
		Il2CppCodeGenWriteBarrier((&___originECEF_4), value);
	}

	inline static int32_t get_offset_of_materialName_5() { return static_cast<int32_t>(offsetof(UnpackedMesh_t4194896125, ___materialName_5)); }
	inline String_t* get_materialName_5() const { return ___materialName_5; }
	inline String_t** get_address_of_materialName_5() { return &___materialName_5; }
	inline void set_materialName_5(String_t* value)
	{
		___materialName_5 = value;
		Il2CppCodeGenWriteBarrier((&___materialName_5), value);
	}

	inline static int32_t get_offset_of_name_6() { return static_cast<int32_t>(offsetof(UnpackedMesh_t4194896125, ___name_6)); }
	inline String_t* get_name_6() const { return ___name_6; }
	inline String_t** get_address_of_name_6() { return &___name_6; }
	inline void set_name_6(String_t* value)
	{
		___name_6 = value;
		Il2CppCodeGenWriteBarrier((&___name_6), value);
	}

	inline static int32_t get_offset_of_gcHandles_7() { return static_cast<int32_t>(offsetof(UnpackedMesh_t4194896125, ___gcHandles_7)); }
	inline List_1_t3608079320 * get_gcHandles_7() const { return ___gcHandles_7; }
	inline List_1_t3608079320 ** get_address_of_gcHandles_7() { return &___gcHandles_7; }
	inline void set_gcHandles_7(List_1_t3608079320 * value)
	{
		___gcHandles_7 = value;
		Il2CppCodeGenWriteBarrier((&___gcHandles_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNPACKEDMESH_T4194896125_H
#ifndef MESHUPLOADER_T2514496830_H
#define MESHUPLOADER_T2514496830_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.Meshes.MeshUploader
struct  MeshUploader_t2514496830  : public RuntimeObject
{
public:

public:
};

struct MeshUploader_t2514496830_StaticFields
{
public:
	// Wrld.Meshes.PreparedMeshRepository Wrld.Meshes.MeshUploader::m_preparedMeshes
	PreparedMeshRepository_t1221402556 * ___m_preparedMeshes_0;

public:
	inline static int32_t get_offset_of_m_preparedMeshes_0() { return static_cast<int32_t>(offsetof(MeshUploader_t2514496830_StaticFields, ___m_preparedMeshes_0)); }
	inline PreparedMeshRepository_t1221402556 * get_m_preparedMeshes_0() const { return ___m_preparedMeshes_0; }
	inline PreparedMeshRepository_t1221402556 ** get_address_of_m_preparedMeshes_0() { return &___m_preparedMeshes_0; }
	inline void set_m_preparedMeshes_0(PreparedMeshRepository_t1221402556 * value)
	{
		___m_preparedMeshes_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_preparedMeshes_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESHUPLOADER_T2514496830_H
#ifndef U3CCREATEPREPAREDMESHESU3EC__ANONSTOREY1_T247103789_H
#define U3CCREATEPREPAREDMESHESU3EC__ANONSTOREY1_T247103789_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.Meshes.MeshBuilder/<CreatePreparedMeshes>c__AnonStorey1
struct  U3CCreatePreparedMeshesU3Ec__AnonStorey1_t247103789  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> Wrld.Meshes.MeshBuilder/<CreatePreparedMeshes>c__AnonStorey1::reversedRemapping
	Dictionary_2_t3233086080 * ___reversedRemapping_0;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> Wrld.Meshes.MeshBuilder/<CreatePreparedMeshes>c__AnonStorey1::indexRemapper
	Dictionary_2_t3233086080 * ___indexRemapper_1;
	// Wrld.Meshes.MeshBuilder/<CreatePreparedMeshes>c__AnonStorey0 Wrld.Meshes.MeshBuilder/<CreatePreparedMeshes>c__AnonStorey1::<>f__ref$0
	U3CCreatePreparedMeshesU3Ec__AnonStorey0_t912803738 * ___U3CU3Ef__refU240_2;

public:
	inline static int32_t get_offset_of_reversedRemapping_0() { return static_cast<int32_t>(offsetof(U3CCreatePreparedMeshesU3Ec__AnonStorey1_t247103789, ___reversedRemapping_0)); }
	inline Dictionary_2_t3233086080 * get_reversedRemapping_0() const { return ___reversedRemapping_0; }
	inline Dictionary_2_t3233086080 ** get_address_of_reversedRemapping_0() { return &___reversedRemapping_0; }
	inline void set_reversedRemapping_0(Dictionary_2_t3233086080 * value)
	{
		___reversedRemapping_0 = value;
		Il2CppCodeGenWriteBarrier((&___reversedRemapping_0), value);
	}

	inline static int32_t get_offset_of_indexRemapper_1() { return static_cast<int32_t>(offsetof(U3CCreatePreparedMeshesU3Ec__AnonStorey1_t247103789, ___indexRemapper_1)); }
	inline Dictionary_2_t3233086080 * get_indexRemapper_1() const { return ___indexRemapper_1; }
	inline Dictionary_2_t3233086080 ** get_address_of_indexRemapper_1() { return &___indexRemapper_1; }
	inline void set_indexRemapper_1(Dictionary_2_t3233086080 * value)
	{
		___indexRemapper_1 = value;
		Il2CppCodeGenWriteBarrier((&___indexRemapper_1), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__refU240_2() { return static_cast<int32_t>(offsetof(U3CCreatePreparedMeshesU3Ec__AnonStorey1_t247103789, ___U3CU3Ef__refU240_2)); }
	inline U3CCreatePreparedMeshesU3Ec__AnonStorey0_t912803738 * get_U3CU3Ef__refU240_2() const { return ___U3CU3Ef__refU240_2; }
	inline U3CCreatePreparedMeshesU3Ec__AnonStorey0_t912803738 ** get_address_of_U3CU3Ef__refU240_2() { return &___U3CU3Ef__refU240_2; }
	inline void set_U3CU3Ef__refU240_2(U3CCreatePreparedMeshesU3Ec__AnonStorey0_t912803738 * value)
	{
		___U3CU3Ef__refU240_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__refU240_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CCREATEPREPAREDMESHESU3EC__ANONSTOREY1_T247103789_H
#ifndef U3CCREATEPREPAREDMESHESU3EC__ANONSTOREY0_T912803738_H
#define U3CCREATEPREPAREDMESHESU3EC__ANONSTOREY0_T912803738_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.Meshes.MeshBuilder/<CreatePreparedMeshes>c__AnonStorey0
struct  U3CCreatePreparedMeshesU3Ec__AnonStorey0_t912803738  : public RuntimeObject
{
public:
	// UnityEngine.Vector3[] Wrld.Meshes.MeshBuilder/<CreatePreparedMeshes>c__AnonStorey0::verts
	Vector3U5BU5D_t3438784243* ___verts_0;
	// UnityEngine.Vector2[] Wrld.Meshes.MeshBuilder/<CreatePreparedMeshes>c__AnonStorey0::uvs
	Vector2U5BU5D_t1552550425* ___uvs_1;
	// UnityEngine.Vector2[] Wrld.Meshes.MeshBuilder/<CreatePreparedMeshes>c__AnonStorey0::uv2s
	Vector2U5BU5D_t1552550425* ___uv2s_2;

public:
	inline static int32_t get_offset_of_verts_0() { return static_cast<int32_t>(offsetof(U3CCreatePreparedMeshesU3Ec__AnonStorey0_t912803738, ___verts_0)); }
	inline Vector3U5BU5D_t3438784243* get_verts_0() const { return ___verts_0; }
	inline Vector3U5BU5D_t3438784243** get_address_of_verts_0() { return &___verts_0; }
	inline void set_verts_0(Vector3U5BU5D_t3438784243* value)
	{
		___verts_0 = value;
		Il2CppCodeGenWriteBarrier((&___verts_0), value);
	}

	inline static int32_t get_offset_of_uvs_1() { return static_cast<int32_t>(offsetof(U3CCreatePreparedMeshesU3Ec__AnonStorey0_t912803738, ___uvs_1)); }
	inline Vector2U5BU5D_t1552550425* get_uvs_1() const { return ___uvs_1; }
	inline Vector2U5BU5D_t1552550425** get_address_of_uvs_1() { return &___uvs_1; }
	inline void set_uvs_1(Vector2U5BU5D_t1552550425* value)
	{
		___uvs_1 = value;
		Il2CppCodeGenWriteBarrier((&___uvs_1), value);
	}

	inline static int32_t get_offset_of_uv2s_2() { return static_cast<int32_t>(offsetof(U3CCreatePreparedMeshesU3Ec__AnonStorey0_t912803738, ___uv2s_2)); }
	inline Vector2U5BU5D_t1552550425* get_uv2s_2() const { return ___uv2s_2; }
	inline Vector2U5BU5D_t1552550425** get_address_of_uv2s_2() { return &___uv2s_2; }
	inline void set_uv2s_2(Vector2U5BU5D_t1552550425* value)
	{
		___uv2s_2 = value;
		Il2CppCodeGenWriteBarrier((&___uv2s_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CCREATEPREPAREDMESHESU3EC__ANONSTOREY0_T912803738_H
#ifndef MESHBUILDER_T2886199220_H
#define MESHBUILDER_T2886199220_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.Meshes.MeshBuilder
struct  MeshBuilder_t2886199220  : public RuntimeObject
{
public:

public:
};

struct MeshBuilder_t2886199220_StaticFields
{
public:
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>,System.Int32> Wrld.Meshes.MeshBuilder::<>f__am$cache0
	Func_2_t2344701647 * ___U3CU3Ef__amU24cache0_0;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>,System.Int32> Wrld.Meshes.MeshBuilder::<>f__am$cache1
	Func_2_t2344701647 * ___U3CU3Ef__amU24cache1_1;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_0() { return static_cast<int32_t>(offsetof(MeshBuilder_t2886199220_StaticFields, ___U3CU3Ef__amU24cache0_0)); }
	inline Func_2_t2344701647 * get_U3CU3Ef__amU24cache0_0() const { return ___U3CU3Ef__amU24cache0_0; }
	inline Func_2_t2344701647 ** get_address_of_U3CU3Ef__amU24cache0_0() { return &___U3CU3Ef__amU24cache0_0; }
	inline void set_U3CU3Ef__amU24cache0_0(Func_2_t2344701647 * value)
	{
		___U3CU3Ef__amU24cache0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_1() { return static_cast<int32_t>(offsetof(MeshBuilder_t2886199220_StaticFields, ___U3CU3Ef__amU24cache1_1)); }
	inline Func_2_t2344701647 * get_U3CU3Ef__amU24cache1_1() const { return ___U3CU3Ef__amU24cache1_1; }
	inline Func_2_t2344701647 ** get_address_of_U3CU3Ef__amU24cache1_1() { return &___U3CU3Ef__amU24cache1_1; }
	inline void set_U3CU3Ef__amU24cache1_1(Func_2_t2344701647 * value)
	{
		___U3CU3Ef__amU24cache1_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache1_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESHBUILDER_T2886199220_H
#ifndef QUATERNIONEXTENSIONS_T500210232_H
#define QUATERNIONEXTENSIONS_T500210232_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.Common.Maths.QuaternionExtensions
struct  QuaternionExtensions_t500210232  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNIONEXTENSIONS_T500210232_H
#ifndef STREAMINGUPDATER_T2242571017_H
#define STREAMINGUPDATER_T2242571017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.StreamingUpdater
struct  StreamingUpdater_t2242571017  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAMINGUPDATER_T2242571017_H
#ifndef GAMEOBJECTSTREAMER_T58553855_H
#define GAMEOBJECTSTREAMER_T58553855_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.Streaming.GameObjectStreamer
struct  GameObjectStreamer_t58553855  : public RuntimeObject
{
public:
	// Wrld.Streaming.GameObjectRepository Wrld.Streaming.GameObjectStreamer::m_gameObjectRepository
	GameObjectRepository_t3643871365 * ___m_gameObjectRepository_0;
	// Wrld.Materials.MaterialRepository Wrld.Streaming.GameObjectStreamer::m_materialRepository
	MaterialRepository_t2603564751 * ___m_materialRepository_1;
	// Wrld.Streaming.GameObjectFactory Wrld.Streaming.GameObjectStreamer::m_gameObjectCreator
	GameObjectFactory_t2430137727 * ___m_gameObjectCreator_2;
	// System.Boolean Wrld.Streaming.GameObjectStreamer::m_collisions
	bool ___m_collisions_3;

public:
	inline static int32_t get_offset_of_m_gameObjectRepository_0() { return static_cast<int32_t>(offsetof(GameObjectStreamer_t58553855, ___m_gameObjectRepository_0)); }
	inline GameObjectRepository_t3643871365 * get_m_gameObjectRepository_0() const { return ___m_gameObjectRepository_0; }
	inline GameObjectRepository_t3643871365 ** get_address_of_m_gameObjectRepository_0() { return &___m_gameObjectRepository_0; }
	inline void set_m_gameObjectRepository_0(GameObjectRepository_t3643871365 * value)
	{
		___m_gameObjectRepository_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_gameObjectRepository_0), value);
	}

	inline static int32_t get_offset_of_m_materialRepository_1() { return static_cast<int32_t>(offsetof(GameObjectStreamer_t58553855, ___m_materialRepository_1)); }
	inline MaterialRepository_t2603564751 * get_m_materialRepository_1() const { return ___m_materialRepository_1; }
	inline MaterialRepository_t2603564751 ** get_address_of_m_materialRepository_1() { return &___m_materialRepository_1; }
	inline void set_m_materialRepository_1(MaterialRepository_t2603564751 * value)
	{
		___m_materialRepository_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_materialRepository_1), value);
	}

	inline static int32_t get_offset_of_m_gameObjectCreator_2() { return static_cast<int32_t>(offsetof(GameObjectStreamer_t58553855, ___m_gameObjectCreator_2)); }
	inline GameObjectFactory_t2430137727 * get_m_gameObjectCreator_2() const { return ___m_gameObjectCreator_2; }
	inline GameObjectFactory_t2430137727 ** get_address_of_m_gameObjectCreator_2() { return &___m_gameObjectCreator_2; }
	inline void set_m_gameObjectCreator_2(GameObjectFactory_t2430137727 * value)
	{
		___m_gameObjectCreator_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_gameObjectCreator_2), value);
	}

	inline static int32_t get_offset_of_m_collisions_3() { return static_cast<int32_t>(offsetof(GameObjectStreamer_t58553855, ___m_collisions_3)); }
	inline bool get_m_collisions_3() const { return ___m_collisions_3; }
	inline bool* get_address_of_m_collisions_3() { return &___m_collisions_3; }
	inline void set_m_collisions_3(bool value)
	{
		___m_collisions_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECTSTREAMER_T58553855_H
#ifndef U24ARRAYTYPEU3D24_T613818779_H
#define U24ARRAYTYPEU3D24_T613818779_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=24
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D24_t613818779 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D24_t613818779__padding[24];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D24_T613818779_H
#ifndef U24ARRAYTYPEU3D208_T441259731_H
#define U24ARRAYTYPEU3D208_T441259731_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=208
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D208_t441259731 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D208_t441259731__padding[208];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D208_T441259731_H
#ifndef LATLONG_T1356451579_H
#define LATLONG_T1356451579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.Space.LatLong
struct  LatLong_t1356451579 
{
public:
	// System.Double Wrld.Space.LatLong::m_latitudeInDegrees
	double ___m_latitudeInDegrees_0;
	// System.Double Wrld.Space.LatLong::m_longitudeInDegrees
	double ___m_longitudeInDegrees_1;

public:
	inline static int32_t get_offset_of_m_latitudeInDegrees_0() { return static_cast<int32_t>(offsetof(LatLong_t1356451579, ___m_latitudeInDegrees_0)); }
	inline double get_m_latitudeInDegrees_0() const { return ___m_latitudeInDegrees_0; }
	inline double* get_address_of_m_latitudeInDegrees_0() { return &___m_latitudeInDegrees_0; }
	inline void set_m_latitudeInDegrees_0(double value)
	{
		___m_latitudeInDegrees_0 = value;
	}

	inline static int32_t get_offset_of_m_longitudeInDegrees_1() { return static_cast<int32_t>(offsetof(LatLong_t1356451579, ___m_longitudeInDegrees_1)); }
	inline double get_m_longitudeInDegrees_1() const { return ___m_longitudeInDegrees_1; }
	inline double* get_address_of_m_longitudeInDegrees_1() { return &___m_longitudeInDegrees_1; }
	inline void set_m_longitudeInDegrees_1(double value)
	{
		___m_longitudeInDegrees_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LATLONG_T1356451579_H
#ifndef INT32_T4155442563_H
#define INT32_T4155442563_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t4155442563 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t4155442563, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T4155442563_H
#ifndef VOID_T2987813122_H
#define VOID_T2987813122_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t2987813122 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T2987813122_H
#ifndef DOUBLEVECTOR3_T2920691937_H
#define DOUBLEVECTOR3_T2920691937_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.Common.Maths.DoubleVector3
struct  DoubleVector3_t2920691937 
{
public:
	// System.Double Wrld.Common.Maths.DoubleVector3::x
	double ___x_3;
	// System.Double Wrld.Common.Maths.DoubleVector3::y
	double ___y_4;
	// System.Double Wrld.Common.Maths.DoubleVector3::z
	double ___z_5;

public:
	inline static int32_t get_offset_of_x_3() { return static_cast<int32_t>(offsetof(DoubleVector3_t2920691937, ___x_3)); }
	inline double get_x_3() const { return ___x_3; }
	inline double* get_address_of_x_3() { return &___x_3; }
	inline void set_x_3(double value)
	{
		___x_3 = value;
	}

	inline static int32_t get_offset_of_y_4() { return static_cast<int32_t>(offsetof(DoubleVector3_t2920691937, ___y_4)); }
	inline double get_y_4() const { return ___y_4; }
	inline double* get_address_of_y_4() { return &___y_4; }
	inline void set_y_4(double value)
	{
		___y_4 = value;
	}

	inline static int32_t get_offset_of_z_5() { return static_cast<int32_t>(offsetof(DoubleVector3_t2920691937, ___z_5)); }
	inline double get_z_5() const { return ___z_5; }
	inline double* get_address_of_z_5() { return &___z_5; }
	inline void set_z_5(double value)
	{
		___z_5 = value;
	}
};

struct DoubleVector3_t2920691937_StaticFields
{
public:
	// Wrld.Common.Maths.DoubleVector3 Wrld.Common.Maths.DoubleVector3::zero
	DoubleVector3_t2920691937  ___zero_1;
	// Wrld.Common.Maths.DoubleVector3 Wrld.Common.Maths.DoubleVector3::one
	DoubleVector3_t2920691937  ___one_2;

public:
	inline static int32_t get_offset_of_zero_1() { return static_cast<int32_t>(offsetof(DoubleVector3_t2920691937_StaticFields, ___zero_1)); }
	inline DoubleVector3_t2920691937  get_zero_1() const { return ___zero_1; }
	inline DoubleVector3_t2920691937 * get_address_of_zero_1() { return &___zero_1; }
	inline void set_zero_1(DoubleVector3_t2920691937  value)
	{
		___zero_1 = value;
	}

	inline static int32_t get_offset_of_one_2() { return static_cast<int32_t>(offsetof(DoubleVector3_t2920691937_StaticFields, ___one_2)); }
	inline DoubleVector3_t2920691937  get_one_2() const { return ___one_2; }
	inline DoubleVector3_t2920691937 * get_address_of_one_2() { return &___one_2; }
	inline void set_one_2(DoubleVector3_t2920691937  value)
	{
		___one_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLEVECTOR3_T2920691937_H
#ifndef VECTOR3_T135346806_H
#define VECTOR3_T135346806_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t135346806 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t135346806, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t135346806, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t135346806, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t135346806_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t135346806  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t135346806  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t135346806  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t135346806  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t135346806  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t135346806  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t135346806  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t135346806  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t135346806  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t135346806  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t135346806_StaticFields, ___zeroVector_4)); }
	inline Vector3_t135346806  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t135346806 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t135346806  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t135346806_StaticFields, ___oneVector_5)); }
	inline Vector3_t135346806  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t135346806 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t135346806  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t135346806_StaticFields, ___upVector_6)); }
	inline Vector3_t135346806  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t135346806 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t135346806  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t135346806_StaticFields, ___downVector_7)); }
	inline Vector3_t135346806  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t135346806 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t135346806  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t135346806_StaticFields, ___leftVector_8)); }
	inline Vector3_t135346806  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t135346806 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t135346806  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t135346806_StaticFields, ___rightVector_9)); }
	inline Vector3_t135346806  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t135346806 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t135346806  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t135346806_StaticFields, ___forwardVector_10)); }
	inline Vector3_t135346806  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t135346806 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t135346806  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t135346806_StaticFields, ___backVector_11)); }
	inline Vector3_t135346806  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t135346806 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t135346806  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t135346806_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t135346806  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t135346806 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t135346806  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t135346806_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t135346806  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t135346806 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t135346806  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T135346806_H
#ifndef QUATERNION_T2530932586_H
#define QUATERNION_T2530932586_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2530932586 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2530932586, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2530932586, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2530932586, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2530932586, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2530932586_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2530932586  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2530932586_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2530932586  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2530932586 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2530932586  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2530932586_H
#ifndef BOOLEAN_T806175038_H
#define BOOLEAN_T806175038_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t806175038 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t806175038, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t806175038_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t806175038_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t806175038_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T806175038_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	IntPtr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline IntPtr_t get_Zero_1() const { return ___Zero_1; }
	inline IntPtr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(IntPtr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef INVALIDAPIKEYEXCEPTION_T120129700_H
#define INVALIDAPIKEYEXCEPTION_T120129700_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.Scripts.Utilities.InvalidApiKeyException
struct  InvalidApiKeyException_t120129700  : public Exception_t1339058960
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDAPIKEYEXCEPTION_T120129700_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T4093556361_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T4093556361_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t4093556361  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t4093556361_StaticFields
{
public:
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-8E7629AD5AF686202B8CB7C014505C432FFE31E6
	U24ArrayTypeU3D24_t613818779  ___U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_0;
	// <PrivateImplementationDetails>/$ArrayType=208 <PrivateImplementationDetails>::$field-811EB71438479767E10832E824E7D58DCDC0FCB8
	U24ArrayTypeU3D208_t441259731  ___U24fieldU2D811EB71438479767E10832E824E7D58DCDC0FCB8_1;

public:
	inline static int32_t get_offset_of_U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t4093556361_StaticFields, ___U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_0)); }
	inline U24ArrayTypeU3D24_t613818779  get_U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_0() const { return ___U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_0; }
	inline U24ArrayTypeU3D24_t613818779 * get_address_of_U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_0() { return &___U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_0; }
	inline void set_U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_0(U24ArrayTypeU3D24_t613818779  value)
	{
		___U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_0 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D811EB71438479767E10832E824E7D58DCDC0FCB8_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t4093556361_StaticFields, ___U24fieldU2D811EB71438479767E10832E824E7D58DCDC0FCB8_1)); }
	inline U24ArrayTypeU3D208_t441259731  get_U24fieldU2D811EB71438479767E10832E824E7D58DCDC0FCB8_1() const { return ___U24fieldU2D811EB71438479767E10832E824E7D58DCDC0FCB8_1; }
	inline U24ArrayTypeU3D208_t441259731 * get_address_of_U24fieldU2D811EB71438479767E10832E824E7D58DCDC0FCB8_1() { return &___U24fieldU2D811EB71438479767E10832E824E7D58DCDC0FCB8_1; }
	inline void set_U24fieldU2D811EB71438479767E10832E824E7D58DCDC0FCB8_1(U24ArrayTypeU3D208_t441259731  value)
	{
		___U24fieldU2D811EB71438479767E10832E824E7D58DCDC0FCB8_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T4093556361_H
#ifndef DELEGATE_T1925783518_H
#define DELEGATE_T1925783518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1925783518  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	IntPtr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	IntPtr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	IntPtr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	IntPtr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t833023919 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1925783518, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1925783518, ___invoke_impl_1)); }
	inline IntPtr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline IntPtr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(IntPtr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1925783518, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1925783518, ___method_3)); }
	inline IntPtr_t get_method_3() const { return ___method_3; }
	inline IntPtr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(IntPtr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1925783518, ___delegate_trampoline_4)); }
	inline IntPtr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline IntPtr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(IntPtr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1925783518, ___method_code_5)); }
	inline IntPtr_t get_method_code_5() const { return ___method_code_5; }
	inline IntPtr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(IntPtr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1925783518, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1925783518, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1925783518, ___data_8)); }
	inline DelegateData_t833023919 * get_data_8() const { return ___data_8; }
	inline DelegateData_t833023919 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t833023919 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1925783518_H
#ifndef OBJECT_T243568049_H
#define OBJECT_T243568049_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t243568049  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	IntPtr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t243568049, ___m_CachedPtr_0)); }
	inline IntPtr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline IntPtr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(IntPtr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t243568049_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t243568049_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t243568049_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t243568049_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T243568049_H
#ifndef MARSHALLEDMESH_T3348580767_H
#define MARSHALLEDMESH_T3348580767_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.Meshes.MeshUploader/MarshalledMesh
struct  MarshalledMesh_t3348580767 
{
public:
	// System.IntPtr Wrld.Meshes.MeshUploader/MarshalledMesh::vertices
	IntPtr_t ___vertices_0;
	// System.Int32 Wrld.Meshes.MeshUploader/MarshalledMesh::vertexCount
	int32_t ___vertexCount_1;
	// System.IntPtr Wrld.Meshes.MeshUploader/MarshalledMesh::uvs
	IntPtr_t ___uvs_2;
	// System.Int32 Wrld.Meshes.MeshUploader/MarshalledMesh::uvCount
	int32_t ___uvCount_3;
	// System.IntPtr Wrld.Meshes.MeshUploader/MarshalledMesh::uv2s
	IntPtr_t ___uv2s_4;
	// System.Int32 Wrld.Meshes.MeshUploader/MarshalledMesh::uv2Count
	int32_t ___uv2Count_5;
	// System.IntPtr Wrld.Meshes.MeshUploader/MarshalledMesh::indices
	IntPtr_t ___indices_6;
	// System.Int32 Wrld.Meshes.MeshUploader/MarshalledMesh::indexCount
	int32_t ___indexCount_7;
	// System.IntPtr Wrld.Meshes.MeshUploader/MarshalledMesh::originEcef
	IntPtr_t ___originEcef_8;
	// System.IntPtr Wrld.Meshes.MeshUploader/MarshalledMesh::name
	IntPtr_t ___name_9;
	// System.IntPtr Wrld.Meshes.MeshUploader/MarshalledMesh::unpackedMeshHandle
	IntPtr_t ___unpackedMeshHandle_10;

public:
	inline static int32_t get_offset_of_vertices_0() { return static_cast<int32_t>(offsetof(MarshalledMesh_t3348580767, ___vertices_0)); }
	inline IntPtr_t get_vertices_0() const { return ___vertices_0; }
	inline IntPtr_t* get_address_of_vertices_0() { return &___vertices_0; }
	inline void set_vertices_0(IntPtr_t value)
	{
		___vertices_0 = value;
	}

	inline static int32_t get_offset_of_vertexCount_1() { return static_cast<int32_t>(offsetof(MarshalledMesh_t3348580767, ___vertexCount_1)); }
	inline int32_t get_vertexCount_1() const { return ___vertexCount_1; }
	inline int32_t* get_address_of_vertexCount_1() { return &___vertexCount_1; }
	inline void set_vertexCount_1(int32_t value)
	{
		___vertexCount_1 = value;
	}

	inline static int32_t get_offset_of_uvs_2() { return static_cast<int32_t>(offsetof(MarshalledMesh_t3348580767, ___uvs_2)); }
	inline IntPtr_t get_uvs_2() const { return ___uvs_2; }
	inline IntPtr_t* get_address_of_uvs_2() { return &___uvs_2; }
	inline void set_uvs_2(IntPtr_t value)
	{
		___uvs_2 = value;
	}

	inline static int32_t get_offset_of_uvCount_3() { return static_cast<int32_t>(offsetof(MarshalledMesh_t3348580767, ___uvCount_3)); }
	inline int32_t get_uvCount_3() const { return ___uvCount_3; }
	inline int32_t* get_address_of_uvCount_3() { return &___uvCount_3; }
	inline void set_uvCount_3(int32_t value)
	{
		___uvCount_3 = value;
	}

	inline static int32_t get_offset_of_uv2s_4() { return static_cast<int32_t>(offsetof(MarshalledMesh_t3348580767, ___uv2s_4)); }
	inline IntPtr_t get_uv2s_4() const { return ___uv2s_4; }
	inline IntPtr_t* get_address_of_uv2s_4() { return &___uv2s_4; }
	inline void set_uv2s_4(IntPtr_t value)
	{
		___uv2s_4 = value;
	}

	inline static int32_t get_offset_of_uv2Count_5() { return static_cast<int32_t>(offsetof(MarshalledMesh_t3348580767, ___uv2Count_5)); }
	inline int32_t get_uv2Count_5() const { return ___uv2Count_5; }
	inline int32_t* get_address_of_uv2Count_5() { return &___uv2Count_5; }
	inline void set_uv2Count_5(int32_t value)
	{
		___uv2Count_5 = value;
	}

	inline static int32_t get_offset_of_indices_6() { return static_cast<int32_t>(offsetof(MarshalledMesh_t3348580767, ___indices_6)); }
	inline IntPtr_t get_indices_6() const { return ___indices_6; }
	inline IntPtr_t* get_address_of_indices_6() { return &___indices_6; }
	inline void set_indices_6(IntPtr_t value)
	{
		___indices_6 = value;
	}

	inline static int32_t get_offset_of_indexCount_7() { return static_cast<int32_t>(offsetof(MarshalledMesh_t3348580767, ___indexCount_7)); }
	inline int32_t get_indexCount_7() const { return ___indexCount_7; }
	inline int32_t* get_address_of_indexCount_7() { return &___indexCount_7; }
	inline void set_indexCount_7(int32_t value)
	{
		___indexCount_7 = value;
	}

	inline static int32_t get_offset_of_originEcef_8() { return static_cast<int32_t>(offsetof(MarshalledMesh_t3348580767, ___originEcef_8)); }
	inline IntPtr_t get_originEcef_8() const { return ___originEcef_8; }
	inline IntPtr_t* get_address_of_originEcef_8() { return &___originEcef_8; }
	inline void set_originEcef_8(IntPtr_t value)
	{
		___originEcef_8 = value;
	}

	inline static int32_t get_offset_of_name_9() { return static_cast<int32_t>(offsetof(MarshalledMesh_t3348580767, ___name_9)); }
	inline IntPtr_t get_name_9() const { return ___name_9; }
	inline IntPtr_t* get_address_of_name_9() { return &___name_9; }
	inline void set_name_9(IntPtr_t value)
	{
		___name_9 = value;
	}

	inline static int32_t get_offset_of_unpackedMeshHandle_10() { return static_cast<int32_t>(offsetof(MarshalledMesh_t3348580767, ___unpackedMeshHandle_10)); }
	inline IntPtr_t get_unpackedMeshHandle_10() const { return ___unpackedMeshHandle_10; }
	inline IntPtr_t* get_address_of_unpackedMeshHandle_10() { return &___unpackedMeshHandle_10; }
	inline void set_unpackedMeshHandle_10(IntPtr_t value)
	{
		___unpackedMeshHandle_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALLEDMESH_T3348580767_H
#ifndef PREPAREDMESHRECORD_T1352210375_H
#define PREPAREDMESHRECORD_T1352210375_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.Meshes.PreparedMeshRecord
struct  PreparedMeshRecord_t1352210375  : public RuntimeObject
{
public:
	// Wrld.Meshes.PreparedMesh[] Wrld.Meshes.PreparedMeshRecord::<Meshes>k__BackingField
	PreparedMeshU5BU5D_t2944829490* ___U3CMeshesU3Ek__BackingField_0;
	// Wrld.Common.Maths.DoubleVector3 Wrld.Meshes.PreparedMeshRecord::<OriginECEF>k__BackingField
	DoubleVector3_t2920691937  ___U3COriginECEFU3Ek__BackingField_1;
	// System.String Wrld.Meshes.PreparedMeshRecord::<MaterialName>k__BackingField
	String_t* ___U3CMaterialNameU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CMeshesU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PreparedMeshRecord_t1352210375, ___U3CMeshesU3Ek__BackingField_0)); }
	inline PreparedMeshU5BU5D_t2944829490* get_U3CMeshesU3Ek__BackingField_0() const { return ___U3CMeshesU3Ek__BackingField_0; }
	inline PreparedMeshU5BU5D_t2944829490** get_address_of_U3CMeshesU3Ek__BackingField_0() { return &___U3CMeshesU3Ek__BackingField_0; }
	inline void set_U3CMeshesU3Ek__BackingField_0(PreparedMeshU5BU5D_t2944829490* value)
	{
		___U3CMeshesU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CMeshesU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3COriginECEFU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PreparedMeshRecord_t1352210375, ___U3COriginECEFU3Ek__BackingField_1)); }
	inline DoubleVector3_t2920691937  get_U3COriginECEFU3Ek__BackingField_1() const { return ___U3COriginECEFU3Ek__BackingField_1; }
	inline DoubleVector3_t2920691937 * get_address_of_U3COriginECEFU3Ek__BackingField_1() { return &___U3COriginECEFU3Ek__BackingField_1; }
	inline void set_U3COriginECEFU3Ek__BackingField_1(DoubleVector3_t2920691937  value)
	{
		___U3COriginECEFU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CMaterialNameU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PreparedMeshRecord_t1352210375, ___U3CMaterialNameU3Ek__BackingField_2)); }
	inline String_t* get_U3CMaterialNameU3Ek__BackingField_2() const { return ___U3CMaterialNameU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CMaterialNameU3Ek__BackingField_2() { return &___U3CMaterialNameU3Ek__BackingField_2; }
	inline void set_U3CMaterialNameU3Ek__BackingField_2(String_t* value)
	{
		___U3CMaterialNameU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CMaterialNameU3Ek__BackingField_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PREPAREDMESHRECORD_T1352210375_H
#ifndef NATIVEPLUGINRUNNER_T3398766296_H
#define NATIVEPLUGINRUNNER_T3398766296_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.NativePluginRunner
struct  NativePluginRunner_t3398766296  : public RuntimeObject
{
public:
	// Wrld.Materials.MaterialRepository Wrld.NativePluginRunner::m_materialRepository
	MaterialRepository_t2603564751 * ___m_materialRepository_2;
	// Wrld.Materials.TextureLoadHandler Wrld.NativePluginRunner::m_textureLoadHandler
	TextureLoadHandler_t265694606 * ___m_textureLoadHandler_3;
	// Wrld.MapGameObjectScene Wrld.NativePluginRunner::m_mapGameObjectScene
	MapGameObjectScene_t2105249059 * ___m_mapGameObjectScene_4;
	// Wrld.StreamingUpdater Wrld.NativePluginRunner::m_streamingUpdater
	StreamingUpdater_t2242571017 * ___m_streamingUpdater_5;
	// System.Boolean Wrld.NativePluginRunner::m_isRunning
	bool ___m_isRunning_6;

public:
	inline static int32_t get_offset_of_m_materialRepository_2() { return static_cast<int32_t>(offsetof(NativePluginRunner_t3398766296, ___m_materialRepository_2)); }
	inline MaterialRepository_t2603564751 * get_m_materialRepository_2() const { return ___m_materialRepository_2; }
	inline MaterialRepository_t2603564751 ** get_address_of_m_materialRepository_2() { return &___m_materialRepository_2; }
	inline void set_m_materialRepository_2(MaterialRepository_t2603564751 * value)
	{
		___m_materialRepository_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_materialRepository_2), value);
	}

	inline static int32_t get_offset_of_m_textureLoadHandler_3() { return static_cast<int32_t>(offsetof(NativePluginRunner_t3398766296, ___m_textureLoadHandler_3)); }
	inline TextureLoadHandler_t265694606 * get_m_textureLoadHandler_3() const { return ___m_textureLoadHandler_3; }
	inline TextureLoadHandler_t265694606 ** get_address_of_m_textureLoadHandler_3() { return &___m_textureLoadHandler_3; }
	inline void set_m_textureLoadHandler_3(TextureLoadHandler_t265694606 * value)
	{
		___m_textureLoadHandler_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_textureLoadHandler_3), value);
	}

	inline static int32_t get_offset_of_m_mapGameObjectScene_4() { return static_cast<int32_t>(offsetof(NativePluginRunner_t3398766296, ___m_mapGameObjectScene_4)); }
	inline MapGameObjectScene_t2105249059 * get_m_mapGameObjectScene_4() const { return ___m_mapGameObjectScene_4; }
	inline MapGameObjectScene_t2105249059 ** get_address_of_m_mapGameObjectScene_4() { return &___m_mapGameObjectScene_4; }
	inline void set_m_mapGameObjectScene_4(MapGameObjectScene_t2105249059 * value)
	{
		___m_mapGameObjectScene_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_mapGameObjectScene_4), value);
	}

	inline static int32_t get_offset_of_m_streamingUpdater_5() { return static_cast<int32_t>(offsetof(NativePluginRunner_t3398766296, ___m_streamingUpdater_5)); }
	inline StreamingUpdater_t2242571017 * get_m_streamingUpdater_5() const { return ___m_streamingUpdater_5; }
	inline StreamingUpdater_t2242571017 ** get_address_of_m_streamingUpdater_5() { return &___m_streamingUpdater_5; }
	inline void set_m_streamingUpdater_5(StreamingUpdater_t2242571017 * value)
	{
		___m_streamingUpdater_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_streamingUpdater_5), value);
	}

	inline static int32_t get_offset_of_m_isRunning_6() { return static_cast<int32_t>(offsetof(NativePluginRunner_t3398766296, ___m_isRunning_6)); }
	inline bool get_m_isRunning_6() const { return ___m_isRunning_6; }
	inline bool* get_address_of_m_isRunning_6() { return &___m_isRunning_6; }
	inline void set_m_isRunning_6(bool value)
	{
		___m_isRunning_6 = value;
	}
};

struct NativePluginRunner_t3398766296_StaticFields
{
public:
	// System.IntPtr Wrld.NativePluginRunner::API
	IntPtr_t ___API_1;

public:
	inline static int32_t get_offset_of_API_1() { return static_cast<int32_t>(offsetof(NativePluginRunner_t3398766296_StaticFields, ___API_1)); }
	inline IntPtr_t get_API_1() const { return ___API_1; }
	inline IntPtr_t* get_address_of_API_1() { return &___API_1; }
	inline void set_API_1(IntPtr_t value)
	{
		___API_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVEPLUGINRUNNER_T3398766296_H
#ifndef GAMEOBJECTRECORD_T96976521_H
#define GAMEOBJECTRECORD_T96976521_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.Streaming.GameObjectRecord
struct  GameObjectRecord_t96976521  : public RuntimeObject
{
public:
	// Wrld.Common.Maths.DoubleVector3 Wrld.Streaming.GameObjectRecord::<OriginECEF>k__BackingField
	DoubleVector3_t2920691937  ___U3COriginECEFU3Ek__BackingField_0;
	// UnityEngine.GameObject[] Wrld.Streaming.GameObjectRecord::<GameObjects>k__BackingField
	GameObjectU5BU5D_t1465719297* ___U3CGameObjectsU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3COriginECEFU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(GameObjectRecord_t96976521, ___U3COriginECEFU3Ek__BackingField_0)); }
	inline DoubleVector3_t2920691937  get_U3COriginECEFU3Ek__BackingField_0() const { return ___U3COriginECEFU3Ek__BackingField_0; }
	inline DoubleVector3_t2920691937 * get_address_of_U3COriginECEFU3Ek__BackingField_0() { return &___U3COriginECEFU3Ek__BackingField_0; }
	inline void set_U3COriginECEFU3Ek__BackingField_0(DoubleVector3_t2920691937  value)
	{
		___U3COriginECEFU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CGameObjectsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(GameObjectRecord_t96976521, ___U3CGameObjectsU3Ek__BackingField_1)); }
	inline GameObjectU5BU5D_t1465719297* get_U3CGameObjectsU3Ek__BackingField_1() const { return ___U3CGameObjectsU3Ek__BackingField_1; }
	inline GameObjectU5BU5D_t1465719297** get_address_of_U3CGameObjectsU3Ek__BackingField_1() { return &___U3CGameObjectsU3Ek__BackingField_1; }
	inline void set_U3CGameObjectsU3Ek__BackingField_1(GameObjectU5BU5D_t1465719297* value)
	{
		___U3CGameObjectsU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CGameObjectsU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECTRECORD_T96976521_H
#ifndef ECEFTRANSFORMUPDATESTRATEGY_T3980368551_H
#define ECEFTRANSFORMUPDATESTRATEGY_T3980368551_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.Space.ECEFTransformUpdateStrategy
struct  ECEFTransformUpdateStrategy_t3980368551  : public RuntimeObject
{
public:
	// Wrld.Common.Maths.DoubleVector3 Wrld.Space.ECEFTransformUpdateStrategy::m_cameraPositionECEF
	DoubleVector3_t2920691937  ___m_cameraPositionECEF_0;
	// UnityEngine.Vector3 Wrld.Space.ECEFTransformUpdateStrategy::m_up
	Vector3_t135346806  ___m_up_1;

public:
	inline static int32_t get_offset_of_m_cameraPositionECEF_0() { return static_cast<int32_t>(offsetof(ECEFTransformUpdateStrategy_t3980368551, ___m_cameraPositionECEF_0)); }
	inline DoubleVector3_t2920691937  get_m_cameraPositionECEF_0() const { return ___m_cameraPositionECEF_0; }
	inline DoubleVector3_t2920691937 * get_address_of_m_cameraPositionECEF_0() { return &___m_cameraPositionECEF_0; }
	inline void set_m_cameraPositionECEF_0(DoubleVector3_t2920691937  value)
	{
		___m_cameraPositionECEF_0 = value;
	}

	inline static int32_t get_offset_of_m_up_1() { return static_cast<int32_t>(offsetof(ECEFTransformUpdateStrategy_t3980368551, ___m_up_1)); }
	inline Vector3_t135346806  get_m_up_1() const { return ___m_up_1; }
	inline Vector3_t135346806 * get_address_of_m_up_1() { return &___m_up_1; }
	inline void set_m_up_1(Vector3_t135346806  value)
	{
		___m_up_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ECEFTRANSFORMUPDATESTRATEGY_T3980368551_H
#ifndef LATLONGALTITUDE_T4065344126_H
#define LATLONGALTITUDE_T4065344126_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.Space.LatLongAltitude
struct  LatLongAltitude_t4065344126 
{
public:
	// Wrld.Space.LatLong Wrld.Space.LatLongAltitude::m_latLong
	LatLong_t1356451579  ___m_latLong_0;
	// System.Double Wrld.Space.LatLongAltitude::m_altitude
	double ___m_altitude_1;

public:
	inline static int32_t get_offset_of_m_latLong_0() { return static_cast<int32_t>(offsetof(LatLongAltitude_t4065344126, ___m_latLong_0)); }
	inline LatLong_t1356451579  get_m_latLong_0() const { return ___m_latLong_0; }
	inline LatLong_t1356451579 * get_address_of_m_latLong_0() { return &___m_latLong_0; }
	inline void set_m_latLong_0(LatLong_t1356451579  value)
	{
		___m_latLong_0 = value;
	}

	inline static int32_t get_offset_of_m_altitude_1() { return static_cast<int32_t>(offsetof(LatLongAltitude_t4065344126, ___m_altitude_1)); }
	inline double get_m_altitude_1() const { return ___m_altitude_1; }
	inline double* get_address_of_m_altitude_1() { return &___m_altitude_1; }
	inline void set_m_altitude_1(double value)
	{
		___m_altitude_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LATLONGALTITUDE_T4065344126_H
#ifndef UNITYWORLDSPACECOORDINATEFRAME_T1964903341_H
#define UNITYWORLDSPACECOORDINATEFRAME_T1964903341_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.Space.UnityWorldSpaceCoordinateFrame
struct  UnityWorldSpaceCoordinateFrame_t1964903341  : public RuntimeObject
{
public:
	// UnityEngine.Quaternion Wrld.Space.UnityWorldSpaceCoordinateFrame::<ECEFToLocalRotation>k__BackingField
	Quaternion_t2530932586  ___U3CECEFToLocalRotationU3Ek__BackingField_0;
	// UnityEngine.Quaternion Wrld.Space.UnityWorldSpaceCoordinateFrame::<LocalToECEFRotation>k__BackingField
	Quaternion_t2530932586  ___U3CLocalToECEFRotationU3Ek__BackingField_1;
	// Wrld.Space.LatLongAltitude Wrld.Space.UnityWorldSpaceCoordinateFrame::m_originLatLongAlt
	LatLongAltitude_t4065344126  ___m_originLatLongAlt_2;
	// Wrld.Common.Maths.DoubleVector3 Wrld.Space.UnityWorldSpaceCoordinateFrame::m_originECEF
	DoubleVector3_t2920691937  ___m_originECEF_3;
	// UnityEngine.Vector3 Wrld.Space.UnityWorldSpaceCoordinateFrame::m_upECEF
	Vector3_t135346806  ___m_upECEF_4;
	// UnityEngine.Vector3 Wrld.Space.UnityWorldSpaceCoordinateFrame::m_rightECEF
	Vector3_t135346806  ___m_rightECEF_5;
	// UnityEngine.Vector3 Wrld.Space.UnityWorldSpaceCoordinateFrame::m_forwardECEF
	Vector3_t135346806  ___m_forwardECEF_6;

public:
	inline static int32_t get_offset_of_U3CECEFToLocalRotationU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(UnityWorldSpaceCoordinateFrame_t1964903341, ___U3CECEFToLocalRotationU3Ek__BackingField_0)); }
	inline Quaternion_t2530932586  get_U3CECEFToLocalRotationU3Ek__BackingField_0() const { return ___U3CECEFToLocalRotationU3Ek__BackingField_0; }
	inline Quaternion_t2530932586 * get_address_of_U3CECEFToLocalRotationU3Ek__BackingField_0() { return &___U3CECEFToLocalRotationU3Ek__BackingField_0; }
	inline void set_U3CECEFToLocalRotationU3Ek__BackingField_0(Quaternion_t2530932586  value)
	{
		___U3CECEFToLocalRotationU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CLocalToECEFRotationU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(UnityWorldSpaceCoordinateFrame_t1964903341, ___U3CLocalToECEFRotationU3Ek__BackingField_1)); }
	inline Quaternion_t2530932586  get_U3CLocalToECEFRotationU3Ek__BackingField_1() const { return ___U3CLocalToECEFRotationU3Ek__BackingField_1; }
	inline Quaternion_t2530932586 * get_address_of_U3CLocalToECEFRotationU3Ek__BackingField_1() { return &___U3CLocalToECEFRotationU3Ek__BackingField_1; }
	inline void set_U3CLocalToECEFRotationU3Ek__BackingField_1(Quaternion_t2530932586  value)
	{
		___U3CLocalToECEFRotationU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_m_originLatLongAlt_2() { return static_cast<int32_t>(offsetof(UnityWorldSpaceCoordinateFrame_t1964903341, ___m_originLatLongAlt_2)); }
	inline LatLongAltitude_t4065344126  get_m_originLatLongAlt_2() const { return ___m_originLatLongAlt_2; }
	inline LatLongAltitude_t4065344126 * get_address_of_m_originLatLongAlt_2() { return &___m_originLatLongAlt_2; }
	inline void set_m_originLatLongAlt_2(LatLongAltitude_t4065344126  value)
	{
		___m_originLatLongAlt_2 = value;
	}

	inline static int32_t get_offset_of_m_originECEF_3() { return static_cast<int32_t>(offsetof(UnityWorldSpaceCoordinateFrame_t1964903341, ___m_originECEF_3)); }
	inline DoubleVector3_t2920691937  get_m_originECEF_3() const { return ___m_originECEF_3; }
	inline DoubleVector3_t2920691937 * get_address_of_m_originECEF_3() { return &___m_originECEF_3; }
	inline void set_m_originECEF_3(DoubleVector3_t2920691937  value)
	{
		___m_originECEF_3 = value;
	}

	inline static int32_t get_offset_of_m_upECEF_4() { return static_cast<int32_t>(offsetof(UnityWorldSpaceCoordinateFrame_t1964903341, ___m_upECEF_4)); }
	inline Vector3_t135346806  get_m_upECEF_4() const { return ___m_upECEF_4; }
	inline Vector3_t135346806 * get_address_of_m_upECEF_4() { return &___m_upECEF_4; }
	inline void set_m_upECEF_4(Vector3_t135346806  value)
	{
		___m_upECEF_4 = value;
	}

	inline static int32_t get_offset_of_m_rightECEF_5() { return static_cast<int32_t>(offsetof(UnityWorldSpaceCoordinateFrame_t1964903341, ___m_rightECEF_5)); }
	inline Vector3_t135346806  get_m_rightECEF_5() const { return ___m_rightECEF_5; }
	inline Vector3_t135346806 * get_address_of_m_rightECEF_5() { return &___m_rightECEF_5; }
	inline void set_m_rightECEF_5(Vector3_t135346806  value)
	{
		___m_rightECEF_5 = value;
	}

	inline static int32_t get_offset_of_m_forwardECEF_6() { return static_cast<int32_t>(offsetof(UnityWorldSpaceCoordinateFrame_t1964903341, ___m_forwardECEF_6)); }
	inline Vector3_t135346806  get_m_forwardECEF_6() const { return ___m_forwardECEF_6; }
	inline Vector3_t135346806 * get_address_of_m_forwardECEF_6() { return &___m_forwardECEF_6; }
	inline void set_m_forwardECEF_6(Vector3_t135346806  value)
	{
		___m_forwardECEF_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYWORLDSPACECOORDINATEFRAME_T1964903341_H
#ifndef COMPONENT_T596832933_H
#define COMPONENT_T596832933_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t596832933  : public Object_t243568049
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T596832933_H
#ifndef MULTICASTDELEGATE_T2241491013_H
#define MULTICASTDELEGATE_T2241491013_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t2241491013  : public Delegate_t1925783518
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t2241491013 * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t2241491013 * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t2241491013, ___prev_9)); }
	inline MulticastDelegate_t2241491013 * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t2241491013 ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t2241491013 * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t2241491013, ___kpm_next_10)); }
	inline MulticastDelegate_t2241491013 * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t2241491013 ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t2241491013 * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T2241491013_H
#ifndef BEHAVIOUR_T2665355_H
#define BEHAVIOUR_T2665355_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t2665355  : public Component_t596832933
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T2665355_H
#ifndef ALLOCATEUNPACKEDMESHCALLBACK_T2754746266_H
#define ALLOCATEUNPACKEDMESHCALLBACK_T2754746266_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.Meshes.MeshUploader/AllocateUnpackedMeshCallback
struct  AllocateUnpackedMeshCallback_t2754746266  : public MulticastDelegate_t2241491013
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ALLOCATEUNPACKEDMESHCALLBACK_T2754746266_H
#ifndef UPLOADUNPACKEDMESHCALLBACK_T3955664197_H
#define UPLOADUNPACKEDMESHCALLBACK_T3955664197_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.Meshes.MeshUploader/UploadUnpackedMeshCallback
struct  UploadUnpackedMeshCallback_t3955664197  : public MulticastDelegate_t2241491013
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPLOADUNPACKEDMESHCALLBACK_T3955664197_H
#ifndef VISIBILITYCALLBACK_T81755584_H
#define VISIBILITYCALLBACK_T81755584_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.MapGameObjectScene/VisibilityCallback
struct  VisibilityCallback_t81755584  : public MulticastDelegate_t2241491013
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VISIBILITYCALLBACK_T81755584_H
#ifndef ADDMESHCALLBACK_T2482042446_H
#define ADDMESHCALLBACK_T2482042446_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.MapGameObjectScene/AddMeshCallback
struct  AddMeshCallback_t2482042446  : public MulticastDelegate_t2241491013
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ADDMESHCALLBACK_T2482042446_H
#ifndef DELETEMESHCALLBACK_T3439097330_H
#define DELETEMESHCALLBACK_T3439097330_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.MapGameObjectScene/DeleteMeshCallback
struct  DeleteMeshCallback_t3439097330  : public MulticastDelegate_t2241491013
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELETEMESHCALLBACK_T3439097330_H
#ifndef HANDLEASSERTCALLBACK_T626632570_H
#define HANDLEASSERTCALLBACK_T626632570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.AssertHandler/HandleAssertCallback
struct  HandleAssertCallback_t626632570  : public MulticastDelegate_t2241491013
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HANDLEASSERTCALLBACK_T626632570_H
#ifndef MONOBEHAVIOUR_T3101449880_H
#define MONOBEHAVIOUR_T3101449880_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3101449880  : public Behaviour_t2665355
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3101449880_H
#ifndef STREAMINGBEHAVIOUR_T3015403914_H
#define STREAMINGBEHAVIOUR_T3015403914_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wrld.MapCamera.StreamingBehaviour
struct  StreamingBehaviour_t3015403914  : public MonoBehaviour_t3101449880
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAMINGBEHAVIOUR_T3015403914_H
#ifndef WRLDARKITANCHORHANDLER_T1682452238_H
#define WRLDARKITANCHORHANDLER_T1682452238_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WRLDARKitAnchorHandler
struct  WRLDARKitAnchorHandler_t1682452238  : public MonoBehaviour_t3101449880
{
public:
	// UnityEngine.XR.iOS.UnityARAnchorManager WRLDARKitAnchorHandler::m_unityARAnchorManager
	UnityARAnchorManager_t1296195923 * ___m_unityARAnchorManager_2;
	// UnityEngine.Transform WRLDARKitAnchorHandler::m_wrldMapParent
	Transform_t162339628 * ___m_wrldMapParent_3;
	// UnityEngine.Transform WRLDARKitAnchorHandler::m_wrldMapMask
	Transform_t162339628 * ___m_wrldMapMask_4;

public:
	inline static int32_t get_offset_of_m_unityARAnchorManager_2() { return static_cast<int32_t>(offsetof(WRLDARKitAnchorHandler_t1682452238, ___m_unityARAnchorManager_2)); }
	inline UnityARAnchorManager_t1296195923 * get_m_unityARAnchorManager_2() const { return ___m_unityARAnchorManager_2; }
	inline UnityARAnchorManager_t1296195923 ** get_address_of_m_unityARAnchorManager_2() { return &___m_unityARAnchorManager_2; }
	inline void set_m_unityARAnchorManager_2(UnityARAnchorManager_t1296195923 * value)
	{
		___m_unityARAnchorManager_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_unityARAnchorManager_2), value);
	}

	inline static int32_t get_offset_of_m_wrldMapParent_3() { return static_cast<int32_t>(offsetof(WRLDARKitAnchorHandler_t1682452238, ___m_wrldMapParent_3)); }
	inline Transform_t162339628 * get_m_wrldMapParent_3() const { return ___m_wrldMapParent_3; }
	inline Transform_t162339628 ** get_address_of_m_wrldMapParent_3() { return &___m_wrldMapParent_3; }
	inline void set_m_wrldMapParent_3(Transform_t162339628 * value)
	{
		___m_wrldMapParent_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_wrldMapParent_3), value);
	}

	inline static int32_t get_offset_of_m_wrldMapMask_4() { return static_cast<int32_t>(offsetof(WRLDARKitAnchorHandler_t1682452238, ___m_wrldMapMask_4)); }
	inline Transform_t162339628 * get_m_wrldMapMask_4() const { return ___m_wrldMapMask_4; }
	inline Transform_t162339628 ** get_address_of_m_wrldMapMask_4() { return &___m_wrldMapMask_4; }
	inline void set_m_wrldMapMask_4(Transform_t162339628 * value)
	{
		___m_wrldMapMask_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_wrldMapMask_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WRLDARKITANCHORHANDLER_T1682452238_H
#ifndef VIEWNORMALS_T2246348948_H
#define VIEWNORMALS_T2246348948_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ViewNormals
struct  ViewNormals_t2246348948  : public MonoBehaviour_t3101449880
{
public:
	// UnityEngine.MeshFilter ViewNormals::objectMesh
	MeshFilter_t3511768593 * ___objectMesh_2;

public:
	inline static int32_t get_offset_of_objectMesh_2() { return static_cast<int32_t>(offsetof(ViewNormals_t2246348948, ___objectMesh_2)); }
	inline MeshFilter_t3511768593 * get_objectMesh_2() const { return ___objectMesh_2; }
	inline MeshFilter_t3511768593 ** get_address_of_objectMesh_2() { return &___objectMesh_2; }
	inline void set_objectMesh_2(MeshFilter_t3511768593 * value)
	{
		___objectMesh_2 = value;
		Il2CppCodeGenWriteBarrier((&___objectMesh_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIEWNORMALS_T2246348948_H
#ifndef ERRORMESSAGE_T3367961177_H
#define ERRORMESSAGE_T3367961177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ErrorMessage
struct  ErrorMessage_t3367961177  : public MonoBehaviour_t3101449880
{
public:
	// System.String ErrorMessage::<Title>k__BackingField
	String_t* ___U3CTitleU3Ek__BackingField_2;
	// System.String ErrorMessage::<Text>k__BackingField
	String_t* ___U3CTextU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CTitleU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ErrorMessage_t3367961177, ___U3CTitleU3Ek__BackingField_2)); }
	inline String_t* get_U3CTitleU3Ek__BackingField_2() const { return ___U3CTitleU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CTitleU3Ek__BackingField_2() { return &___U3CTitleU3Ek__BackingField_2; }
	inline void set_U3CTitleU3Ek__BackingField_2(String_t* value)
	{
		___U3CTitleU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTitleU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CTextU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ErrorMessage_t3367961177, ___U3CTextU3Ek__BackingField_3)); }
	inline String_t* get_U3CTextU3Ek__BackingField_3() const { return ___U3CTextU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CTextU3Ek__BackingField_3() { return &___U3CTextU3Ek__BackingField_3; }
	inline void set_U3CTextU3Ek__BackingField_3(String_t* value)
	{
		___U3CTextU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTextU3Ek__BackingField_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ERRORMESSAGE_T3367961177_H
#ifndef ENDPROGRAM_T136987992_H
#define ENDPROGRAM_T136987992_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EndProgram
struct  EndProgram_t136987992  : public MonoBehaviour_t3101449880
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENDPROGRAM_T136987992_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2000 = { sizeof (Matrix4x4Extensions_t2605440422), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2001 = { sizeof (QuaternionExtensions_t500210232), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2002 = { sizeof (MeshBuilder_t2886199220), -1, sizeof(MeshBuilder_t2886199220_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2002[2] = 
{
	MeshBuilder_t2886199220_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_0(),
	MeshBuilder_t2886199220_StaticFields::get_offset_of_U3CU3Ef__amU24cache1_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2003 = { sizeof (U3CCreatePreparedMeshesU3Ec__AnonStorey0_t912803738), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2003[3] = 
{
	U3CCreatePreparedMeshesU3Ec__AnonStorey0_t912803738::get_offset_of_verts_0(),
	U3CCreatePreparedMeshesU3Ec__AnonStorey0_t912803738::get_offset_of_uvs_1(),
	U3CCreatePreparedMeshesU3Ec__AnonStorey0_t912803738::get_offset_of_uv2s_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2004 = { sizeof (U3CCreatePreparedMeshesU3Ec__AnonStorey1_t247103789), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2004[3] = 
{
	U3CCreatePreparedMeshesU3Ec__AnonStorey1_t247103789::get_offset_of_reversedRemapping_0(),
	U3CCreatePreparedMeshesU3Ec__AnonStorey1_t247103789::get_offset_of_indexRemapper_1(),
	U3CCreatePreparedMeshesU3Ec__AnonStorey1_t247103789::get_offset_of_U3CU3Ef__refU240_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2005 = { sizeof (MeshUploader_t2514496830), -1, sizeof(MeshUploader_t2514496830_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2005[1] = 
{
	MeshUploader_t2514496830_StaticFields::get_offset_of_m_preparedMeshes_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2006 = { sizeof (UnpackedMesh_t4194896125), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2006[8] = 
{
	UnpackedMesh_t4194896125::get_offset_of_vertices_0(),
	UnpackedMesh_t4194896125::get_offset_of_uvs_1(),
	UnpackedMesh_t4194896125::get_offset_of_uv2s_2(),
	UnpackedMesh_t4194896125::get_offset_of_indices_3(),
	UnpackedMesh_t4194896125::get_offset_of_originECEF_4(),
	UnpackedMesh_t4194896125::get_offset_of_materialName_5(),
	UnpackedMesh_t4194896125::get_offset_of_name_6(),
	UnpackedMesh_t4194896125::get_offset_of_gcHandles_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2007 = { sizeof (MarshalledMesh_t3348580767)+ sizeof (RuntimeObject), sizeof(MarshalledMesh_t3348580767 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2007[11] = 
{
	MarshalledMesh_t3348580767::get_offset_of_vertices_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MarshalledMesh_t3348580767::get_offset_of_vertexCount_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MarshalledMesh_t3348580767::get_offset_of_uvs_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MarshalledMesh_t3348580767::get_offset_of_uvCount_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MarshalledMesh_t3348580767::get_offset_of_uv2s_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MarshalledMesh_t3348580767::get_offset_of_uv2Count_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MarshalledMesh_t3348580767::get_offset_of_indices_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MarshalledMesh_t3348580767::get_offset_of_indexCount_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MarshalledMesh_t3348580767::get_offset_of_originEcef_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MarshalledMesh_t3348580767::get_offset_of_name_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MarshalledMesh_t3348580767::get_offset_of_unpackedMeshHandle_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2008 = { sizeof (AllocateUnpackedMeshCallback_t2754746266), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2009 = { sizeof (UploadUnpackedMeshCallback_t3955664197), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2010 = { sizeof (PreparedMesh_t4152516835), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2010[6] = 
{
	PreparedMesh_t4152516835::get_offset_of_m_verts_0(),
	PreparedMesh_t4152516835::get_offset_of_m_uvs_1(),
	PreparedMesh_t4152516835::get_offset_of_m_uv2s_2(),
	PreparedMesh_t4152516835::get_offset_of_m_indices_3(),
	PreparedMesh_t4152516835::get_offset_of_m_name_4(),
	PreparedMesh_t4152516835::get_offset_of_m_normals_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2011 = { sizeof (PreparedMeshRecord_t1352210375), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2011[3] = 
{
	PreparedMeshRecord_t1352210375::get_offset_of_U3CMeshesU3Ek__BackingField_0(),
	PreparedMeshRecord_t1352210375::get_offset_of_U3COriginECEFU3Ek__BackingField_1(),
	PreparedMeshRecord_t1352210375::get_offset_of_U3CMaterialNameU3Ek__BackingField_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2012 = { sizeof (PreparedMeshRepository_t1221402556), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2012[1] = 
{
	PreparedMeshRepository_t1221402556::get_offset_of_m_meshRecords_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2013 = { sizeof (NativePluginRunner_t3398766296), -1, sizeof(NativePluginRunner_t3398766296_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2013[7] = 
{
	0,
	NativePluginRunner_t3398766296_StaticFields::get_offset_of_API_1(),
	NativePluginRunner_t3398766296::get_offset_of_m_materialRepository_2(),
	NativePluginRunner_t3398766296::get_offset_of_m_textureLoadHandler_3(),
	NativePluginRunner_t3398766296::get_offset_of_m_mapGameObjectScene_4(),
	NativePluginRunner_t3398766296::get_offset_of_m_streamingUpdater_5(),
	NativePluginRunner_t3398766296::get_offset_of_m_isRunning_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2014 = { sizeof (TerrainHeightProvider_t864035057), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2014[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2015 = { sizeof (EarthConstants_t1378983928), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2015[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2016 = { sizeof (ECEFTransformUpdateStrategy_t3980368551), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2016[2] = 
{
	ECEFTransformUpdateStrategy_t3980368551::get_offset_of_m_cameraPositionECEF_0(),
	ECEFTransformUpdateStrategy_t3980368551::get_offset_of_m_up_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2017 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2018 = { sizeof (CoordinateConversions_t2437884897), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2019 = { sizeof (LatLong_t1356451579)+ sizeof (RuntimeObject), sizeof(LatLong_t1356451579 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2019[2] = 
{
	LatLong_t1356451579::get_offset_of_m_latitudeInDegrees_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LatLong_t1356451579::get_offset_of_m_longitudeInDegrees_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2020 = { sizeof (LatLongAltitude_t4065344126)+ sizeof (RuntimeObject), sizeof(LatLongAltitude_t4065344126 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2020[2] = 
{
	LatLongAltitude_t4065344126::get_offset_of_m_latLong_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LatLongAltitude_t4065344126::get_offset_of_m_altitude_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2021 = { sizeof (UnityWorldSpaceCoordinateFrame_t1964903341), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2021[7] = 
{
	UnityWorldSpaceCoordinateFrame_t1964903341::get_offset_of_U3CECEFToLocalRotationU3Ek__BackingField_0(),
	UnityWorldSpaceCoordinateFrame_t1964903341::get_offset_of_U3CLocalToECEFRotationU3Ek__BackingField_1(),
	UnityWorldSpaceCoordinateFrame_t1964903341::get_offset_of_m_originLatLongAlt_2(),
	UnityWorldSpaceCoordinateFrame_t1964903341::get_offset_of_m_originECEF_3(),
	UnityWorldSpaceCoordinateFrame_t1964903341::get_offset_of_m_upECEF_4(),
	UnityWorldSpaceCoordinateFrame_t1964903341::get_offset_of_m_rightECEF_5(),
	UnityWorldSpaceCoordinateFrame_t1964903341::get_offset_of_m_forwardECEF_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2022 = { sizeof (UnityWorldSpaceTransformUpdateStrategy_t3676755343), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2022[1] = 
{
	UnityWorldSpaceTransformUpdateStrategy_t3676755343::get_offset_of_m_frame_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2023 = { sizeof (GameObjectFactory_t2430137727), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2023[1] = 
{
	GameObjectFactory_t2430137727::get_offset_of_m_parentTransform_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2024 = { sizeof (GameObjectRecord_t96976521), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2024[2] = 
{
	GameObjectRecord_t96976521::get_offset_of_U3COriginECEFU3Ek__BackingField_0(),
	GameObjectRecord_t96976521::get_offset_of_U3CGameObjectsU3Ek__BackingField_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2025 = { sizeof (GameObjectRepository_t3643871365), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2025[3] = 
{
	GameObjectRepository_t3643871365::get_offset_of_m_gameObjectsById_0(),
	GameObjectRepository_t3643871365::get_offset_of_m_root_1(),
	GameObjectRepository_t3643871365::get_offset_of_m_materialRepository_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2026 = { sizeof (GameObjectStreamer_t58553855), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2026[4] = 
{
	GameObjectStreamer_t58553855::get_offset_of_m_gameObjectRepository_0(),
	GameObjectStreamer_t58553855::get_offset_of_m_materialRepository_1(),
	GameObjectStreamer_t58553855::get_offset_of_m_gameObjectCreator_2(),
	GameObjectStreamer_t58553855::get_offset_of_m_collisions_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2027 = { sizeof (MapGameObjectScene_t2105249059), -1, sizeof(MapGameObjectScene_t2105249059_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2027[5] = 
{
	MapGameObjectScene_t2105249059::get_offset_of_m_terrainStreamer_0(),
	MapGameObjectScene_t2105249059::get_offset_of_m_roadStreamer_1(),
	MapGameObjectScene_t2105249059::get_offset_of_m_buildingStreamer_2(),
	MapGameObjectScene_t2105249059::get_offset_of_m_meshUploader_3(),
	MapGameObjectScene_t2105249059_StaticFields::get_offset_of_ms_instance_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2028 = { sizeof (AddMeshCallback_t2482042446), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2029 = { sizeof (DeleteMeshCallback_t3439097330), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2030 = { sizeof (VisibilityCallback_t81755584), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2031 = { sizeof (ResourceCeilingProvider_t84502825), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2031[1] = 
{
	ResourceCeilingProvider_t84502825::get_offset_of_m_terrainHeightProvider_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2032 = { sizeof (StreamingBehaviour_t3015403914), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2033 = { sizeof (StreamingUpdater_t2242571017), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2034 = { sizeof (APIKeyPrevalidator_t579177306), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2035 = { sizeof (AssertHandler_t4134007346), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2036 = { sizeof (HandleAssertCallback_t626632570), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2037 = { sizeof (EndProgram_t136987992), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2038 = { sizeof (ErrorMessage_t3367961177), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2038[4] = 
{
	ErrorMessage_t3367961177::get_offset_of_U3CTitleU3Ek__BackingField_2(),
	ErrorMessage_t3367961177::get_offset_of_U3CTextU3Ek__BackingField_3(),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2039 = { sizeof (InvalidApiKeyException_t120129700), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2040 = { sizeof (ViewNormals_t2246348948), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2040[1] = 
{
	ViewNormals_t2246348948::get_offset_of_objectMesh_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2041 = { sizeof (WRLDARKitAnchorHandler_t1682452238), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2041[3] = 
{
	WRLDARKitAnchorHandler_t1682452238::get_offset_of_m_unityARAnchorManager_2(),
	WRLDARKitAnchorHandler_t1682452238::get_offset_of_m_wrldMapParent_3(),
	WRLDARKitAnchorHandler_t1682452238::get_offset_of_m_wrldMapMask_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2042 = { sizeof (U3CPrivateImplementationDetailsU3E_t4093556361), -1, sizeof(U3CPrivateImplementationDetailsU3E_t4093556361_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2042[2] = 
{
	U3CPrivateImplementationDetailsU3E_t4093556361_StaticFields::get_offset_of_U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_0(),
	U3CPrivateImplementationDetailsU3E_t4093556361_StaticFields::get_offset_of_U24fieldU2D811EB71438479767E10832E824E7D58DCDC0FCB8_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2043 = { sizeof (U24ArrayTypeU3D24_t613818779)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU3D24_t613818779 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2044 = { sizeof (U24ArrayTypeU3D208_t441259731)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU3D208_t441259731 ), 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
