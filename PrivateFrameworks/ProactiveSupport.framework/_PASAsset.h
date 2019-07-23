/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

@interface _PASAsset : NSObject {
    ASAsset * _bestAvailableAsset;
    unsigned int  _bestAvailableVersion;
    NSString * _bundleIdentifier;
    unsigned int  _compatibilityVersion;
    NSString * _defaultBundlePath;
    unsigned int  _defaultBundleVersion;
    double  _delay;
    int  _installNotificationToken;
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    }  _lock;
    int  _metadataNotificationToken;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    NSDictionary * _requiredMobileAssetProperties;
    _PASNotificationTracker * _updateNotificationTracker;
}

@property (nonatomic, readonly) NSString *assetType;
@property (nonatomic, readonly) unsigned int assetVersion;
@property (nonatomic, readonly) unsigned int compatibilityVersion;

- (void).cxx_destruct;
- (id)_assetDescription;
- (void)_downloadInitialAssetMetadata;
- (id)_initWithBundleIdentifier:(id)arg1 defaultBundlePath:(id)arg2 compatibilityVersion:(unsigned int)arg3 matchingKeysAndValues:(id)arg4 notificationQueue:(id)arg5;
- (void)_issueUpdateNotifications;
- (void)_loadDefaultBundleVersion;
- (void)_updateAssetMetadata;
- (id)assetType;
- (unsigned int)assetVersion;
- (unsigned int)compatibilityVersion;
- (void)dealloc;
- (BOOL)deregisterUpdateHandlerAsyncWithToken:(id)arg1;
- (BOOL)deregisterUpdateHandlerWithToken:(id)arg1;
- (id)initWithAssetTypeDescriptorPath:(id)arg1 defaultBundlePath:(id)arg2 matchingKeysAndValues:(id)arg3 notificationQueue:(id)arg4;
- (id)pathForResourceWithName:(id)arg1 extension:(id)arg2 assetVersion:(unsigned int*)arg3;
- (id)pathsForResourcesWithNames:(id)arg1 assetVersion:(unsigned int*)arg2;
- (id)registerUpdateHandler:(id /* block */)arg1;

@end
