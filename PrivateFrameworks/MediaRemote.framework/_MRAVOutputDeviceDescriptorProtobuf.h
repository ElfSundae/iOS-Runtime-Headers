/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRAVOutputDeviceDescriptorProtobuf : PBCodable <NSCopying> {
    float  _batteryLevel;
    bool  _canAccessAppleMusic;
    bool  _canAccessRemoteAssets;
    bool  _canAccessiCloudMusicLibrary;
    bool  _canRelayCommunicationChannel;
    int  _deviceSubType;
    int  _deviceType;
    NSString * _firmwareVersion;
    bool  _groupContainsGroupLeader;
    NSString * _groupID;
    struct { 
        unsigned int batteryLevel : 1; 
        unsigned int deviceSubType : 1; 
        unsigned int deviceType : 1; 
        unsigned int volume : 1; 
        unsigned int canAccessAppleMusic : 1; 
        unsigned int canAccessRemoteAssets : 1; 
        unsigned int canAccessiCloudMusicLibrary : 1; 
        unsigned int canRelayCommunicationChannel : 1; 
        unsigned int groupContainsGroupLeader : 1; 
        unsigned int isAirPlayReceiverSessionActive : 1; 
        unsigned int isDeviceGroupable : 1; 
        unsigned int isGroupLeader : 1; 
        unsigned int isGroupable : 1; 
        unsigned int isLocalDevice : 1; 
        unsigned int isProxyGroupPlayer : 1; 
        unsigned int isRemoteControllable : 1; 
        unsigned int isVolumeControlAvailable : 1; 
        unsigned int requiresAuthorization : 1; 
        unsigned int shouldForceRemoteControlabillity : 1; 
        unsigned int supportsBufferedAirPlay : 1; 
        unsigned int supportsExternalScreen : 1; 
    }  _has;
    bool  _isAirPlayReceiverSessionActive;
    bool  _isDeviceGroupable;
    bool  _isGroupLeader;
    bool  _isGroupable;
    bool  _isLocalDevice;
    bool  _isProxyGroupPlayer;
    bool  _isRemoteControllable;
    bool  _isVolumeControlAvailable;
    NSString * _logicalDeviceID;
    NSData * _macAddress;
    NSString * _modelID;
    NSData * _modelSpecificInfoData;
    NSString * _name;
    bool  _requiresAuthorization;
    bool  _shouldForceRemoteControlabillity;
    _MRAVOutputDeviceSourceInfoProtobuf * _sourceInfo;
    bool  _supportsBufferedAirPlay;
    bool  _supportsExternalScreen;
    NSString * _uniqueIdentifier;
    float  _volume;
}

@property (nonatomic) float batteryLevel;
@property (nonatomic) bool canAccessAppleMusic;
@property (nonatomic) bool canAccessRemoteAssets;
@property (nonatomic) bool canAccessiCloudMusicLibrary;
@property (nonatomic) bool canRelayCommunicationChannel;
@property (nonatomic) int deviceSubType;
@property (nonatomic) int deviceType;
@property (nonatomic, retain) NSString *firmwareVersion;
@property (nonatomic) bool groupContainsGroupLeader;
@property (nonatomic, retain) NSString *groupID;
@property (nonatomic) bool hasBatteryLevel;
@property (nonatomic) bool hasCanAccessAppleMusic;
@property (nonatomic) bool hasCanAccessRemoteAssets;
@property (nonatomic) bool hasCanAccessiCloudMusicLibrary;
@property (nonatomic) bool hasCanRelayCommunicationChannel;
@property (nonatomic) bool hasDeviceSubType;
@property (nonatomic) bool hasDeviceType;
@property (nonatomic, readonly) bool hasFirmwareVersion;
@property (nonatomic) bool hasGroupContainsGroupLeader;
@property (nonatomic, readonly) bool hasGroupID;
@property (nonatomic) bool hasIsAirPlayReceiverSessionActive;
@property (nonatomic) bool hasIsDeviceGroupable;
@property (nonatomic) bool hasIsGroupLeader;
@property (nonatomic) bool hasIsGroupable;
@property (nonatomic) bool hasIsLocalDevice;
@property (nonatomic) bool hasIsProxyGroupPlayer;
@property (nonatomic) bool hasIsRemoteControllable;
@property (nonatomic) bool hasIsVolumeControlAvailable;
@property (nonatomic, readonly) bool hasLogicalDeviceID;
@property (nonatomic, readonly) bool hasMacAddress;
@property (nonatomic, readonly) bool hasModelID;
@property (nonatomic, readonly) bool hasModelSpecificInfoData;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic) bool hasRequiresAuthorization;
@property (nonatomic) bool hasShouldForceRemoteControlabillity;
@property (nonatomic, readonly) bool hasSourceInfo;
@property (nonatomic) bool hasSupportsBufferedAirPlay;
@property (nonatomic) bool hasSupportsExternalScreen;
@property (nonatomic, readonly) bool hasUniqueIdentifier;
@property (nonatomic) bool hasVolume;
@property (nonatomic) bool isAirPlayReceiverSessionActive;
@property (nonatomic) bool isDeviceGroupable;
@property (nonatomic) bool isGroupLeader;
@property (nonatomic) bool isGroupable;
@property (nonatomic) bool isLocalDevice;
@property (nonatomic) bool isProxyGroupPlayer;
@property (nonatomic) bool isRemoteControllable;
@property (nonatomic) bool isVolumeControlAvailable;
@property (nonatomic, retain) NSString *logicalDeviceID;
@property (nonatomic, retain) NSData *macAddress;
@property (nonatomic, retain) NSString *modelID;
@property (nonatomic, retain) NSData *modelSpecificInfoData;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) bool requiresAuthorization;
@property (nonatomic) bool shouldForceRemoteControlabillity;
@property (nonatomic, retain) _MRAVOutputDeviceSourceInfoProtobuf *sourceInfo;
@property (nonatomic) bool supportsBufferedAirPlay;
@property (nonatomic) bool supportsExternalScreen;
@property (nonatomic, retain) NSString *uniqueIdentifier;
@property (nonatomic) float volume;

- (void).cxx_destruct;
- (int)StringAsDeviceSubType:(id)arg1;
- (int)StringAsDeviceType:(id)arg1;
- (float)batteryLevel;
- (bool)canAccessAppleMusic;
- (bool)canAccessRemoteAssets;
- (bool)canAccessiCloudMusicLibrary;
- (bool)canRelayCommunicationChannel;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (int)deviceSubType;
- (id)deviceSubTypeAsString:(int)arg1;
- (int)deviceType;
- (id)deviceTypeAsString:(int)arg1;
- (id)dictionaryRepresentation;
- (id)firmwareVersion;
- (bool)groupContainsGroupLeader;
- (id)groupID;
- (bool)hasBatteryLevel;
- (bool)hasCanAccessAppleMusic;
- (bool)hasCanAccessRemoteAssets;
- (bool)hasCanAccessiCloudMusicLibrary;
- (bool)hasCanRelayCommunicationChannel;
- (bool)hasDeviceSubType;
- (bool)hasDeviceType;
- (bool)hasFirmwareVersion;
- (bool)hasGroupContainsGroupLeader;
- (bool)hasGroupID;
- (bool)hasIsAirPlayReceiverSessionActive;
- (bool)hasIsDeviceGroupable;
- (bool)hasIsGroupLeader;
- (bool)hasIsGroupable;
- (bool)hasIsLocalDevice;
- (bool)hasIsProxyGroupPlayer;
- (bool)hasIsRemoteControllable;
- (bool)hasIsVolumeControlAvailable;
- (bool)hasLogicalDeviceID;
- (bool)hasMacAddress;
- (bool)hasModelID;
- (bool)hasModelSpecificInfoData;
- (bool)hasName;
- (bool)hasRequiresAuthorization;
- (bool)hasShouldForceRemoteControlabillity;
- (bool)hasSourceInfo;
- (bool)hasSupportsBufferedAirPlay;
- (bool)hasSupportsExternalScreen;
- (bool)hasUniqueIdentifier;
- (bool)hasVolume;
- (unsigned long long)hash;
- (bool)isAirPlayReceiverSessionActive;
- (bool)isDeviceGroupable;
- (bool)isEqual:(id)arg1;
- (bool)isGroupLeader;
- (bool)isGroupable;
- (bool)isLocalDevice;
- (bool)isProxyGroupPlayer;
- (bool)isRemoteControllable;
- (bool)isVolumeControlAvailable;
- (id)logicalDeviceID;
- (id)macAddress;
- (void)mergeFrom:(id)arg1;
- (id)modelID;
- (id)modelSpecificInfoData;
- (id)name;
- (bool)readFrom:(id)arg1;
- (bool)requiresAuthorization;
- (void)setBatteryLevel:(float)arg1;
- (void)setCanAccessAppleMusic:(bool)arg1;
- (void)setCanAccessRemoteAssets:(bool)arg1;
- (void)setCanAccessiCloudMusicLibrary:(bool)arg1;
- (void)setCanRelayCommunicationChannel:(bool)arg1;
- (void)setDeviceSubType:(int)arg1;
- (void)setDeviceType:(int)arg1;
- (void)setFirmwareVersion:(id)arg1;
- (void)setGroupContainsGroupLeader:(bool)arg1;
- (void)setGroupID:(id)arg1;
- (void)setHasBatteryLevel:(bool)arg1;
- (void)setHasCanAccessAppleMusic:(bool)arg1;
- (void)setHasCanAccessRemoteAssets:(bool)arg1;
- (void)setHasCanAccessiCloudMusicLibrary:(bool)arg1;
- (void)setHasCanRelayCommunicationChannel:(bool)arg1;
- (void)setHasDeviceSubType:(bool)arg1;
- (void)setHasDeviceType:(bool)arg1;
- (void)setHasGroupContainsGroupLeader:(bool)arg1;
- (void)setHasIsAirPlayReceiverSessionActive:(bool)arg1;
- (void)setHasIsDeviceGroupable:(bool)arg1;
- (void)setHasIsGroupLeader:(bool)arg1;
- (void)setHasIsGroupable:(bool)arg1;
- (void)setHasIsLocalDevice:(bool)arg1;
- (void)setHasIsProxyGroupPlayer:(bool)arg1;
- (void)setHasIsRemoteControllable:(bool)arg1;
- (void)setHasIsVolumeControlAvailable:(bool)arg1;
- (void)setHasRequiresAuthorization:(bool)arg1;
- (void)setHasShouldForceRemoteControlabillity:(bool)arg1;
- (void)setHasSupportsBufferedAirPlay:(bool)arg1;
- (void)setHasSupportsExternalScreen:(bool)arg1;
- (void)setHasVolume:(bool)arg1;
- (void)setIsAirPlayReceiverSessionActive:(bool)arg1;
- (void)setIsDeviceGroupable:(bool)arg1;
- (void)setIsGroupLeader:(bool)arg1;
- (void)setIsGroupable:(bool)arg1;
- (void)setIsLocalDevice:(bool)arg1;
- (void)setIsProxyGroupPlayer:(bool)arg1;
- (void)setIsRemoteControllable:(bool)arg1;
- (void)setIsVolumeControlAvailable:(bool)arg1;
- (void)setLogicalDeviceID:(id)arg1;
- (void)setMacAddress:(id)arg1;
- (void)setModelID:(id)arg1;
- (void)setModelSpecificInfoData:(id)arg1;
- (void)setName:(id)arg1;
- (void)setRequiresAuthorization:(bool)arg1;
- (void)setShouldForceRemoteControlabillity:(bool)arg1;
- (void)setSourceInfo:(id)arg1;
- (void)setSupportsBufferedAirPlay:(bool)arg1;
- (void)setSupportsExternalScreen:(bool)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (void)setVolume:(float)arg1;
- (bool)shouldForceRemoteControlabillity;
- (id)sourceInfo;
- (bool)supportsBufferedAirPlay;
- (bool)supportsExternalScreen;
- (id)uniqueIdentifier;
- (float)volume;
- (void)writeTo:(id)arg1;

@end
