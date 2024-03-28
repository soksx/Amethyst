// Automatically generated by FrederoxDev/Reverse-Tools/CxxParser/HeaderGenerator.py
#pragma once
#include "amethyst/Memory.h"
#include "minecraft/src-deps/core/math/Color.h"
#include "minecraft/src-deps/core/string/StringHash.h"
#include "minecraft/src-deps/core/utility/optional_ref.h"
#include "minecraft/src/common/resources/BaseGameVersion.h"
#include "minecraft/src/common/world/Direction.h"
#include "minecraft/src/common/world/item/FertilizerType.h"
#include "minecraft/src/common/world/level/block/components/BlockComponentStorage.h"
#include "minecraft/src/common/world/level/material/Material.h"
#include <functional>
#include <memory>
#include <optional>
#include <string>

class Container;
class Random;
class AABB;
class Vec3;
class MobSpawnerData;
class Randomize;
class BlockLegacy;
class Actor;
class EntityContext;
class BlockPos;
class SpawnConditions;
class HitResult;
class ItemInstance;
class BlockItem;
class BlockSource;
class CopperBehavior;
class Block;
class BaseGameVersion;
class Player;
class ItemStack;
class IConstBlockSource;
class BlockActor;
class GetCollisionShapeInterface;
struct BlockGraphicsModeChangeContext;
struct ActorBlockSyncMessage;
struct UpdateEntityAfterFallOnInterface;
struct Brightness;
struct ResourceDropsContext;
enum BlockProperty;
enum ShapeType;
enum BlockSupportType;
enum BlockRenderLayer;
enum Flip;

enum class FlameOdds : char { INSTANT = 60,
                              EASY = 30,
                              MEDIUM = 15,
                              HARD = 5,
                              NEVER = 0 };

enum class BurnOdds : char { INSTANT = 100,
                             EASY = 60,
                             MEDIUM = 20,
                             HARD = 5,
                             NEVER = 0 };

// struct_size = 944 is_virtual = True
//     hide_vtable = True
// #(Type, Name, Size(in bytes), Offset(in bytes))
//     struct
//     = [("BurnOdds", "mBurnOdds", 1, 95),
//        ("FlameOdds", "mFlameOdds", 1, 94),
//        ("bool", "mIsVanilla", 1, 544),
//        ("const Material&", "mMaterial", 8, 296),
//        ("unsigned short", "mID", 2, 422),
//        ("BaseGameVersion", "mMinRequiredBaseGameVersion", 120, 424),
//        ("unsigned char", "mLightEmission", 1, 374),
//        ("unsigned char", "mLightBlock", 1, 373),
//        ("mce::Color", "mMapColor", 16, 396)]

#pragma pack(push, 1)
class BlockLegacy : public BlockComponentStorage {
public:
    /* this + 40  */ std::byte padding40[54];
    /* this + 94  */ FlameOdds mFlameOdds;
    /* this + 95  */ BurnOdds mBurnOdds;
    /* this + 96  */ std::byte padding96[200];
    /* this + 296 */ const Material& mMaterial;
    /* this + 304 */ std::byte padding304[69];
    /* this + 373 */ unsigned char mLightBlock;
    /* this + 374 */ unsigned char mLightEmission;
    /* this + 375 */ std::byte padding375[21];
    /* this + 396 */ mce::Color mMapColor;
    /* this + 412 */ std::byte padding412[10];
    /* this + 422 */ unsigned short mID;
    /* this + 424 */ BaseGameVersion mMinRequiredBaseGameVersion;
    /* this + 544 */ bool mIsVanilla;
    /* this + 545 */ std::byte padding545[399];

public:
    //
    // VTABLE WRONG FOR 1.20.71.1

    //
    // VTABLE WRONG FOR 1.20.71.1
    //
    //
    // VTABLE WRONG FOR 1.20.71.1
    //
    //
    // VTABLE WRONG FOR 1.20.71.1
    //
    virtual ~BlockLegacy();
    virtual std::shared_ptr<BlockActor> newBlockEntity(const BlockPos& pos, const Block& block) const;
    virtual const Block* getNextBlockPermutation(const Block& currentBlock) const;
    virtual HitResult clip(const Block&, const BlockSource&, const BlockPos&, const Vec3&, const Vec3&, ShapeType, optional_ref<const GetCollisionShapeInterface>) const;
    virtual AABB getCollisionShape(const Block& block, const IConstBlockSource& region, const BlockPos& pos, optional_ref<const GetCollisionShapeInterface> entity) const;
    virtual bool getCollisionShapeForCamera(AABB&, const Block&, const IConstBlockSource&, const BlockPos&) const;
    virtual bool addCollisionShapes(const Block& block, const BlockSource& region, const BlockPos& pos, const AABB* intersectTestBox, std::vector<AABB>& inoutBoxes, optional_ref<const GetCollisionShapeInterface> entity) const;
    virtual void addAABBs(const Block& block, const BlockSource& region, const BlockPos& pos, const AABB* intersectTestBox, std::vector<AABB>& inoutBoxes) const;
    virtual const AABB& getOutline(const Block&, const IConstBlockSource& region, const BlockPos& pos, AABB& bufferValue) const;
    virtual const AABB& getVisualShapeInWorld(const Block& block, const IConstBlockSource& region, const BlockPos& pos, AABB& bufferAABB) const;
    virtual const AABB& getVisualShape(const Block& block, AABB& bufferAABB) const;
    virtual const AABB& getUIShape(const Block& block, AABB& bufferAABB) const;
    virtual bool getLiquidClipVolume(const Block&, BlockSource& region, const BlockPos& pos, AABB& includeBox) const;
    virtual bool isObstructingChests(BlockSource& region, const BlockPos& pos, const Block& thisBlock) const;
    virtual Vec3 randomlyModifyPosition(const BlockPos& pos, int& seed) const;
    virtual Vec3 randomlyModifyPosition(const BlockPos& pos) const;
    virtual void onProjectileHit(BlockSource& region, const BlockPos& pos, const Actor& projectile) const;
    virtual void onLightningHit(BlockSource& region, const BlockPos& pos) const;
    virtual bool liquidCanFlowIntoFromDirection(unsigned char, std::function<const Block&(const BlockPos&)>, const BlockPos&) const;
    virtual bool hasVariableLighting() const;
    virtual bool isStrippable(const Block& srcBlock) const;
    virtual const Block& getStrippedBlock(const Block& srcBlock) const;
    virtual bool canProvideSupport(const Block& block, unsigned char face, BlockSupportType type) const;
    virtual bool canProvideMultifaceSupport(const Block& block, unsigned char face) const;
    virtual bool canConnect(const Block& otherBlock, unsigned char toOther, const Block& thisBlock) const;
    virtual const CopperBehavior* tryGetCopperBehavior() const;
    virtual bool canDamperVibrations() const;
    virtual bool canOccludeVibrations() const;
    virtual bool isStemBlock() const;
    virtual bool isContainerBlock() const;
    virtual bool isCraftingBlock() const;
    virtual bool isWaterBlocking() const;
    virtual bool isFenceBlock() const;
    virtual bool isFenceGateBlock() const;
    virtual bool isThinFenceBlock() const;
    virtual bool isWallBlock() const;
    virtual bool isStairBlock() const;
    virtual bool isSlabBlock() const;
    virtual bool isDoubleSlabBlock() const;
    virtual bool isDoorBlock() const;
    virtual bool isRailBlock() const;
    virtual bool isButtonBlock() const;
    virtual bool isLeverBlock() const;
    virtual bool isCandleCakeBlock() const;
    virtual bool isMultifaceBlock() const;
    virtual bool isSignalSource() const;
    virtual bool canBeOriginalSurface() const;
    virtual bool isSilentWhenJumpingOff() const;
    virtual bool isValidAuxValue(int value) const;
    virtual bool canFillAtPos(BlockSource& region, const BlockPos& pos, const Block& block) const;
    virtual const Block& sanitizeFillBlock(BlockSource& region, const BlockPos& pos, const Block& block) const;
    virtual void onFillBlock(BlockSource& region, const BlockPos& pos, const Block& block) const;
    virtual int getDirectSignal(BlockSource& region, const BlockPos& pos, int dir) const;
    virtual bool canBeDestroyedByWaterSpread() const;
    virtual bool waterSpreadCausesSpawn() const;
    virtual bool canContainLiquid() const;
    virtual std::optional<HashedString> getRequiredMedium() const;
    virtual bool shouldConnectToRedstone(BlockSource& region, const BlockPos& pos, Direction::Type direction) const;
    virtual void handlePrecipitation(BlockSource& region, const BlockPos& pos, float downfallAmount, float temperature) const;
    virtual bool canBeUsedInCommands(const BaseGameVersion& baseGameVersion) const;
    virtual bool checkIsPathable(Actor& entity, const BlockPos& lastPathPos, const BlockPos& pathPos) const;
    virtual bool shouldDispense(BlockSource& region, Container& container) const;
    virtual bool dispense(BlockSource& region, Container& container, int slot, const Vec3& pos, unsigned char face) const;
    virtual void transformOnFall(BlockSource& region, const BlockPos& pos, Actor* entity, float fallDistance) const;
    virtual void onRedstoneUpdate(BlockSource& region, const BlockPos& pos, int strength, bool isFirstTime) const;
    virtual void onMove(BlockSource& region, const BlockPos& from, const BlockPos& to) const;
    virtual bool detachesOnPistonMove(BlockSource& region, const BlockPos& pos) const;
    virtual void movedByPiston(BlockSource& region, const BlockPos& pos) const;
    virtual void onStructureBlockPlace(BlockSource& region, const BlockPos& pos) const;
    virtual void onStructureNeighborBlockPlace(BlockSource& region, const BlockPos& pos) const;
    virtual void setupRedstoneComponent(BlockSource& region, const BlockPos& pos) const;
    virtual BlockProperty getRedstoneProperty(BlockSource& region, const BlockPos& pos) const;
    virtual void updateEntityAfterFallOn(const BlockPos& pos, UpdateEntityAfterFallOnInterface& entity) const;
    virtual bool isBounceBlock() const;
    virtual bool isPreservingMediumWhenPlaced(const BlockLegacy* medium) const;
    virtual bool isFilteredOut(BlockRenderLayer heldItemRenderLayer) const;
    virtual bool canRenderSelectionOverlay(BlockRenderLayer) const;
    virtual bool ignoreEntitiesOnPistonMove(const Block& block) const;
    virtual bool onFertilized(BlockSource& region, const BlockPos& pos, Actor* actor, FertilizerType fType) const;
    virtual bool mayConsumeFertilizer(BlockSource& region) const;
    virtual bool canBeFertilized(BlockSource& region, const BlockPos& pos, const Block& aboveBlock) const;
    virtual bool mayPick() const;
    virtual bool mayPick(const BlockSource& region, const Block& block, bool liquid) const;
    virtual bool mayPlace(BlockSource& region, const BlockPos& pos, unsigned char face) const;
    virtual bool mayPlace(BlockSource& region, const BlockPos& pos) const;
    virtual bool mayPlaceOn(BlockSource& region, const BlockPos& pos) const;
    virtual bool tryToPlace(BlockSource& region, const BlockPos& pos, const Block& block, const ActorBlockSyncMessage* syncMsg) const;
    virtual bool tryToTill(BlockSource& region, const BlockPos& pos, Actor& entity, ItemStack& item) const;
    virtual bool breaksFallingBlocks(const Block& block, BaseGameVersion version) const;
    virtual void destroy(BlockSource& region, const BlockPos& pos, const Block& block, Actor* entitySource) const;
    virtual bool getIgnoresDestroyPermissions(Actor& entity, const BlockPos& pos) const;
    virtual void neighborChanged(BlockSource& region, const BlockPos& pos, const BlockPos& neighborPos) const;
    virtual bool getSecondPart(const BlockSource& region, const BlockPos& pos, BlockPos& out) const;
    virtual const Block* playerWillDestroy(Player& player, const BlockPos& pos, const Block& block) const;
    virtual void spawnResources(BlockSource& region, const BlockPos& pos, const Block& block, Randomize& randomize, const ResourceDropsContext& resourceDropsContext) const;
    virtual ItemInstance asItemInstance(const Block&, const BlockActor*) const;
    virtual void trySpawnResourcesOnExplosion(BlockSource& region, const BlockPos& pos, const Block& block, Randomize& randomize, float explosionRadius) const;
    virtual const Block& getPlacementBlock(const Actor& by, const BlockPos& pos, unsigned char face, const Vec3& clickPos, int itemValue) const;
    virtual int calcVariant(BlockSource& region, const BlockPos& pos, const mce::Color& baseColor) const;
    virtual bool isAttachedTo(BlockSource& region, const BlockPos& pos, BlockPos& outAttachedTo) const;
    virtual bool attack(Player* player, const BlockPos& pos) const;
    virtual bool shouldTriggerEntityInside(BlockSource& region, const BlockPos& pos, Actor& entity) const;
    virtual bool canBeBuiltOver(BlockSource& region, const BlockPos& pos, const BlockItem& newItem) const;
    virtual bool canBeBuiltOver(BlockSource& region, const BlockPos& pos) const;
    virtual void triggerEvent(BlockSource& region, const BlockPos& pos, int b0, int b1) const;
    virtual void executeEvent(BlockSource& region, const BlockPos& pos, const Block& block, const std::string& eventName, Actor& sourceEntity) const;
    virtual bool hasTag(BlockSource& region, const BlockPos& pos, const Block& block, const std::string& tagName) const;
    virtual const MobSpawnerData* getMobToSpawn(const SpawnConditions& conditions, BlockSource& region) const;
    virtual bool shouldStopFalling(Actor& entity) const;
    virtual bool pushesUpFallingBlocks() const;
    virtual bool canHaveExtraData() const;
    virtual bool hasComparatorSignal() const;
    virtual int getComparatorSignal(BlockSource& region, const BlockPos& pos, const Block& block, unsigned char dir) const;
    virtual bool canSlide(BlockSource& region, const BlockPos& pos) const;
    virtual bool canInstatick() const;
    virtual bool canSpawnAt(const BlockSource& region, const BlockPos& pos) const;
    virtual void notifySpawnedAt(BlockSource& region, const BlockPos& pos) const;
    virtual bool causesFreezeEffect() const;
    virtual int getIconYOffset() const;
    virtual std::string buildDescriptionId(const Block&) const;
    virtual bool isAuxValueRelevantForPicking() const;
    virtual int getColor(const Block& block) const;
    virtual int getColorAtPos(BlockSource& region, const BlockPos& pos) const;
    virtual int getColor(BlockSource& region, const BlockPos& pos, const Block& block) const;
    virtual int getColorForParticle(BlockSource& region, const BlockPos& pos, const Block& block) const;
    virtual bool isSeasonTinted(const Block& block, BlockSource& region, const BlockPos& p) const;
    virtual void onGraphicsModeChanged(const BlockGraphicsModeChangeContext& context);
    virtual float getShadeBrightness(const Block& block) const;
    virtual int telemetryVariant(BlockSource& region, const BlockPos& pos) const;
    virtual int getVariant(const Block& block) const;
    virtual bool canSpawnOn(Actor*) const;
    virtual const Block& getRenderBlock() const;
    virtual unsigned char getMappedFace(unsigned char face, const Block& block) const;
    virtual Flip getFaceFlip(unsigned char face, const Block& block) const;
    virtual void animateTickBedrockLegacy(BlockSource&, const BlockPos&, Random&) const;
    virtual void animateTick(BlockSource& region, const BlockPos& pos, Random& random) const;
    virtual BlockLegacy& init();
    virtual bool canBeSilkTouched() const;
    virtual const Block* tryLegacyUpgrade(unsigned short) const;
    virtual bool dealsContactDamage(const Actor& actor, const Block& block, bool isPathFinding) const;
    virtual const Block* tryGetInfested(const Block&) const;
    virtual const Block* tryGetUninfested(const Block&) const;
    virtual void _addHardCodedBlockComponents();
    // protected:
    virtual void onRemove(BlockSource& region, const BlockPos& pos) const;
    virtual void onExploded(BlockSource& region, const BlockPos& pos, Actor* entitySource) const;
    virtual void onStandOn(EntityContext& entity, const BlockPos& pos) const;
    virtual void onPlace(BlockSource& region, const BlockPos& pos) const;
    virtual void onFallOn(BlockSource& region, const BlockPos& pos, Actor& entity, float fallDistance) const;
    virtual bool shouldTickOnSetBlock() const;
    virtual void tick(BlockSource& region, const BlockPos& pos, Random& random) const;
    virtual void randomTick(BlockSource& region, const BlockPos& pos, Random& random) const;
    virtual bool isInteractiveBlock() const;
    virtual bool use(Player& player, const BlockPos& pos, unsigned char face, std::optional<Vec3>) const;
    virtual bool use(Player& player, const BlockPos& pos, unsigned char face) const;
    virtual bool allowStateMismatchOnPlacement(const Block&, const Block&) const;
    virtual bool canSurvive(BlockSource& region, const BlockPos& pos) const;
    virtual BlockRenderLayer getRenderLayer() const;
    virtual BlockRenderLayer getRenderLayer(const Block& block, BlockSource&, const BlockPos& pos) const;
    virtual int getExtraRenderLayers() const;
    //
    // VTABLE WRONG FOR 1.20.71.1
    //
    // 
    // VTABLE WRONG FOR 1.20.71.1
    //
    // Get map color is 3 ahead, temp fix....
    // virtual Brightness getLight(const Block&) const;
    // virtual Brightness getLightEmission(const Block&) const;
    // virtual Brightness getEmissiveBrightness(const Block&) const;
    virtual mce::Color getMapColor(BlockSource&, const BlockPos&, const Block&) const;
    virtual void playerDestroy(Player& player, const BlockPos& pos, const Block& block) const;
    virtual ItemInstance getResourceItem(Randomize&, const Block&, int) const;
    virtual int getResourceCount(Randomize&, const Block&, int) const;
    virtual ItemInstance getSilkTouchItemInstance(const Block&) const;
    // private:
    virtual void entityInside(BlockSource&, const BlockPos&, Actor&) const;

public:
    BlockLegacy(const std::string& nameId, short id, const Material& material);
    short getBlockItemId();
};
#pragma pack(pop)

static_assert(sizeof(BlockLegacy) == 944);