/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
 */

@interface BCCloudKitController : NSObject <BDSCloudKitSupportSignOutDeleteWithoutInstance> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    BDSCoalescingCallBlock * _coalescedAttachment;
    <BCContainerConfiguration> * _configuration;
    CKContainer * _container;
    bool  _didChangeContainer;
    bool  _enableCloudSync;
    bool  _gettingAccountInfo;
    BCCloudKitDatabaseController * _privateCloudDatabaseController;
    bool  _serviceMode;
    BCCloudKitTransactionManager * _transactionManager;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *accessQueue;
@property (nonatomic, retain) BDSCoalescingCallBlock *coalescedAttachment;
@property (nonatomic, retain) <BCContainerConfiguration> *configuration;
@property (nonatomic, retain) CKContainer *container;
@property (nonatomic) bool didChangeContainer;
@property (nonatomic) bool enableCloudSync;
@property (nonatomic) bool gettingAccountInfo;
@property (retain) BCCloudKitDatabaseController *privateCloudDatabaseController;
@property (nonatomic) bool serviceMode;
@property (nonatomic, retain) BCCloudKitTransactionManager *transactionManager;

+ (id)databaseFolderURLForConfiguration:(id)arg1;
+ (void)deleteCloudDataWithCompletion:(id /* block */)arg1;
+ (id)p_createDatabaseArchiveDirectoryForConfiguration:(id)arg1;
+ (id)p_privateDatabaseArchiveURLForConfiguration:(id)arg1;
+ (void)registerForSecureNotifications;
+ (id)secureSharedInstance;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)accessQueue;
- (void)applicationDidBecomeActive;
- (id)coalescedAttachment;
- (id)configuration;
- (id)container;
- (bool)didChangeContainer;
- (bool)enableCloudSync;
- (bool)gettingAccountInfo;
- (void)handleRemoteNotification:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (void)p_accountChanged:(id)arg1;
- (void)p_getAccountInfo;
- (void)p_getNecessaryAccountInfoFromContainer:(id)arg1 completion:(id /* block */)arg2;
- (void)p_identityChanged:(id)arg1;
- (void)p_internetReachabilityChanged:(id)arg1;
- (void)p_updateAttachment;
- (id)privateCloudDatabaseController;
- (bool)serviceMode;
- (void)setAccessQueue:(id)arg1;
- (void)setCoalescedAttachment:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setContainer:(id)arg1;
- (void)setDidChangeContainer:(bool)arg1;
- (void)setEnableCloudSync:(bool)arg1;
- (void)setEnableCloudSync:(bool)arg1 serviceMode:(bool)arg2;
- (void)setGettingAccountInfo:(bool)arg1;
- (void)setPrivateCloudDatabaseController:(id)arg1;
- (void)setServiceMode:(bool)arg1;
- (void)setTransactionManager:(id)arg1;
- (id)transactionManager;

@end
