/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSUIApplicationWorkspace : FBSWorkspace <FBSUIApplicationWorkspaceClientDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FBSUIApplicationWorkspaceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (Class)_clientClass;
- (void)client:(id)arg1 handleLaunch:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)clientHandleAssertionExpirationImminent:(id)arg1;
- (void)clientHandleExit:(id)arg1;
- (BOOL)isUIApplicationWorkspace;

@end