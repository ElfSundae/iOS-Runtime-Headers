/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDClientConnection : NSObject <CKXPCDaemon> {
    CKDClientProxy * _proxy;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) CKDClientProxy *proxy;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addProxyOperationWithInfo:(id)arg1 withBlock:(id /* block */)arg2 longlivedProxyPreparationBlock:(id /* block */)arg3;
- (void)_handlePerformDaemonCallWithOperationInfo:(id)arg1 completionBlock:(id /* block */)arg2 forwardingBlock:(id /* block */)arg3;
- (void)accountChangedWithID:(id)arg1;
- (void)accountStatusWithSetupInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)accountsDidGrantAccessToBundleID:(id)arg1 containerIdentifiers:(id)arg2;
- (void)accountsDidRevokeAccessToBundleID:(id)arg1 containerIdentifiers:(id)arg2;
- (void)accountsWillDeleteAccount:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)cancelOperationWithIdentifier:(id)arg1;
- (void)clearAssetCacheWithSetupInfo:(id)arg1 databaseScope:(int)arg2 completionHandler:(id /* block */)arg3;
- (void)clearAuthTokensWithSetupInfo:(id)arg1 recordID:(id)arg2 databaseScope:(int)arg3;
- (void)clearCachesForRecordWithSetupInfo:(id)arg1 recordID:(id)arg2 databaseScope:(int)arg3 completionHandler:(id /* block */)arg4;
- (void)clearCachesForZoneWithSetupInfo:(id)arg1 zoneID:(id)arg2 databaseScope:(int)arg3 completionHandler:(id /* block */)arg4;
- (void)clearCachesWithSetupInfo:(id)arg1 options:(unsigned int)arg2 databaseScope:(int)arg3 completionHandler:(id /* block */)arg4;
- (void)clearContextFromMetadataCache;
- (void)clearRecordCacheWithSetupInfo:(id)arg1 databaseScope:(int)arg2;
- (void)currentDeviceIDWithSetupInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)currentUserIDWithSetupInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)dataclassEnabled:(id)arg1 withSetupInfo:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)decryptPersonalInfoOnShare:(id)arg1 setupInfo:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)dumpAllClientsStatusReportToFileHandle:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)dumpDaemonStatusReportToFileHandle:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchAllLongLivedOperationIDsWithSetupInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchLongLivedOperationsWithIDs:(id)arg1 setupInfo:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)fullNameAndPrimaryEmailOnAccountWithSetupInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getBehaviorOptionForKey:(id)arg1 isContainerOption:(BOOL)arg2 completionHandler:(id /* block */)arg3;
- (void)getNewWebSharingIdentityWithSetupInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getPCSDiagnosticsForZonesWithSetupInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getSandboxExtensionsWithSetupInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithConnection:(id)arg1;
- (void)performAcceptSharesOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performAggregateZonePCSOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performCodeFunctionInvokeOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performCompleteParticipantVettingOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performDiscoverAllIdentitiesOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performDiscoverUserIdentitiesOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performFetchDatabaseChangesOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performFetchNotificationChangesOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performFetchRecordChangesOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performFetchRecordVersionsOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performFetchRecordZoneChangesOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performFetchRecordZonesOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performFetchRecordsOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performFetchShareMetadataOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performFetchShareParticipantKeyOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performFetchShareParticipantsOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performFetchSubscriptionsOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performFetchUserQuotaOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performFetchWebAuthTokenOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performFetchWhitelistedBundleIDsOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performInitiateParticipantVettingOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performMarkNotificationsReadOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performModifyBadgeOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performModifyRecordAccessOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performModifyRecordZonesOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performModifyRecordsOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performModifySubscriptionsOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performModifyWebSharingOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performPublishAssetsOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performQueryOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (id)proxy;
- (void)purgeDirectory:(id)arg1;
- (void)repairZonePCSWithOperationInfo:(id)arg1 withBlock:(id /* block */)arg2;
- (void)requestApplicationPermission:(unsigned int)arg1 setupInfo:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)resetAllApplicationPermissionsWithSetupInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)serverPreferredPushEnvironmentWithSetupInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setApplicationPermission:(unsigned int)arg1 enabled:(BOOL)arg2 setupInfo:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)setFakeError:(id)arg1 forNextRequestOfClassName:(id)arg2 setupInfo:(id)arg3;
- (void)setFakeResponseOperationResult:(id)arg1 forNextRequestOfClassName:(id)arg2 forItemID:(id)arg3 setupInfo:(id)arg4;
- (void)setProxy:(id)arg1;
- (void)showAssetCacheWithSetupInfo:(id)arg1 databaseScope:(int)arg2;
- (void)statusForApplicationPermission:(unsigned int)arg1 setupInfo:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)statusGroupsForApplicationPermission:(unsigned int)arg1 setupInfo:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)tossConfigWithSetupInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updatePushTokens;
- (void)wipeAllCachesAndDie;

@end
