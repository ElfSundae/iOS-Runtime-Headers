/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFDevice : NSObject <HFHomeKitObject, NSSecureCoding> {
    NSString * _accountID;
    bool  _autoUnlockEnabled;
    bool  _autoUnlockWatch;
    NSArray * _batteryInfo;
    SFBLEDevice * _bleDevice;
    NSString * _contactIdentifier;
    unsigned char  _deviceActionType;
    unsigned char  _deviceClassCode;
    unsigned int  _deviceFlags;
    unsigned char  _deviceModelCode;
    long long  _deviceType;
    long long  _distance;
    bool  _duetSync;
    bool  _hasProblem;
    unsigned int  _hotspotInfo;
    NSUUID * _identifier;
    NSString * _idsIdentifier;
    NSString * _model;
    NSString * _name;
    bool  _needsAWDL;
    bool  _needsKeyboard;
    bool  _needsSetup;
    unsigned char  _osVersion;
    bool  _paired;
    unsigned long long  _problemFlags;
    NSString * _requestSSID;
    unsigned int  _systemPairState;
    bool  _wakeDevice;
    bool  _watchLocked;
    bool  _wifiP2P;
}

@property (nonatomic, copy) NSString *accountID;
@property (nonatomic) bool autoUnlockEnabled;
@property (nonatomic) bool autoUnlockWatch;
@property (nonatomic, copy) NSArray *batteryInfo;
@property (nonatomic, retain) SFBLEDevice *bleDevice;
@property (nonatomic, copy) NSString *contactIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned char deviceActionType;
@property (nonatomic) unsigned char deviceClassCode;
@property (nonatomic) unsigned int deviceFlags;
@property (nonatomic, readonly) unsigned char deviceModelCode;
@property (nonatomic, readonly) long long deviceType;
@property (nonatomic) long long distance;
@property (nonatomic, readonly) bool duetSync;
@property (nonatomic) bool hasProblem;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned int hotspotInfo;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) NSString *idsIdentifier;
@property (nonatomic, copy) NSString *model;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) bool needsAWDL;
@property (nonatomic, readonly) bool needsKeyboard;
@property (nonatomic, readonly) bool needsKeyboardOnly;
@property (nonatomic) bool needsSetup;
@property (nonatomic) unsigned char osVersion;
@property (nonatomic) bool paired;
@property (nonatomic, readonly) unsigned long long problemFlags;
@property (nonatomic, copy) NSString *requestSSID;
@property (readonly) Class superclass;
@property (nonatomic) unsigned int systemPairState;
@property (nonatomic, readonly, copy) NSUUID *uniqueIdentifier;
@property (nonatomic) bool wakeDevice;
@property (nonatomic) bool watchLocked;
@property (nonatomic, readonly) bool wifiP2P;

// Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountID;
- (bool)autoUnlockEnabled;
- (bool)autoUnlockWatch;
- (id)batteryInfo;
- (id)bleDevice;
- (id)contactIdentifier;
- (id)description;
- (unsigned char)deviceActionType;
- (unsigned char)deviceClassCode;
- (unsigned int)deviceFlags;
- (unsigned char)deviceModelCode;
- (long long)deviceType;
- (long long)distance;
- (bool)duetSync;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasProblem;
- (unsigned int)hotspotInfo;
- (id)identifier;
- (id)idsIdentifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)model;
- (id)name;
- (bool)needsAWDL;
- (bool)needsKeyboard;
- (bool)needsKeyboardOnly;
- (bool)needsSetup;
- (unsigned char)osVersion;
- (bool)paired;
- (unsigned long long)problemFlags;
- (id)requestSSID;
- (void)setAccountID:(id)arg1;
- (void)setAutoUnlockEnabled:(bool)arg1;
- (void)setAutoUnlockWatch:(bool)arg1;
- (void)setBatteryInfo:(id)arg1;
- (void)setBleDevice:(id)arg1;
- (void)setContactIdentifier:(id)arg1;
- (void)setDeviceActionType:(unsigned char)arg1;
- (void)setDeviceClassCode:(unsigned char)arg1;
- (void)setDeviceFlags:(unsigned int)arg1;
- (void)setDistance:(long long)arg1;
- (void)setHasProblem:(bool)arg1;
- (void)setHotspotInfo:(unsigned int)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIdsIdentifier:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNeedsSetup:(bool)arg1;
- (void)setOsVersion:(unsigned char)arg1;
- (void)setPaired:(bool)arg1;
- (void)setRequestSSID:(id)arg1;
- (void)setSystemPairState:(unsigned int)arg1;
- (void)setWakeDevice:(bool)arg1;
- (void)setWatchLocked:(bool)arg1;
- (unsigned int)systemPairState;
- (void)updateWithBLEDevice:(id)arg1;
- (void)updateWithPairedPeer:(id)arg1;
- (void)updateWithRPIdentity:(id)arg1;
- (bool)wakeDevice;
- (bool)watchLocked;
- (bool)wifiP2P;

// Image: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon

- (bool)isValidDEDPingDevice;
- (bool)isValidDEDPongDevice;
- (bool)isWithinDEDRange;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)uniqueIdentifier;

@end
