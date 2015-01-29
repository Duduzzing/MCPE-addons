#ifndef __NETEVENTCALLBACK_H__
#define __NETEVENTCALLBACK_H__

namespace RakNet {
	class RakNetGUID;
}
class Level;
class Player;
class Entity;
class Mob;
class LoginPacket;
class LoginStatusPacket;
class SetTimePacket;
class MessagePacket;
class StartGamePacket;
class AddItemEntityPacket;
class AddPaintingPacket;
class TakeItemEntityPacket;
class AddEntityPacket;
class AddMobPacket;
class AddPlayerPacket;
class RemovePlayerPacket;
class RemoveEntityPacket;
class MoveEntityPacket;
class RotateHeadPacket;
class MovePlayerPacket;
class PlaceBlockPacket;
class RemoveBlockPacket;
class UpdateBlockPacket;
class ExplodePacket;
class LevelEventPacket;
class TileEventPacket;
class EntityEventPacket;
class ChunkDataPacket;
class PlayerEquipmentPacket;
class PlayerArmorEquipmentPacket;
class SetEntityDataPacket;
class SetEntityMotionPacket;
class SetHealthPacket;
class SetEntityLinkPacket;
class SetSpawnPositionPacket;
class InteractPacket;
class UseItemPacket;
class PlayerActionPacket;
class HurtArmorPacket;
class SendInventoryPacket;
class DropItemPacket;
class ContainerOpenPacket;
class ContainerClosePacket;
class ContainerAckPacket;
class ContainerSetDataPacket;
class ContainerSetSlotPacket;
class ContainerSetContentPacket;
class ChatPacket;
class AdventureSettingsPacket;
class AnimatePacket;
class EntityDataPacket;
class PlayerInputPacket;
class FullChunkDataPacket;
class SetDifficultyPacket;
class RespawnPacket;

class NetEventCallback {
public:
	//void **vtable;	// 0

public:
	virtual void onPlayerReady(Player &);
	virtual ~NetEventCallback();
	virtual void onConnect(const RakNet::RakNetGUID &);
	virtual void onUnableToConnect();
	virtual void onNewClient(const RakNet::RakNetGUID &);
	virtual void onDisconnect(const RakNet::RakNetGUID &);
	virtual bool allowIncomingPacketId(const RakNet::RakNetGUID &, int);
	virtual void handle(const RakNet::RakNetGUID &, LoginPacket *);
	virtual void handle(const RakNet::RakNetGUID &, LoginStatusPacket *);
	virtual void handle(const RakNet::RakNetGUID &, SetTimePacket *);
	virtual void handle(const RakNet::RakNetGUID &, MessagePacket *);
	virtual void handle(const RakNet::RakNetGUID &, StartGamePacket *);
	virtual void handle(const RakNet::RakNetGUID &, AddItemEntityPacket *);
	virtual void handle(const RakNet::RakNetGUID &, AddPaintingPacket *);
	virtual void handle(const RakNet::RakNetGUID &, TakeItemEntityPacket *);
	virtual void handle(const RakNet::RakNetGUID &, AddEntityPacket *);
	virtual void handle(const RakNet::RakNetGUID &, AddMobPacket *);
	virtual void handle(const RakNet::RakNetGUID &, AddPlayerPacket *);
	virtual void handle(const RakNet::RakNetGUID &, RemovePlayerPacket *);
	virtual void handle(const RakNet::RakNetGUID &, RemoveEntityPacket *);
	virtual void handle(const RakNet::RakNetGUID &, MoveEntityPacket *);
	virtual void handle(const RakNet::RakNetGUID &, RotateHeadPacket *);
	virtual void handle(const RakNet::RakNetGUID &, MovePlayerPacket *);
	virtual void handle(const RakNet::RakNetGUID &, PlaceBlockPacket *);
	virtual void handle(const RakNet::RakNetGUID &, RemoveBlockPacket *);
	virtual void handle(const RakNet::RakNetGUID &, UpdateBlockPacket *);
	virtual void handle(const RakNet::RakNetGUID &, ExplodePacket *);
	virtual void handle(const RakNet::RakNetGUID &, LevelEventPacket *);
	virtual void handle(const RakNet::RakNetGUID &, TileEventPacket *);
	virtual void handle(const RakNet::RakNetGUID &, EntityEventPacket *);
	virtual void handle(const RakNet::RakNetGUID &, ChunkDataPacket *);
	virtual void handle(const RakNet::RakNetGUID &, PlayerEquipmentPacket *);
	virtual void handle(const RakNet::RakNetGUID &, PlayerArmorEquipmentPacket *);
	virtual void handle(const RakNet::RakNetGUID &, SetEntityDataPacket *);
	virtual void handle(const RakNet::RakNetGUID &, SetEntityMotionPacket *);
	virtual void handle(const RakNet::RakNetGUID &, SetHealthPacket *);
	virtual void handle(const RakNet::RakNetGUID &, SetEntityLinkPacket *);
	virtual void handle(const RakNet::RakNetGUID &, SetSpawnPositionPacket *);
	virtual void handle(const RakNet::RakNetGUID &, InteractPacket *);
	virtual void handle(const RakNet::RakNetGUID &, UseItemPacket *);
	virtual void handle(const RakNet::RakNetGUID &, PlayerActionPacket *);
	virtual void handle(const RakNet::RakNetGUID &, HurtArmorPacket *);
	virtual void handle(const RakNet::RakNetGUID &, SendInventoryPacket *);
	virtual void handle(const RakNet::RakNetGUID &, DropItemPacket *);
	virtual void handle(const RakNet::RakNetGUID &, ContainerOpenPacket *);
	virtual void handle(const RakNet::RakNetGUID &, ContainerClosePacket *);
	virtual void handle(const RakNet::RakNetGUID &, ContainerAckPacket *);
	virtual void handle(const RakNet::RakNetGUID &, ContainerSetDataPacket *);
	virtual void handle(const RakNet::RakNetGUID &, ContainerSetSlotPacket *);
	virtual void handle(const RakNet::RakNetGUID &, ContainerSetContentPacket *);
	virtual void handle(const RakNet::RakNetGUID &, ChatPacket *);
	virtual void handle(const RakNet::RakNetGUID &, AdventureSettingsPacket *);
	virtual void handle(const RakNet::RakNetGUID &, AnimatePacket *);
	virtual void handle(const RakNet::RakNetGUID &, EntityDataPacket *);
	virtual void handle(const RakNet::RakNetGUID &, PlayerInputPacket *);
	virtual void handle(const RakNet::RakNetGUID &, FullChunkDataPacket *);
	virtual void handle(const RakNet::RakNetGUID &, SetDifficultyPacket *);
	virtual void addMoveEntityPacket(const Entity *);
	virtual void addSetEntityMotionPacket(const Entity *);
	virtual void addRotateHeadPacket(const Mob *);
	virtual void sendAndClearBatchedPackets();
	virtual void handle(const RakNet::RakNetGUID &, RespawnPacket *);
	virtual void handle(Level *, const RakNet::RakNetGUID &, RespawnPacket *);
	virtual void onPlayerVerified(const void *); // TODO RestCallTagData
	virtual void onPlayerVerifiedFailed(const void *); // TODO RestCallTagData
	virtual void onServerFull();
	Player *findPlayer(Level *, const RakNet::RakNetGUID *);
	Player *findPlayer(Level *, int);
	Player *findPlayer(Level *, int, const RakNet::RakNetGUID *);
};

#endif
