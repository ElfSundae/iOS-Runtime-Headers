/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotosGlobalFooterBannerView : UIView {
    ICQBannerView *_bannerView;
    NSArray *_constraints;
    <ICQBannerViewDelegate> *_delegate;
    UIColor *_lineColor;
    UIView *_separatorLine;
    float separatorHeight;
}

@property (nonatomic) <ICQBannerViewDelegate> *delegate;
@property (nonatomic, retain) UIColor *lineColor;

- (void).cxx_destruct;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)lineColor;
- (void)setDelegate:(id)arg1;
- (void)setLineColor:(id)arg1;
- (void)updateConstraints;

@end
