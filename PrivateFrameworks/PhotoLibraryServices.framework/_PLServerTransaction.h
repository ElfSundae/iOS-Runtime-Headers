/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface _PLServerTransaction : _PLClientTransaction {
    NSObject<OS_dispatch_queue> * _changeScopeQueue;
    NSCountedSet * _enqueuedChangeScopes;
}

- (void)_enqueueChangeScopes:(id)arg1;
- (void)abortTransaction;
- (void)addChangeScopes:(id)arg1;
- (id)changeScopes;
- (void)completeTransaction;
- (void)completeTransactionScope:(id)arg1;
- (void)dealloc;
- (id)generateChangeScopesDescription;
- (id)init;
- (BOOL)isClientTransaction;
- (void)popChangeScopesBatch;
- (void)pushChangeScopesBatch;

@end
