/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSlideshowViewControllerSpecChange : PUViewControllerSpecChange {
    BOOL  _chromeVisibilityChanged;
    BOOL  _shouldObserveAirplayRouteChanged;
    BOOL  _shouldShowAirplayButtonChanged;
    BOOL  _shouldShowChromeBarsChanged;
    BOOL  _shouldShowPlaceholderChanged;
}

@property (nonatomic, readonly) BOOL chromeVisibilityChanged;
@property (setter=_setShouldObserveAirplayRouteChanged:, nonatomic) BOOL shouldObserveAirplayRouteChanged;
@property (setter=_setShouldShowAirplayButtonChanged:, nonatomic) BOOL shouldShowAirplayButtonChanged;
@property (setter=_setShouldShowChromeBarsChanged:, nonatomic) BOOL shouldShowChromeBarsChanged;
@property (setter=_setShouldShowPlaceholderChanged:, nonatomic) BOOL shouldShowPlaceholderChanged;

- (void)_setShouldObserveAirplayRouteChanged:(BOOL)arg1;
- (void)_setShouldShowAirplayButtonChanged:(BOOL)arg1;
- (void)_setShouldShowChromeBarsChanged:(BOOL)arg1;
- (void)_setShouldShowPlaceholderChanged:(BOOL)arg1;
- (BOOL)changed;
- (BOOL)chromeVisibilityChanged;
- (BOOL)shouldObserveAirplayRouteChanged;
- (BOOL)shouldShowAirplayButtonChanged;
- (BOOL)shouldShowChromeBarsChanged;
- (BOOL)shouldShowPlaceholderChanged;

@end
