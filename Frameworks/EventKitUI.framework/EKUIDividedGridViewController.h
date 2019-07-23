/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKUIDividedGridViewController : UIViewController {
    NSArray *_allCells;
    NSArray *_buttonTitles;
    UIColor *_cellBackgroundColor;
    <EKUIDividedGridViewControllerDelegate> *_delegate;
    float _preferredWidth;
    int _type;
    NSArray *_weekViews;
}

@property (retain) NSArray *allCells;
@property (nonatomic, retain) NSArray *buttonTitles;
@property <EKUIDividedGridViewControllerDelegate> *delegate;
@property (nonatomic) float preferredWidth;
@property (retain) NSArray *weekViews;

+ (id)dividerColor;

- (void).cxx_destruct;
- (float)_defaultButtonWidthForButtonAtIndex:(int)arg1;
- (float)_neededHeight;
- (id)_newDividerView;
- (float)_rowHeightForWidth:(float)arg1;
- (id)allCells;
- (id)buttonTitles;
- (void)cellTapped:(id)arg1;
- (id)delegate;
- (id)initWithType:(int)arg1 buttonTitles:(id)arg2 cellBackgroundColor:(id)arg3;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (void)loadView;
- (float)preferredWidth;
- (void)setAllCells:(id)arg1;
- (void)setButtonTitles:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPreferredWidth:(float)arg1;
- (void)setWeekViews:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (id)weekViews;

@end
