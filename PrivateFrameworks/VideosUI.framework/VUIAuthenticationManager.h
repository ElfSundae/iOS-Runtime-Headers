/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIAuthenticationManager : NSObject {
    SSAuthenticateRequest * __authRequest;
    bool  __isObservingAccountStoreChange;
}

@property (nonatomic, retain) SSAuthenticateRequest *_authRequest;
@property (nonatomic) bool _isObservingAccountStoreChange;

+ (void)_performAuthenticationWithContext:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)_userAccount;
+ (bool)allowsAccountModification;
+ (void)requestAuthenticationWithCompletionHandler:(id /* block */)arg1;
+ (id)sharedInstance;
+ (void)signInUserWithAppleID:(id)arg1 password:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)signOutUserWithCompletionHandler:(id /* block */)arg1;
+ (id)userAccountName;
+ (id)userFirstName;
+ (id)userFullName;
+ (bool)userHasActiveAccount;
+ (id)userLastName;

- (void).cxx_destruct;
- (void)_accountStoreDidChange:(id)arg1;
- (id)_authRequest;
- (bool)_isObservingAccountStoreChange;
- (void)set_authRequest:(id)arg1;
- (void)set_isObservingAccountStoreChange:(bool)arg1;

@end
