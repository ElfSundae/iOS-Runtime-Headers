/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

@interface WFActionDrawerSiriSuggestionsCollectionViewCell : UICollectionViewCell <UIGestureRecognizerDelegate> {
    long long  _cellType;
    UIViewController * _containingViewController;
    <VCActionDonation> * _donation;
    WFDragController * _dragController;
    WFDragGestureRecognizer * _dragRecognizer;
    NSArray * _horizontalStackConstraints;
    WFActionDrawerImage * _image;
    WFActionDrawerImageLoadTask * _imageLoadTask;
    WFCircularImageView * _imageView;
    NSString * _title;
    UILabel * _titleLabel;
    NSArray * _verticalStackConstraints;
}

@property (nonatomic, readonly) long long cellType;
@property (nonatomic) UIViewController *containingViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <VCActionDonation> *donation;
@property (nonatomic, readonly) WFDragController *dragController;
@property (nonatomic) WFDragGestureRecognizer *dragRecognizer;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *horizontalStackConstraints;
@property (nonatomic, retain) WFActionDrawerImage *image;
@property (nonatomic, retain) WFActionDrawerImageLoadTask *imageLoadTask;
@property (nonatomic) WFCircularImageView *imageView;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic) UILabel *titleLabel;
@property (nonatomic, retain) NSArray *verticalStackConstraints;

+ (struct CGSize { double x1; double x2; })preferredSizeForType:(long long)arg1 forTraitCollection:(id)arg2;
+ (bool)shouldStackVerticallyForTraitCollection:(id)arg1;
+ (struct CGSize { double x1; double x2; })sizeForCellUsingVerticalStacking:(bool)arg1;
+ (double)spacingForType:(long long)arg1;

- (void).cxx_destruct;
- (void)adjustStackingStyle;
- (long long)cellType;
- (void)configureWithCellType:(long long)arg1 title:(id)arg2 donation:(id)arg3 genericAction:(id)arg4 forDailyRoutines:(bool)arg5;
- (id)containingViewController;
- (id)donation;
- (id)dragController;
- (id)dragRecognizer;
- (bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)horizontalStackConstraints;
- (id)image;
- (id)imageLoadTask;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)loadImageForInteractionDonation:(id)arg1;
- (void)prepareForReuse;
- (void)setContainingViewController:(id)arg1;
- (void)setDragRecognizer:(id)arg1;
- (void)setHorizontalStackConstraints:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImage:(id)arg1 animated:(bool)arg2;
- (void)setImageLoadTask:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setUpLayoutConstraints;
- (void)setVerticalStackConstraints:(id)arg1;
- (bool)shouldStackVerticallyForTraitCollection:(id)arg1;
- (id)title;
- (id)titleLabel;
- (void)traitCollectionDidChange:(id)arg1;
- (id)verticalStackConstraints;

@end
