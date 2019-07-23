/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSJavaScriptDialogManager : NSObject {
    NSMutableDictionary * _completionHandlers;
}

- (void).cxx_destruct;
- (void)dismissAlertDialogForWebPID:(int)arg1;
- (void)dismissConfirmDialogForWebPID:(int)arg1 withResponse:(int)arg2;
- (void)dismissDialogForWebPIDIfNeeded:(int)arg1;
- (void)dismissPromptDialogForWebPID:(int)arg1 withResponse:(id)arg2;
- (id)init;
- (void)registerDialogForWebPID:(int)arg1 withCompletionHandler:(id)arg2;
- (id)unregisterDialogForWebPID:(int)arg1;

@end
