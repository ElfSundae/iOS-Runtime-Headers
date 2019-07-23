/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

@interface NRMutableDeviceCollection : NRMutableStateBase <NRMutableStateParentDelegate, NSFastEnumeration> {
    NSMutableDictionary *_childMap;
    NSMutableDictionary *_deviceCollection;
}

@property (nonatomic, readonly) NRMutableDevice *activeDevice;
@property (nonatomic, retain) NSUUID *activeDeviceID;
@property (nonatomic, retain) NSMutableDictionary *childMap;
@property (nonatomic, retain) NSMutableDictionary *deviceCollection;
@property (getter=paired, nonatomic, readonly) BOOL isPaired;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

+ (id)diffFrom:(id)arg1 to:(id)arg2;
+ (void)parseDiff:(id)arg1 forPropertyChange:(id)arg2 withBlock:(id /* block */)arg3;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activeDevice;
- (id)activeDeviceID;
- (id)allPairingIDs;
- (id)applyDiff:(id)arg1 upOnly:(BOOL)arg2 notifyParent:(BOOL)arg3 unconditional:(BOOL)arg4;
- (void)child:(id)arg1 didApplyDiff:(id)arg2;
- (id)childMap;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)count;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (id)description;
- (id)deviceCollection;
- (id)deviceForBluetoothID:(id)arg1;
- (id)deviceForPairingID:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (BOOL)paired;
- (void)removeDeviceForPairingID:(id)arg1;
- (void)setActiveDeviceID:(id)arg1;
- (void)setChildMap:(id)arg1;
- (void)setDevice:(id)arg1 forPairingID:(id)arg2;
- (void)setDeviceCollection:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;

@end
