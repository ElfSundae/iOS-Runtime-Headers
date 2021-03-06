/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface CDDCloudKitRegistrationMessage : CDDCloudKitMessage {
    NSString * _bundleIdentifier;
    NSString * _containerIdentifier;
    NSString * _storeConfigurationName;
    NSFileHandle * _storeFileHandle;
    NSString * _storeFileProtectionClass;
    NSString * _storePath;
    NSString * _storeType;
}

@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSString *containerIdentifier;
@property (nonatomic, readonly) NSString *storeConfigurationName;
@property (nonatomic, readonly) NSFileHandle *storeFileHandle;
@property (nonatomic, readonly) NSString *storeFileProtectionClass;
@property (nonatomic, readonly) NSString *storePath;
@property (nonatomic, readonly) NSString *storeType;

+ (bool)supportsSecureCoding;

- (id)bundleIdentifier;
- (id)containerIdentifier;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileHandle:(id)arg1 forStoreWithDescription:(id)arg2 andBundleIdentifier:(id)arg3;
- (id)storeConfigurationName;
- (id)storeFileHandle;
- (id)storeFileProtectionClass;
- (id)storePath;
- (id)storeType;

@end
