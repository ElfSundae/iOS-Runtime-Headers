/* Generated by RuntimeBrowser.
 */

@protocol HDSyncStore <NSObject>

@required

- (<HDSyncChange> *)newChangeWithSyncEntityClass:(Class)arg1;
- (NSString *)remoteProductType;
- (NSString *)remoteSystemBuildVersion;
- (void)sendChange:(void *)arg1 withContext:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: <HDSyncChange> *, id, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, NSError *, void*
- (BOOL)shouldSynthesizeProvenance;
- (NSArray *)syncEntities;
- (unsigned int)syncObjectLimitForEntityClass:(Class)arg1;
- (int)syncProvenance;
- (NSString *)syncStoreDefaultSourceBundleIdentifier;
- (NSUUID *)syncStoreDefaultSourceUUID;
- (NSString *)syncStoreIdentifier;

@optional

- (void)syncDidFinishWithSuccess:(BOOL)arg1 error:(NSError *)arg2 context:(id)arg3;
- (void)syncWillBeginWithContext:(id)arg1;

@end