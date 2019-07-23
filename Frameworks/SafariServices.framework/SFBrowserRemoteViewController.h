/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface SFBrowserRemoteViewController : _UIRemoteViewController <SFRemoteViewControllerProtocol> {
    <SFBrowserRemoveViewControllerDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SFBrowserRemoveViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)exportedInterface;
+ (id)requestViewControllerWithConnectionHandler:(id /* block */)arg1;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (id)delegate;
- (void)didFinishInitialLoad:(BOOL)arg1;
- (void)didLoadWebView;
- (void)executeCustomActivityProxyID:(id)arg1;
- (void)fetchHostAppCustomActivitiesForURL:(id)arg1 title:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setRemoteSwipeGestureEnabled:(BOOL)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)willDismissServiceViewController;
- (void)willOpenURLInHostApplication:(id)arg1;
- (void)willUpdateStatusBarStyle:(id)arg1;

@end
