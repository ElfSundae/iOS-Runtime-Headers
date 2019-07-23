/* Generated by RuntimeBrowser.
 */

@protocol WKNavigationDelegatePrivate <WKNavigationDelegate>

@optional

- (NSData *)_webCryptoMasterKeyForWebView:(WKWebView *)arg1;
- (void)_webView:(WKWebView *)arg1 URL:(NSURL *)arg2 contentRuleListIdentifiers:(NSArray *)arg3 notifications:(NSArray *)arg4;
- (void)_webView:(void *)arg1 decidePolicyForNavigationAction:(void *)arg2 decisionHandler:(void *)arg3; // needs 3 arg types, found 9: WKWebView *, WKNavigationAction *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, _WKWebsitePolicies *, void*
- (void)_webView:(void *)arg1 decidePolicyForNavigationAction:(void *)arg2 userInfo:(void *)arg3 decisionHandler:(void *)arg4; // needs 4 arg types, found 10: WKWebView *, WKNavigationAction *, <NSSecureCoding> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, _WKWebsitePolicies *, void*
- (void)_webView:(WKWebView *)arg1 didFailNavigation:(WKNavigation *)arg2 withError:(NSError *)arg3 userInfo:(id <NSSecureCoding>)arg4;
- (void)_webView:(WKWebView *)arg1 didFinishLoadForQuickLookDocumentInMainFrame:(NSData *)arg2;
- (void)_webView:(WKWebView *)arg1 didPerformClientRedirectFromURL:(NSURL *)arg2 toURL:(NSURL *)arg3;
- (void)_webView:(WKWebView *)arg1 didStartLoadForQuickLookDocumentInMainFrameWithFileName:(NSString *)arg2 uti:(NSString *)arg3;
- (void)_webView:(WKWebView *)arg1 didStartProvisionalNavigation:(WKNavigation *)arg2 userInfo:(id <NSSecureCoding>)arg3;
- (void)_webView:(WKWebView *)arg1 navigation:(WKNavigation *)arg2 didFailProvisionalLoadInSubframe:(WKFrameInfo *)arg3 withError:(NSError *)arg4;
- (void)_webView:(WKWebView *)arg1 navigation:(WKNavigation *)arg2 didSameDocumentNavigation:(long long)arg3;
- (void)_webView:(WKWebView *)arg1 navigationDidFinishDocumentLoad:(WKNavigation *)arg2;
- (void)_webView:(WKWebView *)arg1 renderingProgressDidChange:(unsigned long long)arg2;
- (void)_webView:(WKWebView *)arg1 webContentProcessDidTerminateWithReason:(long long)arg2;
- (void)_webView:(WKWebView *)arg1 willPerformClientRedirectToURL:(NSURL *)arg2 delay:(double)arg3;
- (void)_webView:(WKWebView *)arg1 willSnapshotBackForwardListItem:(WKBackForwardListItem *)arg2;
- (void)_webViewDidBeginNavigationGesture:(WKWebView *)arg1;
- (void)_webViewDidCancelClientRedirect:(WKWebView *)arg1;
- (void)_webViewDidEndNavigationGesture:(WKWebView *)arg1 withNavigationToBackForwardListItem:(WKBackForwardListItem *)arg2;
- (void)_webViewDidRemoveNavigationGestureSnapshot:(WKWebView *)arg1;
- (void)_webViewDidRequestPasswordForQuickLookDocument:(WKWebView *)arg1;
- (void)_webViewWebProcessDidBecomeResponsive:(WKWebView *)arg1;
- (void)_webViewWebProcessDidBecomeUnresponsive:(WKWebView *)arg1;
- (void)_webViewWebProcessDidCrash:(WKWebView *)arg1;
- (void)_webViewWillEndNavigationGesture:(WKWebView *)arg1 withNavigationToBackForwardListItem:(WKBackForwardListItem *)arg2;

@end
