#include "SDK.h"

IBaseClientDll*			I::Client;
IClientModeShared*		I::ClientMode;
IClientEntityList*		I::ClientEntList;
ICVar*					I::Cvar;
IInputSystem*			I::InputSystem;
IEngineClient*			I::Engine;
IEngineTrace*			I::EngineTrace;
IGlobalVarsBase*		I::Globals;
ISurface*				I::Surface;
IVEffects*				I::vrtEffects;
IVPanel*				I::VPanel;
IVModelRender*			I::ModelRender;
IVModelInfo*			I::ModelInfo;
IMaterialSystem*		I::MaterialSystem;
IMaterial*				I::Material;
IVRenderView*			I::RenderView;
IPrediction*			I::Prediction;
IPhysicsSurfaceProps*	I::Physprops;
IVDebugOverlay*			I::DebugOverlay;
IStudioRender*			I::StudioRender;
IMaterial* visible_tex;
IMaterial* hidden_tex;
IMaterial* visible_flat;
IMaterial* hidden_flat;
