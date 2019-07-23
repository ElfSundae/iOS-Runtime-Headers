/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDNanoRegistryPairingAttemptReport : PBCodable <NSCopying> {
    NSString * _abortPairingReason;
    unsigned long long  _accurateTimestamp;
    unsigned int  _attemptCounter;
    unsigned int  _btPairingRetryCount;
    unsigned int  _finalDurationSeconds;
    NSString * _finalScreenName;
    NSString * _gizmoBuild;
    NSString * _gizmoBuildtype;
    unsigned int  _gizmoEnclosureMaterial;
    NSString * _gizmoHardware;
    unsigned int  _gizmoMaxPairingVersion;
    NSString * _gizmoSerial;
    struct { 
        unsigned int accurateTimestamp : 1; 
        unsigned int timestamp : 1; 
        unsigned int attemptCounter : 1; 
        unsigned int btPairingRetryCount : 1; 
        unsigned int finalDurationSeconds : 1; 
        unsigned int gizmoEnclosureMaterial : 1; 
        unsigned int gizmoMaxPairingVersion : 1; 
        unsigned int incorrectPINcount : 1; 
        unsigned int lossOfBTConnectivity : 1; 
        unsigned int lossOfIDSConnectivity : 1; 
        unsigned int pairedDeviceCount : 1; 
        unsigned int pairingType : 1; 
        unsigned int reason : 1; 
        unsigned int subreason : 1; 
        unsigned int switchCounter : 1; 
        unsigned int isAutomated : 1; 
    }  _has;
    unsigned int  _incorrectPINcount;
    NSString * _ipV4;
    NSString * _ipV6;
    BOOL  _isAutomated;
    unsigned int  _lossOfBTConnectivity;
    unsigned int  _lossOfIDSConnectivity;
    unsigned int  _pairedDeviceCount;
    unsigned int  _pairingType;
    NSString * _processName;
    unsigned int  _reason;
    unsigned int  _subreason;
    unsigned int  _switchCounter;
    unsigned long long  _timestamp;
}

@property (nonatomic, retain) NSString *abortPairingReason;
@property (nonatomic) unsigned long long accurateTimestamp;
@property (nonatomic) unsigned int attemptCounter;
@property (nonatomic) unsigned int btPairingRetryCount;
@property (nonatomic) unsigned int finalDurationSeconds;
@property (nonatomic, retain) NSString *finalScreenName;
@property (nonatomic, retain) NSString *gizmoBuild;
@property (nonatomic, retain) NSString *gizmoBuildtype;
@property (nonatomic) unsigned int gizmoEnclosureMaterial;
@property (nonatomic, retain) NSString *gizmoHardware;
@property (nonatomic) unsigned int gizmoMaxPairingVersion;
@property (nonatomic, retain) NSString *gizmoSerial;
@property (nonatomic, readonly) BOOL hasAbortPairingReason;
@property (nonatomic) BOOL hasAccurateTimestamp;
@property (nonatomic) BOOL hasAttemptCounter;
@property (nonatomic) BOOL hasBtPairingRetryCount;
@property (nonatomic) BOOL hasFinalDurationSeconds;
@property (nonatomic, readonly) BOOL hasFinalScreenName;
@property (nonatomic, readonly) BOOL hasGizmoBuild;
@property (nonatomic, readonly) BOOL hasGizmoBuildtype;
@property (nonatomic) BOOL hasGizmoEnclosureMaterial;
@property (nonatomic, readonly) BOOL hasGizmoHardware;
@property (nonatomic) BOOL hasGizmoMaxPairingVersion;
@property (nonatomic, readonly) BOOL hasGizmoSerial;
@property (nonatomic) BOOL hasIncorrectPINcount;
@property (nonatomic, readonly) BOOL hasIpV4;
@property (nonatomic, readonly) BOOL hasIpV6;
@property (nonatomic) BOOL hasIsAutomated;
@property (nonatomic) BOOL hasLossOfBTConnectivity;
@property (nonatomic) BOOL hasLossOfIDSConnectivity;
@property (nonatomic) BOOL hasPairedDeviceCount;
@property (nonatomic) BOOL hasPairingType;
@property (nonatomic, readonly) BOOL hasProcessName;
@property (nonatomic) BOOL hasReason;
@property (nonatomic) BOOL hasSubreason;
@property (nonatomic) BOOL hasSwitchCounter;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned int incorrectPINcount;
@property (nonatomic, retain) NSString *ipV4;
@property (nonatomic, retain) NSString *ipV6;
@property (nonatomic) BOOL isAutomated;
@property (nonatomic) unsigned int lossOfBTConnectivity;
@property (nonatomic) unsigned int lossOfIDSConnectivity;
@property (nonatomic) unsigned int pairedDeviceCount;
@property (nonatomic) unsigned int pairingType;
@property (nonatomic, retain) NSString *processName;
@property (nonatomic) unsigned int reason;
@property (nonatomic) unsigned int subreason;
@property (nonatomic) unsigned int switchCounter;
@property (nonatomic) unsigned long long timestamp;

- (id)abortPairingReason;
- (unsigned long long)accurateTimestamp;
- (unsigned int)attemptCounter;
- (unsigned int)btPairingRetryCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)finalDurationSeconds;
- (id)finalScreenName;
- (id)gizmoBuild;
- (id)gizmoBuildtype;
- (unsigned int)gizmoEnclosureMaterial;
- (id)gizmoHardware;
- (unsigned int)gizmoMaxPairingVersion;
- (id)gizmoSerial;
- (BOOL)hasAbortPairingReason;
- (BOOL)hasAccurateTimestamp;
- (BOOL)hasAttemptCounter;
- (BOOL)hasBtPairingRetryCount;
- (BOOL)hasFinalDurationSeconds;
- (BOOL)hasFinalScreenName;
- (BOOL)hasGizmoBuild;
- (BOOL)hasGizmoBuildtype;
- (BOOL)hasGizmoEnclosureMaterial;
- (BOOL)hasGizmoHardware;
- (BOOL)hasGizmoMaxPairingVersion;
- (BOOL)hasGizmoSerial;
- (BOOL)hasIncorrectPINcount;
- (BOOL)hasIpV4;
- (BOOL)hasIpV6;
- (BOOL)hasIsAutomated;
- (BOOL)hasLossOfBTConnectivity;
- (BOOL)hasLossOfIDSConnectivity;
- (BOOL)hasPairedDeviceCount;
- (BOOL)hasPairingType;
- (BOOL)hasProcessName;
- (BOOL)hasReason;
- (BOOL)hasSubreason;
- (BOOL)hasSwitchCounter;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (unsigned int)incorrectPINcount;
- (id)ipV4;
- (id)ipV6;
- (BOOL)isAutomated;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)lossOfBTConnectivity;
- (unsigned int)lossOfIDSConnectivity;
- (void)mergeFrom:(id)arg1;
- (unsigned int)pairedDeviceCount;
- (unsigned int)pairingType;
- (id)processName;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)reason;
- (void)setAbortPairingReason:(id)arg1;
- (void)setAccurateTimestamp:(unsigned long long)arg1;
- (void)setAttemptCounter:(unsigned int)arg1;
- (void)setBtPairingRetryCount:(unsigned int)arg1;
- (void)setFinalDurationSeconds:(unsigned int)arg1;
- (void)setFinalScreenName:(id)arg1;
- (void)setGizmoBuild:(id)arg1;
- (void)setGizmoBuildtype:(id)arg1;
- (void)setGizmoEnclosureMaterial:(unsigned int)arg1;
- (void)setGizmoHardware:(id)arg1;
- (void)setGizmoMaxPairingVersion:(unsigned int)arg1;
- (void)setGizmoSerial:(id)arg1;
- (void)setHasAccurateTimestamp:(BOOL)arg1;
- (void)setHasAttemptCounter:(BOOL)arg1;
- (void)setHasBtPairingRetryCount:(BOOL)arg1;
- (void)setHasFinalDurationSeconds:(BOOL)arg1;
- (void)setHasGizmoEnclosureMaterial:(BOOL)arg1;
- (void)setHasGizmoMaxPairingVersion:(BOOL)arg1;
- (void)setHasIncorrectPINcount:(BOOL)arg1;
- (void)setHasIsAutomated:(BOOL)arg1;
- (void)setHasLossOfBTConnectivity:(BOOL)arg1;
- (void)setHasLossOfIDSConnectivity:(BOOL)arg1;
- (void)setHasPairedDeviceCount:(BOOL)arg1;
- (void)setHasPairingType:(BOOL)arg1;
- (void)setHasReason:(BOOL)arg1;
- (void)setHasSubreason:(BOOL)arg1;
- (void)setHasSwitchCounter:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setIncorrectPINcount:(unsigned int)arg1;
- (void)setIpV4:(id)arg1;
- (void)setIpV6:(id)arg1;
- (void)setIsAutomated:(BOOL)arg1;
- (void)setLossOfBTConnectivity:(unsigned int)arg1;
- (void)setLossOfIDSConnectivity:(unsigned int)arg1;
- (void)setPairedDeviceCount:(unsigned int)arg1;
- (void)setPairingType:(unsigned int)arg1;
- (void)setProcessName:(id)arg1;
- (void)setReason:(unsigned int)arg1;
- (void)setSubreason:(unsigned int)arg1;
- (void)setSwitchCounter:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned int)subreason;
- (unsigned int)switchCounter;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
