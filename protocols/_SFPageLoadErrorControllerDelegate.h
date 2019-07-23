/* Generated by RuntimeBrowser.
 */

@protocol _SFPageLoadErrorControllerDelegate <NSObject>

@required

- (void)pageLoadErrorController:(_SFPageLoadErrorController *)arg1 loadFailedRequestAfterError:(NSURLRequest *)arg2;
- (void)pageLoadErrorController:(_SFPageLoadErrorController *)arg1 setAllowsSpecificHTTPSCertificate:(NSArray *)arg2 forHost:(NSString *)arg3;
- (void)pageLoadErrorControllerDidShowAlert:(_SFPageLoadErrorController *)arg1;
- (void)pageLoadErrorControllerDidShowErrorPage:(_SFPageLoadErrorController *)arg1;
- (BOOL)pageLoadErrorControllerShouldHandleCertificateError:(_SFPageLoadErrorController *)arg1;
- (void)pageLoadErrorControllerWillShowPrintingDuringLoadAlert:(_SFPageLoadErrorController *)arg1 action:(int)arg2;

@optional

- (void)pageLoadErrorController:(_SFPageLoadErrorController *)arg1 didChooseOnlyAvailableIdentityForAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg2;
- (NSString *)pageLoadErrorControllerApplicationDisplayName:(_SFPageLoadErrorController *)arg1;

@end
