/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPSystemKeychainStore : NSObject <HAPKeyStore> {
    NSString *_activeControllerIdentifier;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic, retain) NSString *activeControllerIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)systemStore;

- (void).cxx_destruct;
- (long)_addKeychainItem:(id)arg1;
- (long)_createControllerPublicKey:(id*)arg1 secretKey:(id*)arg2 keyPair:(id*)arg3 username:(id*)arg4;
- (long)_createMetadataSecretKey:(id*)arg1;
- (long)_deleteAllPeripheralIdentifiers;
- (long)_deletePeripheralIdentifierForAccessoryName:(id)arg1;
- (BOOL)_getAllAvailableControllerPublicKeys:(id*)arg1 secretKeys:(id*)arg2 userNames:(id*)arg3;
- (long)_getControllerPublicKey:(id*)arg1 secretKey:(id*)arg2 keyPair:(id*)arg3 username:(id*)arg4;
- (id)_getKeychainItemsForAccessGroup:(id)arg1 type:(id)arg2 account:(id)arg3 shouldReturnData:(BOOL)arg4 error:(int*)arg5;
- (long)_getMetadataSecretKey:(id*)arg1;
- (long)_getPeripheralIdentifier:(id*)arg1 forAccessoryName:(id)arg2 protocolVersion:(unsigned int*)arg3;
- (long)_getPublicKey:(id*)arg1 registeredWithHomeKit:(BOOL*)arg2 forAccessoryName:(id)arg3;
- (BOOL)_removeAccessoryKeyForName:(id)arg1;
- (long)_removeControllerKeyPair;
- (long)_removeControllerKeyPairForIdentifier:(id)arg1 leaveTombstone:(BOOL)arg2;
- (long)_removeKeychainItem:(id)arg1 leaveTombstone:(BOOL)arg2;
- (long)_saveKeyPair:(id)arg1 username:(id)arg2 syncable:(BOOL)arg3;
- (long)_savePeripheralIdentifier:(id)arg1 forAccessoryName:(id)arg2 protocolVersion:(unsigned int)arg3;
- (long)_savePublicKey:(id)arg1 forAccessoryName:(id)arg2;
- (long)_updateCurrentiCloudIdentifier:(id)arg1 controllerPairingIdentifier:(id)arg2;
- (id)activeControllerIdentifier;
- (BOOL)deleteAllPeripheralIdentifiers:(id*)arg1;
- (BOOL)deletePeripheralIdentifierForAccessoryName:(id)arg1 error:(id*)arg2;
- (BOOL)deserializeKeyPair:(id)arg1 publicKey:(id*)arg2 secretKey:(id*)arg3 error:(id*)arg4;
- (BOOL)getAllAvailableControllerPublicKeys:(id*)arg1 secretKeys:(id*)arg2 userNames:(id*)arg3 error:(id*)arg4;
- (BOOL)getControllerKeyPair:(id*)arg1 username:(id*)arg2 error:(id*)arg3;
- (BOOL)getControllerPublicKey:(id*)arg1 secretKey:(id*)arg2 keyPair:(id*)arg3 username:(id*)arg4 allowCreation:(BOOL)arg5 error:(id*)arg6;
- (BOOL)getControllerPublicKey:(id*)arg1 secretKey:(id*)arg2 username:(id*)arg3 allowCreation:(BOOL)arg4 error:(id*)arg5;
- (BOOL)getCurrentiCloudIdentifier:(id*)arg1 controllerPairingIdentifier:(id*)arg2 error:(id*)arg3;
- (BOOL)getMetadataSecretKey:(id*)arg1 error:(id*)arg2;
- (id)getPeripherialIdentifiersAndAccessoryNames;
- (id)queue;
- (id)readPeripheralIdentifierForAccessoryName:(id)arg1 protocolVersion:(unsigned int*)arg2 error:(id*)arg3;
- (id)readPublicKeyForAccessoryName:(id)arg1 registeredWithHomeKit:(BOOL*)arg2 error:(id*)arg3;
- (BOOL)registerAccessoryWithHomeKit:(id)arg1 error:(id*)arg2;
- (BOOL)removeAccessoryKeyForName:(id)arg1 error:(id*)arg2;
- (BOOL)removeAllAccessoryKeys:(id*)arg1;
- (BOOL)removeControllerKeyPairForIdentifier:(id)arg1 leaveTombstone:(BOOL)arg2 error:(id*)arg3;
- (BOOL)removeControllerKeyPairWithError:(id*)arg1;
- (BOOL)saveKeyPair:(id)arg1 username:(id)arg2 syncable:(BOOL)arg3 error:(id*)arg4;
- (BOOL)savePeripheralIdentifier:(id)arg1 forAccessoryName:(id)arg2 protocolVersion:(unsigned int)arg3 error:(id*)arg4;
- (BOOL)savePublicKey:(id)arg1 forAccessoryName:(id)arg2 error:(id*)arg3;
- (void)setActiveControllerIdentifier:(id)arg1;
- (void)setQueue:(id)arg1;
- (BOOL)updateActiveControllerPairingIdentifier:(id)arg1;
- (BOOL)updateCurrentiCloudIdentifier:(id)arg1 controllerPairingIdentifier:(id)arg2 error:(id*)arg3;
- (BOOL)updatePeripheralIdentifier:(id)arg1 forAccessoryName:(id)arg2 protocolVersion:(unsigned int)arg3 error:(id*)arg4;

@end
