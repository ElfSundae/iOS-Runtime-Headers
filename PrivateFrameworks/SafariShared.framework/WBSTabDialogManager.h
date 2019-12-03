/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSTabDialogManager : NSObject {
    unsigned long long  _queueCapacity;
    NSMutableDictionary * _tabIDToDialogQueueMapping;
    NSMutableDictionary * _webProcessIDToDialogSetMapping;
}

- (void).cxx_destruct;
- (void)_cancelDialogsInQueue:(struct NSMutableArray { Class x1; }*)arg1 tabID:(unsigned long long)arg2 context:(id)arg3;
- (id)_dialogBlockingSlot:(struct { int x1; unsigned long long x2; })arg1;
- (id)_dialogBlockingWebProcessID:(int)arg1;
- (void)_dismissDialog:(id)arg1 withResponse:(id)arg2;
- (long long)_enqueueDialog:(id)arg1;
- (struct NSMutableArray { Class x1; }*)_queueForTabID:(unsigned long long)arg1 createIfNeeded:(bool)arg2;
- (struct NSMutableSet { Class x1; }*)_setForWebProcessID:(int)arg1 createIfNeeded:(bool)arg2;
- (void)cancelAllDialogsBlockingSlot:(struct { int x1; unsigned long long x2; })arg1;
- (void)cancelAllDialogsBlockingWebProcessID:(int)arg1;
- (void)cancelAllDialogsForTabID:(unsigned long long)arg1;
- (void)cancelAllDialogsForTabID:(unsigned long long)arg1 context:(id)arg2;
- (void)cancelAllDialogsForTabID:(unsigned long long)arg1 reason:(id)arg2;
- (void)cancelAllDialogsWithContext:(id)arg1;
- (id)description;
- (void)dismissCurrentDialogForTabID:(unsigned long long)arg1 withResponse:(id)arg2;
- (void)enqueueOrPresentDialog:(id)arg1 inSlot:(struct { int x1; unsigned long long x2; })arg2;
- (void)enqueueOrPresentDialogInSlot:(struct { int x1; unsigned long long x2; })arg1 presentationBlock:(id /* block */)arg2 dismissalBlock:(id /* block */)arg3 blocksWebProcessUntilDismissed:(bool)arg4;
- (id)init;
- (void)presentNextDialogForSlot:(struct { int x1; unsigned long long x2; })arg1;

@end
