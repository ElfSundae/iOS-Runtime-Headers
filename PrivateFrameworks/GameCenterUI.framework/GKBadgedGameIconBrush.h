/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKBadgedGameIconBrush : GKThemeBrush {
    GKThemeBrush *_badgeBrush;
}

@property (nonatomic, retain) GKThemeBrush *badgeBrush;

- (id)badgeBrush;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)drawInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withContext:(struct CGContext { }*)arg2 input:(id)arg3;
- (id)init;
- (float)scaleForInput:(id)arg1;
- (void)setBadgeBrush:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeForInput:(id)arg1;

@end
