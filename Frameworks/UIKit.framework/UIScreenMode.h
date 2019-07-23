/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIScreenMode : NSObject {
    BOOL  _mainScreen;
    id  _mode;
}

@property (getter=_isMainScreen, setter=_setMainScreen:) BOOL _mainScreen;
@property (nonatomic, readonly) float pixelAspectRatio;
@property (nonatomic, readonly) struct CGSize { float x1; float x2; } size;

+ (id)_screenModeForDisplayMode:(id)arg1 mainScreen:(BOOL)arg2;

- (void).cxx_destruct;
- (id)_displayMode;
- (BOOL)_isMainScreen;
- (void)_setMainScreen:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })_sizeWithLevel:(unsigned int)arg1;
- (id)description;
- (id)initWithDisplayMode:(id)arg1 mainScreen:(BOOL)arg2;
- (float)pixelAspectRatio;
- (struct CGSize { float x1; float x2; })size;

@end
