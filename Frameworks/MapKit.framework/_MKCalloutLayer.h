/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MKCalloutLayer : _MKResizingLayer {
    double  _arrowOffset;
    long long  _arrowPosition;
    struct CGImage { } * _contentImage;
    UIColor * _fillColor;
    CALayer * _leftLayer;
    CALayer * _rightLayer;
    UIColor * _strokeColor;
}

@property (nonatomic) double arrowOffset;
@property (nonatomic) long long arrowPosition;
@property (nonatomic, retain) UIColor *fillColor;
@property (nonatomic, retain) UIColor *strokeColor;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_contentSize;
- (struct CGImage { }*)_newContentImage;
- (double)arrowOffset;
- (long long)arrowPosition;
- (id)fillColor;
- (id)init;
- (void)layoutSublayers;
- (void)setArrowOffset:(double)arg1;
- (void)setArrowPosition:(long long)arg1;
- (void)setContentsScale:(double)arg1;
- (void)setFillColor:(id)arg1;
- (void)setStrokeColor:(id)arg1;
- (id)strokeColor;

@end
