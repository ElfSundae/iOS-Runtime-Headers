/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

@interface MediaControlsRoutingButtonView : MPButton {
    long long  _currentMode;
    long long  _deviceType;
    MediaControlsRoutingButtonPackageView * _packageView;
}

@property (nonatomic) long long currentMode;
@property (nonatomic) long long deviceType;
@property (nonatomic, retain) MediaControlsRoutingButtonPackageView *packageView;

- (void).cxx_destruct;
- (void)_updateGlyph;
- (long long)currentMode;
- (long long)deviceType;
- (void)layoutSubviews;
- (id)packageView;
- (void)setAlpha:(double)arg1;
- (void)setCurrentMode:(long long)arg1;
- (void)setDeviceType:(long long)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setPackageView:(id)arg1;

@end
