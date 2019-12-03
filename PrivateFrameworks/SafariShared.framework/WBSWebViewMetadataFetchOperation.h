/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSWebViewMetadataFetchOperation : WBSSiteMetadataFetchOperation <WKNavigationDelegate> {
    <WBSWebViewMetadataFetchOperationDelegate> * _delegate;
    WKWebView * _webView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WBSWebViewMetadataFetchOperationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) WKWebView *webView;
@property (nonatomic, readonly) WKWebViewConfiguration *webViewConfiguration;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } webViewSize;

- (void).cxx_destruct;
- (void)_setUpWebViewAndStartOffscreenFetching;
- (void)_webViewWebProcessDidCrash:(id)arg1;
- (void)cancel;
- (void)clearWebView;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)didCreateWebView;
- (void)didFailFetch;
- (void)setDelegate:(id)arg1;
- (void)start;
- (void)startOffscreenFetching;
- (id)webView;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (id)webViewConfiguration;
- (struct CGSize { double x1; double x2; })webViewSize;
- (void)willClearWebView;

@end
