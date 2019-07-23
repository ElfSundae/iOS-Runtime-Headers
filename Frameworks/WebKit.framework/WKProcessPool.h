/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKProcessPool : NSObject <NSSecureCoding, WKObject> {
    /* Warning: unhandled struct encoding: '{WeakObjCPtr<id<_WKAutomationDelegate> >="m_weakReference"@}' */ struct WeakObjCPtr<id<_WKAutomationDelegate> > { 
        id m_weakReference; 
    }  _automationDelegate;
    struct RetainPtr<_WKAutomationSession> { 
        void *m_ptr; 
    }  _automationSession;
    struct RetainPtr<id<_WKGeolocationCoreLocationProvider> > { 
        void *m_ptr; 
    }  _coreLocationProvider;
    /* Warning: unhandled struct encoding: '{WeakObjCPtr<id<_WKDownloadDelegate> >="m_weakReference"@}' */ struct WeakObjCPtr<id<_WKDownloadDelegate> > { 
        id m_weakReference; 
    }  _downloadDelegate;
    struct RetainPtr<WKGeolocationProviderIOS> { 
        void *m_ptr; 
    }  _geolocationProvider;
    struct ObjectStorage<WebKit::WebProcessPool> { 
        struct type { 
            unsigned char __lx[1352]; 
        } data; 
    }  _processPool;
}

@property (readonly) /* Warning: unhandled struct encoding: '{Object=^^?@}' */ struct Object { int (**x1)(); id x2; }*_apiObject;
@property (setter=_setAutomationDelegate:, nonatomic) <_WKAutomationDelegate> *_automationDelegate;
@property (nonatomic, readonly) _WKProcessPoolConfiguration *_configuration;
@property (getter=_isCookieStoragePartitioningEnabled, setter=_setCookieStoragePartitioningEnabled:, nonatomic) bool _cookieStoragePartitioningEnabled;
@property (setter=_setCoreLocationProvider:, nonatomic) <_WKGeolocationCoreLocationProvider> *_coreLocationProvider;
@property (setter=_setDownloadDelegate:, nonatomic) <_WKDownloadDelegate> *_downloadDelegate;
@property (readonly) WKGeolocationProviderIOS *_geolocationProvider;
@property (getter=_isStorageAccessAPIEnabled, setter=_setStorageAccessAPIEnabled:, nonatomic) bool _storageAccessAPIEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/WebKit.framework/WebKit

+ (void)_forceGameControllerFramework;
+ (id)_sharedProcessPool;
+ (id)_websiteDataURLForContainerWithURL:(id)arg1;
+ (id)_websiteDataURLForContainerWithURL:(id)arg1 bundleIdentifierIfNotInContainer:(id)arg2;
+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (/* Warning: unhandled struct encoding: '{Object=^^?@}' */ struct Object { int (**x1)(); id x2; }*)_apiObject;
- (void)_automationCapabilitiesDidChange;
- (id)_automationDelegate;
- (id)_configuration;
- (id)_coreLocationProvider;
- (id)_downloadDelegate;
- (id)_geolocationProvider;
- (id)_initWithConfiguration:(id)arg1;
- (bool)_isCookieStoragePartitioningEnabled;
- (bool)_isStorageAccessAPIEnabled;
- (int)_networkProcessIdentifier;
- (id)_objectForBundleParameter:(id)arg1;
- (unsigned long long)_pluginProcessCount;
- (void)_preconnectToServer:(id)arg1;
- (void)_registerURLSchemeServiceWorkersCanHandle:(id)arg1;
- (void)_setAllowsAnySSLCertificateForServiceWorker:(bool)arg1;
- (void)_setAllowsSpecificHTTPSCertificate:(id)arg1 forHost:(id)arg2;
- (void)_setAutomationDelegate:(id)arg1;
- (void)_setAutomationSession:(id)arg1;
- (void)_setCanHandleHTTPSServerTrustEvaluation:(bool)arg1;
- (void)_setCookieAcceptPolicy:(unsigned long long)arg1;
- (void)_setCookieStoragePartitioningEnabled:(bool)arg1;
- (void)_setCoreLocationProvider:(id)arg1;
- (void)_setDownloadDelegate:(id)arg1;
- (void)_setMaximumNumberOfProcesses:(unsigned long long)arg1;
- (void)_setObject:(id)arg1 forBundleParameter:(id)arg2;
- (void)_setObjectsForBundleParametersWithDictionary:(id)arg1;
- (void)_setStorageAccessAPIEnabled:(bool)arg1;
- (int)_storageProcessIdentifier;
- (void)_syncNetworkProcessCookies;
- (void)_terminateNetworkProcess;
- (void)_terminateServiceWorkerProcess;
- (void)_terminateStorageProcess;
- (void)_warmInitialProcess;
- (unsigned long long)_webPageContentProcessCount;
- (unsigned long long)_webProcessCount;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

// Image: /System/Library/Frameworks/iAd.framework/iAd

+ (id)_createProcessPoolWithPriority:(bool)arg1 video:(bool)arg2;
+ (id)advertisingProcessPool:(bool)arg1;
+ (id)advertisingProcessPoolForVideo:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/Silex.framework/Silex

+ (id)embedProcessPool;

@end
