/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIMovieCardSectionBuyButtonView : UIView {
    SKUIItemOfferButton *_button;
    SearchUICardViewController *_controller;
    UILabel *_subtitleLabel;
    NSURL *_url;
}

@property (retain) SKUIItemOfferButton *button;
@property (nonatomic, retain) SearchUICardViewController *controller;
@property (retain) UILabel *subtitleLabel;
@property (retain) NSURL *url;

- (void).cxx_destruct;
- (id)button;
- (void)buttonPressed;
- (id)controller;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 url:(id)arg3 adamID:(id)arg4 offerIdentifier:(id)arg5 controller:(id)arg6;
- (void)lookupPriceForAdamID:(id)arg1 offerIdentifier:(id)arg2;
- (void)setButton:(id)arg1;
- (void)setController:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)subtitleLabel;
- (id)url;

@end
