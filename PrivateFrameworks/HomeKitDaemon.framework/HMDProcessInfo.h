/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDProcessInfo : NSObject {
    HMDApplicationInfo *_appInfo;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSHashTable *_connectionProxies;
    int _pid;
    unsigned int _state;
    BOOL _viewService;
}

@property (nonatomic, readonly) HMDApplicationInfo *appInfo;
@property (getter=isBackgrounded, nonatomic, readonly) BOOL background;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic, readonly) NSHashTable *connectionProxies;
@property (getter=isForegrounded, nonatomic, readonly) BOOL foreground;
@property (nonatomic, readonly) int pid;
@property (nonatomic, readonly) unsigned int proxyCount;
@property (nonatomic) unsigned int state;
@property (getter=isSuspended, nonatomic, readonly) BOOL suspended;
@property (getter=isViewService, nonatomic, readonly) BOOL viewService;

- (void).cxx_destruct;
- (void)activate;
- (id)activeRequestIdentifiers;
- (void)addConnectionProxy:(id)arg1;
- (id)appInfo;
- (id)clientQueue;
- (id)connectionProxies;
- (void)deactivate;
- (id)description;
- (id)init;
- (id)initWithConnectionProxy:(id)arg1 application:(id)arg2 processId:(int)arg3;
- (void)initiateRefresh;
- (BOOL)isBackgrounded;
- (BOOL)isForegrounded;
- (BOOL)isSuspended;
- (BOOL)isViewService;
- (int)pid;
- (unsigned int)proxyCount;
- (void)removeConnectionProxy:(id)arg1;
- (void)setState:(unsigned int)arg1;
- (unsigned int)state;

@end
