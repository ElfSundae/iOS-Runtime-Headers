/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCSharingCopyWebAuthTokenOperation : _BRCFrameworkOperation <BRCOperationSubclass> {
    NSString *_ckContainerID;
}

@property (nonatomic, retain) NSString *ckContainerID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)ckContainerID;
- (id)initWithSyncContext:(id)arg1 ckContainerID:(id)arg2;
- (void)main;
- (void)setCkContainerID:(id)arg1;
- (BOOL)shouldRetryForError:(id)arg1;
- (unsigned long long)startActivity;

@end
