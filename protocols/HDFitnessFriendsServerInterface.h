/* Generated by RuntimeBrowser.
 */

@protocol HDFitnessFriendsServerInterface <NSObject>

@required

- (void)remote_clearFriendListWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, void*
- (void)remote_fetchAllDataWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, NSError *, void*
- (void)remote_fetchAreMultipleDevicesSharingDataForSnapshotIndex:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 9: NSNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, NSError *, BOOL, void*
- (void)remote_fitnessFriendsCloudKitAccountStatusWithCompletion:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, BOOL, NSError *, void*
- (void)remote_ignoreInviteRequestFromFriendWithUUID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, NSError *, void*
- (void)remote_pushFakeDataWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, NSError *, void*
- (void)remote_removeFriendWithUUID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, NSError *, void*
- (void)remote_sendInviteRequestToDestination:(void *)arg1 callerID:(void *)arg2 serviceIdentifier:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: NSString *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, NSError *, void*
- (void)remote_sendInviteResponse:(void *)arg1 toFriendWithUUID:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: int, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, NSError *, void*
- (void)remote_sendWithdrawInviteRequestToFriendWithUUID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, NSError *, void*
- (void)remote_setActivityDataVisible:(void *)arg1 toFriendWithUUID:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: BOOL, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, NSError *, void*
- (void)remote_setMuteEnabled:(void *)arg1 forFriendWithUUID:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: BOOL, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, NSError *, void*

@end
