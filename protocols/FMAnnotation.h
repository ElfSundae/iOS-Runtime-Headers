/* Generated by RuntimeBrowser.
 */

@protocol FMAnnotation <NSObject>

@required

- (struct CLLocationCoordinate2D { double x1; double x2; })coordinate;
- (double)distanceFromUser;
- (BOOL)hasKnownLocation;
- (double)horizontalAccuracy;
- (BOOL)isBorderEnabled;
- (BOOL)isThisDevice;
- (UIImage *)largeAnnotationIcon;
- (UIImage *)largeOverlayIcon;
- (FMAccuracyOverlay *)overlay;
- (void)setDistanceFromUser:(double)arg1;
- (void)setHorizontalAccuracy:(double)arg1;
- (void)setIsBorderEnabled:(BOOL)arg1;
- (void)setLargeAnnotationIcon:(UIImage *)arg1;
- (void)setLargeOverlayIcon:(UIImage *)arg1;
- (void)setOverlay:(FMAccuracyOverlay *)arg1;
- (void)setSmallAnnotationIcon:(UIImage *)arg1;
- (void)setSmallOverlayIcon:(UIImage *)arg1;
- (void)setTintColor:(UIColor *)arg1;
- (UIImage *)smallAnnotationIcon;
- (UIImage *)smallOverlayIcon;
- (UIColor *)tintColor;

@optional

- (void)setCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (NSString *)subtitle;
- (NSString *)title;

@end
