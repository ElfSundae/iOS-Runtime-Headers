/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMCharacteristic : NSObject <HFStateDumpBuildable, HMObjectMerge, NSSecureCoding> {
    NSString * _characteristicType;
    _HMContext * _context;
    bool  _hasAuthorizationData;
    NSNumber * _instanceID;
    HMFUnfairLock * _lock;
    HMCharacteristicMetadata * _metadata;
    bool  _notificationEnabled;
    bool  _notificationEnabledByThisClient;
    NSDate * _notificationEnabledTime;
    NSArray * _properties;
    bool  _requiresDeviceUnlock;
    HMService * _service;
    NSUUID * _uniqueIdentifier;
    id  _value;
    NSDate * _valueUpdatedTime;
}

@property (nonatomic, copy) NSString *characteristicType;
@property (nonatomic, retain) _HMContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property bool hasAuthorizationData;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSNumber *instanceID;
@property (nonatomic, readonly, copy) NSString *localizedDescription;
@property (nonatomic, readonly) HMCharacteristicMetadata *metadata;
@property (getter=isNotificationEnabled, nonatomic) bool notificationEnabled;
@property (nonatomic) bool notificationEnabledByThisClient;
@property (nonatomic, copy) NSDate *notificationEnabledTime;
@property (nonatomic, copy) NSArray *properties;
@property (nonatomic) bool requiresDeviceUnlock;
@property (nonatomic) HMService *service;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSUUID *uniqueIdentifier;
@property (nonatomic, copy) id value;
@property (nonatomic, copy) NSDate *valueUpdatedTime;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (id)__localizedDescriptionForCharacteristicType:(id)arg1;
+ (id)_characteristicTypeAsString:(id)arg1;
+ (id)localizedDescriptionForCharacteristicType:(id)arg1;
+ (id)logCategory;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)__configureWithContext:(id)arg1 service:(id)arg2;
- (id)_characteristicTypeDescription;
- (void)_enableNotification:(bool)arg1 completionHandler:(id /* block */)arg2;
- (bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)_readValueWithCompletionHandler:(id /* block */)arg1;
- (void)_updateAuthorizationData:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_updateValue:(id)arg1 updateTime:(id)arg2;
- (void)_writeValue:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)characteristicType;
- (id)context;
- (void)enableNotification:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasAuthorizationData;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)instanceID;
- (bool)isEqual:(id)arg1;
- (bool)isNotificationEnabled;
- (id)localizedDescription;
- (id)logIdentifier;
- (id)mapHAPProperties:(long long)arg1;
- (id)metadata;
- (bool)notificationEnabledByThisClient;
- (id)notificationEnabledTime;
- (id)properties;
- (void)readValueWithCompletionHandler:(id /* block */)arg1;
- (bool)requiresDeviceUnlock;
- (id)service;
- (void)setCharacteristicType:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setHasAuthorizationData:(bool)arg1;
- (void)setNotificationEnabled:(bool)arg1;
- (void)setNotificationEnabledByThisClient:(bool)arg1;
- (void)setNotificationEnabledTime:(id)arg1;
- (void)setProperties:(id)arg1;
- (void)setRequiresDeviceUnlock:(bool)arg1;
- (void)setService:(id)arg1;
- (void)setValue:(id)arg1;
- (void)setValueUpdateTime:(id)arg1;
- (void)setValueUpdatedTime:(id)arg1;
- (id)uniqueIdentifier;
- (void)updateAuthorizationData:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)value;
- (id)valueUpdatedTime;
- (void)writeValue:(id)arg1 completionHandler:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

+ (id)_hf_alarmCharacteristicTypeToAbnormalValueMap;
+ (id)hf_abnormalValueForAlarmCharacteristicType:(id)arg1;
+ (id)hf_alarmCharacteristicTypes;
+ (id)hf_associatedCharacteristicTypeForCharacteristicType:(id)arg1;
+ (id /* block */)hf_characteristicSortComparator;
+ (id)hf_currentStateCharacteristicTypeForTargetStateCharacteristicType:(id)arg1;
+ (id)hf_descriptionForCharacteristicType:(id)arg1;
+ (id)hf_descriptionForProperties:(id)arg1;
+ (id)hf_powerStateCharacteristicTypes;
+ (bool)hf_shouldCaptureCharacteristicTypeInActionSets:(id)arg1;
+ (long long)hf_sortPriorityForCharacteristicType:(id)arg1;
+ (id)hf_targetStateCharacteristicTypeForCurrentStateCharacteristicType:(id)arg1;

- (id)hf_associatedCharacteristicType;
- (id)hf_characteristicTypeDescription;
- (id)hf_defaultValue;
- (id)hf_designatedEventTriggerForProgrammableSwitchWithTriggerValue:(id)arg1;
- (id)hf_eventTriggers;
- (id)hf_eventTriggersForTriggerValue:(id)arg1;
- (id)hf_home;
- (bool)hf_isReadable;
- (bool)hf_isWritable;
- (id)hf_programmableSwitchTriggerValueToEventTriggersMap;
- (id)hf_programmableSwitchValidValueSet;
- (bool)hf_shouldCaptureInActionSets;
- (long long)hf_sortPriority;
- (id)hf_stateDumpBuilderWithContext:(id)arg1;

@end
