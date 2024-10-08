#pragma once
#include <memory>
#include <minecraft/src-client/common/client/renderer/TextureGroup.hpp>

// class MinecraftGame : public BedrockEngine::AppIsland, App, IMinecraftGame, LevelListener,
//                             ResourcePackListener, OptionsObserver, ActiveDirectoryIdentityObserver

class MinecraftInputHandler;

class MinecraftGame {
public:
    /* this + 0    */ uintptr_t** vtable;
    /* this + 8    */ std::byte padding8[1912];
    /* this + 1920 */ std::shared_ptr<mce::TextureGroup> mTextures;
    /* this + 1936 */ std::byte padding1936[1392];
    /* this + 3328 */ std::unique_ptr<MinecraftInputHandler> mInput;
};

// 1.21.0.3
static_assert(offsetof(MinecraftGame, mTextures) == 1920);