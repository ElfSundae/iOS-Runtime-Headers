/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDDiscoverUserInfosOperation : CKDOperation {
    id /* block */ _discoverUserInfosProgressBlock;
    NSArray *_emailsToDiscover;
    NSArray *_userRecordIDsToDiscover;
}

@property (nonatomic, copy) id /* block */ discoverUserInfosProgressBlock;
@property (nonatomic, retain) NSArray *emailsToDiscover;
@property (nonatomic, retain) NSArray *userRecordIDsToDiscover;

- (void).cxx_destruct;
- (void)_discoverEmails:(id)arg1 userRecordIDs:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleDiscoveredInfo:(id)arg1 emailToDiscover:(id)arg2 responseCode:(id)arg3;
- (unsigned long long)activityStart;
- (id /* block */)discoverUserInfosProgressBlock;
- (id)emailsToDiscover;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)main;
- (void)setDiscoverUserInfosProgressBlock:(id /* block */)arg1;
- (void)setEmailsToDiscover:(id)arg1;
- (void)setUserRecordIDsToDiscover:(id)arg1;
- (id)userRecordIDsToDiscover;

@end
