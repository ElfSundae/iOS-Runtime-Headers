/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DAEASOAuthFramework.framework/DAEASOAuthFramework
 */

@interface DAEASOAuthFlowController : NSObject <SL_OOPAuthFlowDelegate, UIWebViewDelegate> {
    id /* block */  _completion;
    unsigned int  _oauthType;
    NSString * _oauthURI;
    NSString * _tokenRequestURI;
    NSString * _username;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) unsigned int oauthType;
@property (nonatomic, copy) NSString *oauthURI;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *tokenRequestURI;
@property (nonatomic, copy) NSString *username;

- (void).cxx_destruct;
- (id)_accountDescription;
- (void)_exchangeAuthCode:(id)arg1 forTokensAndUsernameWithCompletion:(id /* block */)arg2;
- (void)_exchangeAuthCode:(id)arg1 forTokensWithCompletion:(id /* block */)arg2;
- (id)_urlRequestForOAuthTokenFromAuthCode:(id)arg1;
- (id)authURLForUsername:(id)arg1;
- (id)initWithOAuthType:(unsigned int)arg1 authURI:(id)arg2 username:(id)arg3;
- (id)initialRedirectURL;
- (unsigned int)oauthType;
- (id)oauthURI;
- (id)requestForAuthURL:(id)arg1;
- (void)setAuthFlowCompletion:(id /* block */)arg1;
- (void)setOauthType:(unsigned int)arg1;
- (void)setOauthURI:(id)arg1;
- (void)setTokenRequestURI:(id)arg1;
- (void)setUsername:(id)arg1;
- (BOOL)shouldHideWebViewForLoadWithRequest:(id)arg1;
- (id)tokenRequestURI;
- (id)username;
- (void)webViewDidFinishLoadWithPageTitleSupplier:(id /* block */)arg1;

@end
