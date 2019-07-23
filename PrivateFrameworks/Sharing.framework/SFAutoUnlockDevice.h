/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFAutoUnlockDevice : SFPeerDevice <NSSecureCoding> {
    BOOL  _bluetoothCloudPaired;
    NSUUID * _bluetoothID;
    BOOL  _keyExists;
    NSString * _modelName;
    NSUUID * _proxyBluetoothID;
    NSDictionary * _results;
    BOOL  _unlockEnabled;
}

@property (nonatomic) BOOL bluetoothCloudPaired;
@property (nonatomic, retain) NSUUID *bluetoothID;
@property (nonatomic) BOOL keyExists;
@property (nonatomic, retain) NSString *modelName;
@property (nonatomic, copy) NSUUID *proxyBluetoothID;
@property (nonatomic, retain) NSDictionary *results;
@property (nonatomic, readonly) int type;
@property (nonatomic) BOOL unlockEnabled;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (BOOL)bluetoothCloudPaired;
- (id)bluetoothID;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)keyExists;
- (id)modelName;
- (id)proxyBluetoothID;
- (id)results;
- (void)setBluetoothCloudPaired:(BOOL)arg1;
- (void)setBluetoothID:(id)arg1;
- (void)setKeyExists:(BOOL)arg1;
- (void)setModelName:(id)arg1;
- (void)setProxyBluetoothID:(id)arg1;
- (void)setResults:(id)arg1;
- (void)setUnlockEnabled:(BOOL)arg1;
- (int)type;
- (BOOL)unlockEnabled;

@end
