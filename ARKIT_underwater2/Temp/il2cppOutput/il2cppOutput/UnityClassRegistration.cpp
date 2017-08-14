template <typename T> void RegisterClass();
template <typename T> void RegisterStrippedTypeInfo(int, const char*, const char*);

void InvokeRegisterStaticallyLinkedModuleClasses()
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Terrain();
	RegisterModule_Terrain();

	void RegisterModule_TerrainPhysics();
	RegisterModule_TerrainPhysics();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_GameCenter();
	RegisterModule_GameCenter();

	void RegisterModule_Wind();
	RegisterModule_Wind();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

	void RegisterModule_JSONSerialize();
	RegisterModule_JSONSerialize();

	void RegisterModule_ImageConversion();
	RegisterModule_ImageConversion();

}

class EditorExtension; template <> void RegisterClass<EditorExtension>();
namespace Unity { class Component; } template <> void RegisterClass<Unity::Component>();
class Behaviour; template <> void RegisterClass<Behaviour>();
class Animation; template <> void RegisterClass<Animation>();
class Animator; template <> void RegisterClass<Animator>();
class AudioBehaviour; template <> void RegisterClass<AudioBehaviour>();
class AudioListener; template <> void RegisterClass<AudioListener>();
class AudioSource; template <> void RegisterClass<AudioSource>();
class AudioFilter; 
class AudioChorusFilter; 
class AudioDistortionFilter; 
class AudioEchoFilter; 
class AudioHighPassFilter; 
class AudioLowPassFilter; 
class AudioReverbFilter; 
class AudioReverbZone; 
class Camera; template <> void RegisterClass<Camera>();
namespace UI { class Canvas; } template <> void RegisterClass<UI::Canvas>();
namespace UI { class CanvasGroup; } template <> void RegisterClass<UI::CanvasGroup>();
namespace Unity { class Cloth; } 
class Collider2D; 
class BoxCollider2D; 
class CapsuleCollider2D; 
class CircleCollider2D; 
class CompositeCollider2D; 
class EdgeCollider2D; 
class PolygonCollider2D; 
class TilemapCollider2D; 
class ConstantForce; 
class Effector2D; 
class AreaEffector2D; 
class BuoyancyEffector2D; 
class PlatformEffector2D; 
class PointEffector2D; 
class SurfaceEffector2D; 
class FlareLayer; template <> void RegisterClass<FlareLayer>();
class GUIElement; template <> void RegisterClass<GUIElement>();
namespace TextRenderingPrivate { class GUIText; } template <> void RegisterClass<TextRenderingPrivate::GUIText>();
class GUITexture; 
class GUILayer; template <> void RegisterClass<GUILayer>();
class GridLayout; 
class Grid; 
class Tilemap; 
class Halo; 
class HaloLayer; 
class Joint2D; 
class AnchoredJoint2D; 
class DistanceJoint2D; 
class FixedJoint2D; 
class FrictionJoint2D; 
class HingeJoint2D; 
class SliderJoint2D; 
class SpringJoint2D; 
class WheelJoint2D; 
class RelativeJoint2D; 
class TargetJoint2D; 
class LensFlare; 
class Light; template <> void RegisterClass<Light>();
class LightProbeGroup; 
class LightProbeProxyVolume; 
class MonoBehaviour; template <> void RegisterClass<MonoBehaviour>();
class NavMeshAgent; 
class NavMeshObstacle; 
class NetworkView; 
class OffMeshLink; 
class PhysicsUpdateBehaviour2D; 
class ConstantForce2D; 
class PlayableDirector; 
class Projector; template <> void RegisterClass<Projector>();
class ReflectionProbe; 
class Skybox; template <> void RegisterClass<Skybox>();
class SortingGroup; 
class Terrain; template <> void RegisterClass<Terrain>();
class VideoPlayer; 
class WindZone; 
namespace UI { class CanvasRenderer; } template <> void RegisterClass<UI::CanvasRenderer>();
class Collider; template <> void RegisterClass<Collider>();
class BoxCollider; template <> void RegisterClass<BoxCollider>();
class CapsuleCollider; template <> void RegisterClass<CapsuleCollider>();
class CharacterController; template <> void RegisterClass<CharacterController>();
class MeshCollider; template <> void RegisterClass<MeshCollider>();
class SphereCollider; template <> void RegisterClass<SphereCollider>();
class TerrainCollider; template <> void RegisterClass<TerrainCollider>();
class WheelCollider; 
namespace Unity { class Joint; } template <> void RegisterClass<Unity::Joint>();
namespace Unity { class CharacterJoint; } 
namespace Unity { class ConfigurableJoint; } 
namespace Unity { class FixedJoint; } template <> void RegisterClass<Unity::FixedJoint>();
namespace Unity { class HingeJoint; } 
namespace Unity { class SpringJoint; } template <> void RegisterClass<Unity::SpringJoint>();
class LODGroup; 
class MeshFilter; template <> void RegisterClass<MeshFilter>();
class OcclusionArea; 
class OcclusionPortal; 
class ParticleAnimator; 
class ParticleEmitter; 
class EllipsoidParticleEmitter; 
class MeshParticleEmitter; 
class ParticleSystem; template <> void RegisterClass<ParticleSystem>();
class Renderer; template <> void RegisterClass<Renderer>();
class BillboardRenderer; 
class LineRenderer; 
class MeshRenderer; template <> void RegisterClass<MeshRenderer>();
class ParticleRenderer; 
class ParticleSystemRenderer; template <> void RegisterClass<ParticleSystemRenderer>();
class SkinnedMeshRenderer; template <> void RegisterClass<SkinnedMeshRenderer>();
class SpriteMask; 
class SpriteRenderer; 
class TilemapRenderer; 
class TrailRenderer; 
class Rigidbody; template <> void RegisterClass<Rigidbody>();
class Rigidbody2D; 
namespace TextRenderingPrivate { class TextMesh; } 
class Transform; template <> void RegisterClass<Transform>();
namespace UI { class RectTransform; } template <> void RegisterClass<UI::RectTransform>();
class Tree; 
class WorldAnchor; 
class WorldParticleCollider; 
class GameObject; template <> void RegisterClass<GameObject>();
class NamedObject; template <> void RegisterClass<NamedObject>();
class AssetBundle; 
class AssetBundleManifest; 
class ScriptedImporter; 
class AudioMixer; 
class AudioMixerController; 
class AudioMixerGroup; 
class AudioMixerGroupController; 
class AudioMixerSnapshot; 
class AudioMixerSnapshotController; 
class Avatar; template <> void RegisterClass<Avatar>();
class AvatarMask; 
class BillboardAsset; 
class ComputeShader; 
class Flare; 
namespace TextRendering { class Font; } template <> void RegisterClass<TextRendering::Font>();
class GameObjectRecorder; 
class LightProbes; 
class Material; template <> void RegisterClass<Material>();
class ProceduralMaterial; 
class Mesh; template <> void RegisterClass<Mesh>();
class Motion; template <> void RegisterClass<Motion>();
class AnimationClip; template <> void RegisterClass<AnimationClip>();
class PreviewAnimationClip; 
class NavMeshData; 
class OcclusionCullingData; 
class PhysicMaterial; template <> void RegisterClass<PhysicMaterial>();
class PhysicsMaterial2D; 
class PreloadData; template <> void RegisterClass<PreloadData>();
class RuntimeAnimatorController; template <> void RegisterClass<RuntimeAnimatorController>();
class AnimatorController; template <> void RegisterClass<AnimatorController>();
class AnimatorOverrideController; 
class SampleClip; template <> void RegisterClass<SampleClip>();
class AudioClip; template <> void RegisterClass<AudioClip>();
class Shader; template <> void RegisterClass<Shader>();
class ShaderVariantCollection; 
class SpeedTreeWindAsset; 
class Sprite; template <> void RegisterClass<Sprite>();
class SpriteAtlas; 
class SubstanceArchive; 
class TerrainData; template <> void RegisterClass<TerrainData>();
class TextAsset; template <> void RegisterClass<TextAsset>();
class CGProgram; 
class MonoScript; template <> void RegisterClass<MonoScript>();
class Texture; template <> void RegisterClass<Texture>();
class BaseVideoTexture; 
class MovieTexture; 
class WebCamTexture; 
class CubemapArray; 
class LowerResBlitTexture; template <> void RegisterClass<LowerResBlitTexture>();
class ProceduralTexture; 
class RenderTexture; template <> void RegisterClass<RenderTexture>();
class CustomRenderTexture; 
class SparseTexture; 
class Texture2D; template <> void RegisterClass<Texture2D>();
class Cubemap; template <> void RegisterClass<Cubemap>();
class Texture2DArray; template <> void RegisterClass<Texture2DArray>();
class Texture3D; template <> void RegisterClass<Texture3D>();
class VideoClip; 
class GameManager; template <> void RegisterClass<GameManager>();
class GlobalGameManager; template <> void RegisterClass<GlobalGameManager>();
class AudioManager; template <> void RegisterClass<AudioManager>();
class BuildSettings; template <> void RegisterClass<BuildSettings>();
class CloudWebServicesManager; template <> void RegisterClass<CloudWebServicesManager>();
class CrashReportManager; 
class DelayedCallManager; template <> void RegisterClass<DelayedCallManager>();
class GraphicsSettings; template <> void RegisterClass<GraphicsSettings>();
class InputManager; template <> void RegisterClass<InputManager>();
class MasterServerInterface; template <> void RegisterClass<MasterServerInterface>();
class MonoManager; template <> void RegisterClass<MonoManager>();
class NavMeshProjectSettings; 
class NetworkManager; template <> void RegisterClass<NetworkManager>();
class PerformanceReportingManager; 
class Physics2DSettings; 
class PhysicsManager; template <> void RegisterClass<PhysicsManager>();
class PlayerSettings; template <> void RegisterClass<PlayerSettings>();
class QualitySettings; template <> void RegisterClass<QualitySettings>();
class ResourceManager; template <> void RegisterClass<ResourceManager>();
class RuntimeInitializeOnLoadManager; template <> void RegisterClass<RuntimeInitializeOnLoadManager>();
class ScriptMapper; template <> void RegisterClass<ScriptMapper>();
class TagManager; template <> void RegisterClass<TagManager>();
class TimeManager; template <> void RegisterClass<TimeManager>();
class UnityAnalyticsManager; 
class UnityConnectSettings; template <> void RegisterClass<UnityConnectSettings>();
class LevelGameManager; template <> void RegisterClass<LevelGameManager>();
class LightmapSettings; template <> void RegisterClass<LightmapSettings>();
class NavMeshSettings; 
class OcclusionCullingSettings; 
class RenderSettings; template <> void RegisterClass<RenderSettings>();
class NScreenBridge; 
class RenderPassAttachment; 

void RegisterAllClasses()
{
void RegisterBuiltinTypes();
RegisterBuiltinTypes();
	//Total: 89 non stripped classes
	//0. AudioClip
	RegisterClass<AudioClip>();
	//1. SampleClip
	RegisterClass<SampleClip>();
	//2. NamedObject
	RegisterClass<NamedObject>();
	//3. EditorExtension
	RegisterClass<EditorExtension>();
	//4. AudioListener
	RegisterClass<AudioListener>();
	//5. AudioBehaviour
	RegisterClass<AudioBehaviour>();
	//6. Behaviour
	RegisterClass<Behaviour>();
	//7. Unity::Component
	RegisterClass<Unity::Component>();
	//8. AudioSource
	RegisterClass<AudioSource>();
	//9. Camera
	RegisterClass<Camera>();
	//10. GameObject
	RegisterClass<GameObject>();
	//11. RenderSettings
	RegisterClass<RenderSettings>();
	//12. LevelGameManager
	RegisterClass<LevelGameManager>();
	//13. GameManager
	RegisterClass<GameManager>();
	//14. QualitySettings
	RegisterClass<QualitySettings>();
	//15. GlobalGameManager
	RegisterClass<GlobalGameManager>();
	//16. MeshFilter
	RegisterClass<MeshFilter>();
	//17. Renderer
	RegisterClass<Renderer>();
	//18. Projector
	RegisterClass<Projector>();
	//19. Skybox
	RegisterClass<Skybox>();
	//20. GUIElement
	RegisterClass<GUIElement>();
	//21. GUILayer
	RegisterClass<GUILayer>();
	//22. Light
	RegisterClass<Light>();
	//23. Mesh
	RegisterClass<Mesh>();
	//24. MonoBehaviour
	RegisterClass<MonoBehaviour>();
	//25. Shader
	RegisterClass<Shader>();
	//26. Material
	RegisterClass<Material>();
	//27. Sprite
	RegisterClass<Sprite>();
	//28. Texture
	RegisterClass<Texture>();
	//29. Texture2D
	RegisterClass<Texture2D>();
	//30. RenderTexture
	RegisterClass<RenderTexture>();
	//31. Transform
	RegisterClass<Transform>();
	//32. UI::RectTransform
	RegisterClass<UI::RectTransform>();
	//33. Rigidbody
	RegisterClass<Rigidbody>();
	//34. Unity::Joint
	RegisterClass<Unity::Joint>();
	//35. Unity::SpringJoint
	RegisterClass<Unity::SpringJoint>();
	//36. Collider
	RegisterClass<Collider>();
	//37. CapsuleCollider
	RegisterClass<CapsuleCollider>();
	//38. CharacterController
	RegisterClass<CharacterController>();
	//39. ParticleSystem
	RegisterClass<ParticleSystem>();
	//40. Animation
	RegisterClass<Animation>();
	//41. Animator
	RegisterClass<Animator>();
	//42. TextRenderingPrivate::GUIText
	RegisterClass<TextRenderingPrivate::GUIText>();
	//43. TextRendering::Font
	RegisterClass<TextRendering::Font>();
	//44. UI::Canvas
	RegisterClass<UI::Canvas>();
	//45. UI::CanvasGroup
	RegisterClass<UI::CanvasGroup>();
	//46. UI::CanvasRenderer
	RegisterClass<UI::CanvasRenderer>();
	//47. TerrainData
	RegisterClass<TerrainData>();
	//48. Terrain
	RegisterClass<Terrain>();
	//49. FlareLayer
	RegisterClass<FlareLayer>();
	//50. MeshCollider
	RegisterClass<MeshCollider>();
	//51. Unity::FixedJoint
	RegisterClass<Unity::FixedJoint>();
	//52. MeshRenderer
	RegisterClass<MeshRenderer>();
	//53. PreloadData
	RegisterClass<PreloadData>();
	//54. Cubemap
	RegisterClass<Cubemap>();
	//55. Texture3D
	RegisterClass<Texture3D>();
	//56. Texture2DArray
	RegisterClass<Texture2DArray>();
	//57. LowerResBlitTexture
	RegisterClass<LowerResBlitTexture>();
	//58. GraphicsSettings
	RegisterClass<GraphicsSettings>();
	//59. InputManager
	RegisterClass<InputManager>();
	//60. PlayerSettings
	RegisterClass<PlayerSettings>();
	//61. ResourceManager
	RegisterClass<ResourceManager>();
	//62. RuntimeInitializeOnLoadManager
	RegisterClass<RuntimeInitializeOnLoadManager>();
	//63. TimeManager
	RegisterClass<TimeManager>();
	//64. TagManager
	RegisterClass<TagManager>();
	//65. DelayedCallManager
	RegisterClass<DelayedCallManager>();
	//66. BuildSettings
	RegisterClass<BuildSettings>();
	//67. MasterServerInterface
	RegisterClass<MasterServerInterface>();
	//68. NetworkManager
	RegisterClass<NetworkManager>();
	//69. ScriptMapper
	RegisterClass<ScriptMapper>();
	//70. PhysicsManager
	RegisterClass<PhysicsManager>();
	//71. MonoScript
	RegisterClass<MonoScript>();
	//72. TextAsset
	RegisterClass<TextAsset>();
	//73. MonoManager
	RegisterClass<MonoManager>();
	//74. UnityConnectSettings
	RegisterClass<UnityConnectSettings>();
	//75. CloudWebServicesManager
	RegisterClass<CloudWebServicesManager>();
	//76. AudioManager
	RegisterClass<AudioManager>();
	//77. BoxCollider
	RegisterClass<BoxCollider>();
	//78. SphereCollider
	RegisterClass<SphereCollider>();
	//79. SkinnedMeshRenderer
	RegisterClass<SkinnedMeshRenderer>();
	//80. TerrainCollider
	RegisterClass<TerrainCollider>();
	//81. LightmapSettings
	RegisterClass<LightmapSettings>();
	//82. PhysicMaterial
	RegisterClass<PhysicMaterial>();
	//83. Motion
	RegisterClass<Motion>();
	//84. AnimatorController
	RegisterClass<AnimatorController>();
	//85. RuntimeAnimatorController
	RegisterClass<RuntimeAnimatorController>();
	//86. ParticleSystemRenderer
	RegisterClass<ParticleSystemRenderer>();
	//87. Avatar
	RegisterClass<Avatar>();
	//88. AnimationClip
	RegisterClass<AnimationClip>();

}
