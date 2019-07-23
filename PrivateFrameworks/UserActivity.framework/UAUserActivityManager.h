/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
 */

@interface UAUserActivityManager : NSObject <UAUserActivityClientResponseProtocol> {
    NSMapTable * _activeUserActivitiesByUUID;
    NSUUID * _activeUserActivityUUID;
    bool  _activityContinuationIsEnabled;
    NSXPCConnection * _connection;
    bool  _connectionInitializationSucceeded;
    bool  _needToSendInitialMessage;
    bool  _registeredForAppResignationMessages;
    NSObject<OS_dispatch_queue> * _serverQ;
    bool  _supportsActivityContinuation;
    NSMapTable * _userActivitiesByUUID;
    NSMutableSet * _userActivityUUIDsSendToServer;
}

@property (retain) NSMapTable *activeUserActivitiesByUUID;
@property (copy) NSUUID *activeUserActivityUUID;
@property (readonly) bool activityContinuationIsEnabled;
@property (readonly) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool needToSendInitialMessage;
@property bool registeredForAppResignationMessages;
@property (readonly) NSObject<OS_dispatch_queue> *serverQ;
@property (readonly) Class superclass;
@property (readonly) bool supportsActivityContinuation;
@property (retain) NSMapTable *userActivitiesByUUID;
@property (readonly, copy) NSSet *userActivityUUIDsSendToServer;

+ (id)_determineMatchingApplicationBundleIdentfierWithOptionsForActivityType:(id)arg1 dynamicType:(id)arg2 kind:(unsigned long long)arg3 teamIdentifier:(id)arg4;
+ (id)defaultManager;
+ (bool)dontConnectToServer;
+ (bool)shouldSupportActivityContinuation;
+ (bool)userActivityContinuationSupported;

- (void).cxx_destruct;
- (id)activeActivitiesByPriority;
- (id)activeUserActivitiesByUUID;
- (id)activeUserActivityUUID;
- (id)activities;
- (bool)activityContinuationIsEnabled;
- (void)addDynamicUserActivity:(id)arg1 matching:(id)arg2;
- (void)addUserActivity:(id)arg1;
- (void)askClientUserActivityToSave:(id)arg1;
- (void)askClientUserActivityToSave:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)connection;
- (void)connectionInterrupted;
- (id)createByDecodingUserActivity:(id)arg1;
- (bool)currentUserActivityUUIDWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)dealloc;
- (bool)determineIfUserActivityIsCurrent:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)didReceiveInputStreamWithUUID:(id)arg1 inputStream:(id)arg2 outputStream:(id)arg3;
- (id)encodeUserActivity:(id)arg1;
- (id)fetchUUID:(id)arg1 intervalToWaitForDocumentSynchonization:(double)arg2 withCompletionHandler:(id /* block */)arg3;
- (bool)hasUserActivityWithUUID:(id)arg1;
- (id)init;
- (id)initWithConnection:(id)arg1;
- (void)makeActive:(id)arg1;
- (void)makeInactive:(id)arg1;
- (void)markUserActivityAsDirty:(id)arg1 forceImmediate:(bool)arg2;
- (bool)needToSendInitialMessage;
- (void)pinUserActivity:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (bool)registerAsProxyForApplication:(int)arg1 options:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)registerForApplicationDeactivateIfNecessary;
- (bool)registeredForAppResignationMessages;
- (void)removeDynamicUserActivity:(id)arg1 matching:(id)arg2;
- (void)removeUserActivity:(id)arg1;
- (void)sendCurrentActivityToIndexer:(id)arg1;
- (void)sendInitialMessage:(bool)arg1;
- (void)sendToIndexerIfAppropriate:(id)arg1 force:(bool)arg2;
- (void)sendUserActivityInfoToLSUserActivityd:(id)arg1 makeCurrent:(bool)arg2;
- (id)serverQ;
- (void)setActiveUserActivitiesByUUID:(id)arg1;
- (void)setActiveUserActivityUUID:(id)arg1;
- (void)setNeedToSendInitialMessage:(bool)arg1;
- (void)setRegisteredForAppResignationMessages:(bool)arg1;
- (void)setUserActivitiesByUUID:(id)arg1;
- (bool)supportsActivityContinuation;
- (void)tellClientDebuggingEnabled:(bool)arg1 logFileHandle:(id)arg2;
- (void)tellClientUserActivityItWasResumed:(id)arg1;
- (void)tellDaemonAboutNewLSUserActivity:(id)arg1;
- (id)userActivitiesByUUID;
- (id)userActivityForUUID:(id)arg1;
- (bool)userActivityIsActive:(id)arg1;
- (id)userActivityUUIDsSendToServer;

@end
