/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iAdDeveloper.framework/iAdDeveloper
 */

@interface ADEmbeddedAdServer : NSObject <HTSHTTPServerDelegate> {
    NSArray * _adManifests;
    NSString * _adPath;
    BOOL  _alwaysRegenerateWebArchives;
    NSMutableDictionary * _authTokens;
    NSDictionary * _defaultAdData;
    BOOL  _defaultsToNoQualifiedAds;
    <ADEmbeddedAdServerDelegate> * _delegate;
    NSString * _publicURLRoot;
    HTSHTTPServer * _server;
    struct __FSEventStream { } * _stream;
}

@property (nonatomic, retain) NSArray *adManifests;
@property (nonatomic, copy) NSString *adPath;
@property (nonatomic) BOOL alwaysRegenerateWebArchives;
@property (nonatomic) double bandwidthStddev;
@property (nonatomic) int cacheMaxAge;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSDictionary *defaultAdData;
@property (nonatomic) BOOL defaultsToNoQualifiedAds;
@property (nonatomic) <ADEmbeddedAdServerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL digestAuthenticationEnabled;
@property (readonly) unsigned int hash;
@property (nonatomic) double kbps;
@property (nonatomic) double latency;
@property (nonatomic) double latencyStddev;
@property (nonatomic) BOOL pipeliningEnabled;
@property (nonatomic, readonly) unsigned short port;
@property (nonatomic, copy) NSString *publicURLRoot;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long totalBytesWritten;
@property (nonatomic, readonly) NSString *urlString;

+ (id)accessibilityDescriptionForAccessibilityKey:(id)arg1;
+ (BOOL)adBundleAtURL:(id)arg1 matchesRequest:(id)arg2;
+ (int)creativeTypeForPlistType:(id)arg1;
+ (BOOL)creativeTypeMatches:(id)arg1 type:(int)arg2 creativeType:(id)arg3;
+ (id)creativesForAdBundleAtURL:(id)arg1 matchingRequest:(id)arg2;
+ (id)iAdDeviceModelForDeviceModel:(id)arg1;
+ (id)manifestForAdAtURL:(id)arg1;
+ (id)supportedDevicesForAdProperties:(id)arg1;

- (id)_actionDictionaryFromProperties:(id)arg1 path:(id)arg2 error:(id*)arg3;
- (id)_adDataForPath:(id)arg1 creative:(id)arg2 error:(id*)arg3;
- (id)_defaultResponseForBatchRequest:(id)arg1;
- (id)_handleAdSlotRequest:(id)arg1 message:(id)arg2;
- (id)_handleBatchRequest:(id)arg1 message:(id)arg2;
- (id)_handleConfigurationRequest:(id)arg1 message:(id)arg2;
- (id)_handleGenericAnalyticsRequest:(id)arg1 message:(id)arg2 type:(int)arg3;
- (id)_handleGenericPostRequest:(id)arg1;
- (id)_handleHeartbeatTokenRequest:(id)arg1 message:(id)arg2;
- (id)_handleListeningPresenceEventsRequest:(id)arg1 message:(id)arg2;
- (id)_handleLogAdContentErrorRequest:(id)arg1 message:(id)arg2;
- (id)_handleLogAdEventRequest:(id)arg1 message:(id)arg2;
- (id)_handleLogAggregateMetricsRequest:(id)arg1 message:(id)arg2;
- (id)_handleLogImpressionRequest:(id)arg1 message:(id)arg2;
- (id)_handleLogStationClientEventRequest:(id)arg1 message:(id)arg2;
- (id)_handleLogSysEventRequest:(id)arg1 message:(id)arg2;
- (id)_handleLogTileImpressionEventRequest:(id)arg1 message:(id)arg2;
- (id)_handleManifestRequest:(id)arg1 message:(id)arg2;
- (id)_handleMescalSignSAPSetupCertificateRequest:(id)arg1 message:(id)arg2;
- (id)_handleMescalSignSAPSetupRequest:(id)arg1 message:(id)arg2;
- (id)_handleOptOutRequest:(id)arg1 message:(id)arg2;
- (id)_handlePostRequest:(id)arg1;
- (id)_handleRewardRequest:(id)arg1 message:(id)arg2;
- (id)_handleRewardsCodeResultRequest:(id)arg1 message:(id)arg2;
- (id)_handleSegmentUpdateRequest:(id)arg1 message:(id)arg2;
- (id)_handleServerErrorRequest:(id)arg1 message:(id)arg2;
- (id)_handleUserTargetingRequest:(id)arg1 message:(id)arg2;
- (id)_integerColorFromStringColor:(id)arg1;
- (id)_mimeTypeForExtension:(id)arg1;
- (BOOL)_tryAddingAdTagContentStringForCreative:(id)arg1 toAdReponse:(id)arg2 withAdPath:(id)arg3;
- (id)_webArchiveFilenameForDirectory:(id)arg1 withBaseURL:(id)arg2;
- (id)_webResourceForPath:(id)arg1 url:(id)arg2;
- (id)_webResourcesInDirectory:(id)arg1 baseURL:(id)arg2;
- (id)adDataForAdBundleAtPath:(id)arg1 creative:(id)arg2 allowWebArchive:(BOOL)arg3;
- (id)adManifests;
- (id)adPath;
- (BOOL)alwaysRegenerateWebArchives;
- (double)bandwidthStddev;
- (int)cacheMaxAge;
- (void)dealloc;
- (id)defaultAdData;
- (BOOL)defaultsToNoQualifiedAds;
- (id)delegate;
- (BOOL)digestAuthenticationEnabled;
- (void)httpServer:(id)arg1 closedConnection:(id)arg2;
- (void)httpServer:(id)arg1 closedConnection:(id)arg2 withError:(id)arg3;
- (void)httpServer:(id)arg1 connection:(id)arg2 blockedSandboxViolation:(id)arg3;
- (void)httpServer:(id)arg1 connection:(id)arg2 droppedResponseToRequestBeforeClosing:(id)arg3;
- (void)httpServer:(id)arg1 connection:(id)arg2 enqueuedResponseToRequest:(id)arg3 statusCode:(int)arg4 length:(unsigned int)arg5;
- (void)httpServer:(id)arg1 connection:(id)arg2 wroteBytes:(unsigned int)arg3 andCompletedResponseToRequest:(id)arg4;
- (void)httpServer:(id)arg1 connection:(id)arg2 wroteBytes:(unsigned int)arg3 forResponseToRequest:(id)arg4 remaining:(unsigned int)arg5;
- (void)httpServer:(id)arg1 dataForRequest:(id)arg2 resolvedPath:(id)arg3 handler:(id /* block */)arg4;
- (void)httpServer:(id)arg1 logMessage:(id)arg2;
- (id)httpServer:(id)arg1 proposedResponse:(id)arg2;
- (void)httpServer:(id)arg1 receivedConnection:(id)arg2;
- (id)httpServer:(id)arg1 rewritePath:(id)arg2;
- (BOOL)httpServer:(id)arg1 shouldAllowRequest:(id)arg2 withAuthorization:(id)arg3;
- (id)httpServer:(id)arg1 unhandledRequest:(id)arg2;
- (void)httpServerListenSocketFailed:(id)arg1;
- (id)init;
- (id)initWithPort:(unsigned short)arg1 adPath:(id)arg2;
- (double)kbps;
- (double)latency;
- (double)latencyStddev;
- (BOOL)pipeliningEnabled;
- (unsigned short)port;
- (id)publicURLRoot;
- (void)resetNetworkSetup;
- (void)setAdManifests:(id)arg1;
- (void)setAdPath:(id)arg1;
- (void)setAlwaysRegenerateWebArchives:(BOOL)arg1;
- (void)setBandwidthStddev:(double)arg1;
- (void)setCacheMaxAge:(int)arg1;
- (void)setDefaultAdData:(id)arg1;
- (void)setDefaultsToNoQualifiedAds:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDigestAuthenticationEnabled:(BOOL)arg1;
- (void)setKbps:(double)arg1;
- (void)setLatency:(double)arg1;
- (void)setLatencyStddev:(double)arg1;
- (void)setPipeliningEnabled:(BOOL)arg1;
- (void)setPublicURLRoot:(id)arg1;
- (unsigned long long)totalBytesWritten;
- (id)urlString;
- (id)webArchiveForDirectory:(id)arg1 withBaseURL:(id)arg2;

@end
