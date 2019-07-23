/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlacePhotosView : UIView <UIGestureRecognizerDelegate, UIScrollViewDelegate> {
    UIActivityIndicatorView * _activityIndicator;
    int  _actualPage;
    UIVisualEffectView * _bottomEffectView;
    UIView * _bottomView;
    <MKPlacePhotosViewDelegate> * _delegate;
    NSArray * _fontConstraints;
    UIImageView * _gradientView;
    UILabel * _licenseLabel;
    UINavigationBar * _navBar;
    UINavigationItem * _navItem;
    UILabel * _pageInfoLabel;
    NSMutableArray * _photoViews;
    NSArray * _photos;
    UIScrollView * _scrollView;
    NSMutableArray * _singlePhotoArray;
    NSLayoutConstraint * _statusBarHeightConstraint;
    UILabel * _subtitleLabel;
    unsigned long long  _textDisplayedForPage;
    UILabel * _titleLabel;
    UIVisualEffectView * _topView;
}

@property (nonatomic) unsigned long long currentPage;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MKPlacePhotosViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_backTapped;
- (void)contentSizeDidChange;
- (unsigned long long)currentPage;
- (id)delegate;
- (void)dismiss;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)headerTitleForPage:(unsigned long long)arg1;
- (void)hideToView:(id)arg1;
- (unsigned long long)indexForPhotoAtXOffset:(double)arg1 pageWidth:(double)arg2 numberOfPhotos:(unsigned long long)arg3;
- (id)initWithPhotos:(id)arg1;
- (void)layoutSubviews;
- (void)memoryWarning:(id)arg1;
- (void)photoAttributionTapped;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setCurrentPage:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setNavBarHidden:(bool)arg1 animated:(bool)arg2;
- (void)showPhotoAt:(unsigned long long)arg1;
- (void)startActivityIndicator;
- (void)stopActivityIndicator;
- (void)toggleNavBar;
- (void)updateDetails;
- (void)updateStatusBarConstraint;
- (void)updateTextForPage:(unsigned long long)arg1;
- (void)willEnterForeground:(id)arg1;
- (double)xPositionForPhotoAtIndex:(unsigned long long)arg1 numberOfPhotos:(unsigned long long)arg2 pageWidth:(double)arg3;

@end
