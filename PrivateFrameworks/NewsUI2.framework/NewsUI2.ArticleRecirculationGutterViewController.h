/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
 */

@interface NewsUI2.ArticleRecirculationGutterViewController : UIViewController <SXDocumentSectionItemImpressionable, SXDocumentSectionItemProvider, TSArticleRecirculationRoutedType, TSArticleRecirculationViewControllerType> {
    void childViewController;
}

@property (nonatomic, readonly) UIViewController *childViewControllerForHomeIndicatorAutoHidden;
@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarHidden;
@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarStyle;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } contentSize;
@property (nonatomic, retain) <TSArticleRecirculationViewControllerDelegate> *delegate;
@property (nonatomic, readonly) NSArray *headlines;
@property (nonatomic, readonly) UINavigationItem *navigationItem;
@property (nonatomic, retain) <TSArticleRecirculationRoutableFeedDelegate> *routableDelegate;
@property (nonatomic, readonly) long long section;

- (void).cxx_destruct;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (struct CGSize { double x1; double x2; })contentSize;
- (id)delegate;
- (void)endDocumentSectionImpression;
- (id)headlines;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (id)navigationItem;
- (id)routableDelegate;
- (long long)section;
- (double)sectionItemHeightForSize:(struct CGSize { double x1; double x2; })arg1 traitCollection:(id)arg2;
- (id)sectionItemViewController;
- (void)setDelegate:(id)arg1;
- (void)setRoutableDelegate:(id)arg1;
- (void)updateDocumentSectionImpressionForView:(id)arg1 visibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)viewDidLoad;

@end