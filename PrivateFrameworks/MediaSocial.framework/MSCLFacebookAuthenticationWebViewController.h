/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
 */

@interface MSCLFacebookAuthenticationWebViewController : UIViewController <UIWebViewDelegate> {
    UIActivityIndicatorView * _activityIndicator;
    BOOL  _authenticating;
    id /* block */  _authenticationCompletionBlock;
    NSString * _clientID;
    BOOL  _didInterruptRedirect;
    NSString * _token;
    UIWebView * _webView;
    NSArray * _writePermissions;
}

@property (nonatomic, retain) UIActivityIndicatorView *activityIndicator;
@property (getter=isAuthenticating, nonatomic, readonly) BOOL authenticating;
@property (nonatomic, copy) id /* block */ authenticationCompletionBlock;
@property (nonatomic, readonly, copy) NSString *clientID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIWebView *webView;
@property (nonatomic, readonly, copy) NSArray *writePermissions;

+ (id)authenticationURLWithClientID:(id)arg1 permissions:(id)arg2;

- (void).cxx_destruct;
- (id)activityIndicator;
- (id /* block */)authenticationCompletionBlock;
- (void)cancelAuthenticationProcess;
- (id)clientID;
- (void)endAuthenticationProcessWithError:(id)arg1;
- (id)initWithClientID:(id)arg1 writePermissions:(id)arg2;
- (BOOL)isAuthenticating;
- (void)setActivityIndicator:(id)arg1;
- (void)setAuthenticationCompletionBlock:(id /* block */)arg1;
- (void)setWebView:(id)arg1;
- (void)startAuthenticationProcess;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)webView;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (id)writePermissions;

@end
