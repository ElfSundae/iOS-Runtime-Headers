/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADWebViewManager : NSObject {
    ADWebView * _preallocatedWebView;
}

@property (nonatomic, retain) ADWebView *preallocatedWebView;

+ (id)sharedManager;

- (id)_webViewForCreative;
- (id)_webViewForCreativeForVideo;
- (id)creativeView;
- (id)creativeViewForVideo;
- (void)dealloc;
- (void)preallocateWebViewWithBackgroundPriority;
- (id)preallocatedWebView;
- (void)setPreallocatedWebView:(id)arg1;

@end
