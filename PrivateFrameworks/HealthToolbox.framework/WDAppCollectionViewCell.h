/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

@interface WDAppCollectionViewCell : UICollectionViewCell {
    unsigned long long  _displayMode;
    UIImageView * _icon;
    NSLayoutConstraint * _iconTopConstraint;
    UILabel * _priceLabel;
    NSLayoutConstraint * _priceLabelToBottomConstraint;
    NSDictionary * _storeData;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) NSDictionary *storeData;

+ (double)_priceToBottomHeightWithDisplayMode:(unsigned long long)arg1;
+ (double)_topToIconHeightWithDisplayMode:(unsigned long long)arg1;
+ (double)heightWithIconSize:(struct CGSize { double x1; double x2; })arg1 displayMode:(unsigned long long)arg2;
+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)prepareForReuse;
- (void)setDisplayMode:(unsigned long long)arg1;
- (void)setImage:(id)arg1 animated:(bool)arg2;
- (void)setStoreData:(id)arg1;
- (id)storeData;

@end
