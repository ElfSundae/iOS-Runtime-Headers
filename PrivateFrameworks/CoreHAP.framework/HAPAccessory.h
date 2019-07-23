/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPAccessory : NSObject {
    NSNumber * _category;
    <HAPAccessoryDelegate> * _delegate;
    NSString * _firmwareVersion;
    NSString * _identifier;
    NSNumber * _instanceID;
    int  _linkType;
    NSString * _manufacturer;
    NSString * _model;
    NSString * _name;
    BOOL  _primary;
    BOOL  _reachable;
    NSString * _serialNumber;
    HAPAccessoryServer * _server;
    NSString * _serverIdentifier;
    NSArray * _services;
    BOOL  _supportsBridgeConfiguration;
    BOOL  _supportsRelay;
    NSString * _uniqueIdentifier;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, copy) NSNumber *category;
@property (nonatomic) <HAPAccessoryDelegate> *delegate;
@property (nonatomic, copy) NSString *firmwareVersion;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSNumber *instanceID;
@property (nonatomic, readonly) int linkType;
@property (nonatomic, copy) NSString *manufacturer;
@property (nonatomic, copy) NSString *model;
@property (nonatomic, copy) NSString *name;
@property (getter=isPaired, nonatomic, readonly) BOOL paired;
@property (getter=isPrimary, nonatomic) BOOL primary;
@property (getter=isReachable, nonatomic) BOOL reachable;
@property (nonatomic, copy) NSString *serialNumber;
@property (nonatomic) HAPAccessoryServer *server;
@property (nonatomic, copy) NSString *serverIdentifier;
@property (nonatomic, retain) NSArray *services;
@property (nonatomic) BOOL supportsBridgeConfiguration;
@property (nonatomic) BOOL supportsRelay;
@property (nonatomic, copy) NSString *uniqueIdentifier;
@property (retain) NSObject<OS_dispatch_queue> *workQueue;

+ (id)instanceIDForUniqueIdentifier:(id)arg1;
+ (BOOL)isAccessoryPairedWithIdentifier:(id)arg1;
+ (BOOL)isAccessoryPrimaryWithUniqueIdentifier:(id)arg1;
+ (id)serverIdentifierWithUniqueIdentifier:(id)arg1;

- (void).cxx_destruct;
- (BOOL)_isReachable;
- (void)_setCategory:(id)arg1;
- (void)_setReachable:(BOOL)arg1;
- (void)_setSupportsBridgeConfiguration:(BOOL)arg1;
- (BOOL)_supportsBridgeConfiguration;
- (BOOL)_updateAndValidateServices;
- (BOOL)_updateForAccessoryInformationService;
- (BOOL)_updateService:(id)arg1;
- (id)category;
- (id)characteristicOfType:(id)arg1 serviceType:(id)arg2;
- (id)characteristicsOfType:(id)arg1;
- (id)delegate;
- (id)description;
- (id)firmwareVersion;
- (id)identifier;
- (id)init;
- (id)initWithServer:(id)arg1 instanceID:(id)arg2;
- (id)initWithServer:(id)arg1 instanceID:(id)arg2 parsedServices:(id)arg3;
- (id)instanceID;
- (void)invalidate;
- (BOOL)isPaired;
- (BOOL)isPrimary;
- (BOOL)isReachable;
- (int)linkType;
- (id)manufacturer;
- (id)model;
- (id)name;
- (void)readCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)readValueForCharacteristic:(id)arg1 queue:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)serialNumber;
- (id)server;
- (id)serverIdentifier;
- (id)services;
- (id)servicesOfType:(id)arg1;
- (void)setCategory:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFirmwareVersion:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInstanceID:(id)arg1;
- (void)setManufacturer:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPrimary:(BOOL)arg1;
- (void)setReachable:(BOOL)arg1;
- (void)setSerialNumber:(id)arg1;
- (void)setServer:(id)arg1;
- (void)setServerIdentifier:(id)arg1;
- (void)setServices:(id)arg1;
- (void)setSupportsBridgeConfiguration:(BOOL)arg1;
- (void)setSupportsRelay:(BOOL)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (BOOL)supportsBridgeConfiguration;
- (BOOL)supportsRelay;
- (id)uniqueIdentifier;
- (BOOL)validateCharacteristicValues:(id*)arg1;
- (id)workQueue;
- (void)writeCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)writeValue:(id)arg1 forCharacteristic:(id)arg2 authorizationData:(id)arg3 queue:(id)arg4 completionHandler:(id /* block */)arg5;

@end
