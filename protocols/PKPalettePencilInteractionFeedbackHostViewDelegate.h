/* Generated by RuntimeBrowser.
 */

@protocol PKPalettePencilInteractionFeedbackHostViewDelegate <NSObject>

@required

- (double)minimizedPaletteScaleFactor;
- (struct CGSize { double x1; double x2; })minimizedPaletteSize;
- (UIColor *)paletteBorderColor;
- (double)paletteBorderWidth;
- (double)paletteEdgeSpacing;
- (double)paletteEdgeSpacingForMinimized;
- (UIColor *)paletteShadowColor;
- (struct CGSize { double x1; double x2; })paletteShadowOffset;
- (double)paletteShadowOpacity;
- (double)paletteShadowRadius;
- (double)paletteSpringAnimationDampingRatio;
- (double)paletteSpringAnimationResponse;
- (PKPaletteView *)paletteView;
- (struct CGSize { double x1; double x2; })regularPaletteSize;

@end