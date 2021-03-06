/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUICardViewController : UIViewController <CRKCardViewControlling, CRKFeedbackDelegate> {
    unsigned long long  _level;
    TLKLabel * _loadingLabel;
    NSTimer * _loadingScreenTimer;
    UIActivityIndicatorView * _loadingSpinner;
    NUIContainerBoxView * _loadingView;
    SearchUICardTableViewController * _tableViewController;
}

@property (nonatomic, retain) <CRCard> *card;
@property (nonatomic, retain) SFCard *card;
@property (nonatomic, retain) <CRKCardSectionViewSourcing> *cardSectionViewSource;
@property (nonatomic) <CRKCardViewControllerDelegate> *cardViewControllerDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) SUICKPFeedbackAdapter *defaultFeedbackAdapter;
@property (nonatomic) <SearchUICardViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) <SFFeedbackListener> *feedbackListener;
@property (readonly) unsigned long long hash;
@property (getter=isInPreviewPlatter, nonatomic) bool inPreviewPlatter;
@property (nonatomic) unsigned long long level;
@property (nonatomic, retain) TLKLabel *loadingLabel;
@property (nonatomic, retain) NSTimer *loadingScreenTimer;
@property (nonatomic, retain) UIActivityIndicatorView *loadingSpinner;
@property (nonatomic, retain) NUIContainerBoxView *loadingView;
@property (nonatomic) bool shouldUseInsetRoundedSections;
@property (readonly) Class superclass;
@property (nonatomic, retain) SearchUICardTableViewController *tableViewController;
@property (nonatomic) bool threeDTouchEnabled;
@property (nonatomic, retain) SearchUIBackgroundView *view;

// Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)card;
- (void)cardViewDidAppear;
- (double)contentHeightForWidth:(double)arg1;
- (id)delegate;
- (void)displayLoadingViewAfterDelay:(double)arg1 withSpinner:(bool)arg2;
- (id)feedbackListener;
- (id)init;
- (id)initWithCard:(id)arg1 feedbackListener:(id)arg2;
- (id)initWithCard:(id)arg1 style:(unsigned long long)arg2 feedbackListener:(id)arg3;
- (bool)isInPreviewPlatter;
- (unsigned long long)level;
- (id)loadingLabel;
- (id)loadingScreenTimer;
- (id)loadingSpinner;
- (id)loadingView;
- (void)prepareLoadingView;
- (void)setCard:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFeedbackListener:(id)arg1;
- (void)setInPreviewPlatter:(bool)arg1;
- (void)setLevel:(unsigned long long)arg1;
- (void)setLoadingLabel:(id)arg1;
- (void)setLoadingScreenTimer:(id)arg1;
- (void)setLoadingSpinner:(id)arg1;
- (void)setLoadingView:(id)arg1;
- (void)setShouldUseInsetRoundedSections:(bool)arg1;
- (void)setTableViewController:(id)arg1;
- (void)setThreeDTouchEnabled:(bool)arg1;
- (bool)shouldUseInsetRoundedSections;
- (id)tableViewController;
- (id)testingTableViewController;
- (bool)threeDTouchEnabled;
- (void)updateTimerAndCardSections:(id)arg1;
- (void)updateWithCardSections:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SearchUICardKitProviderSupport.framework/SearchUICardKitProviderSupport

- (void)cardSectionViewDidAppearForCardSection:(id)arg1 withAppearanceFeedback:(id)arg2;
- (void)cardSectionViewDidDisappearForCardSection:(id)arg1 withDisappearanceFeedback:(id)arg2;
- (void)cardSectionViewDidInvalidateSizeForCardSection:(id)arg1;
- (id)cardSectionViewSource;
- (void)cardSectionViewWillAppearForCardSection:(id)arg1 withAppearanceFeedback:(id)arg2;
- (id)cardViewControllerDelegate;
- (id)defaultFeedbackAdapter;
- (void)presentViewController:(id)arg1;
- (void)presentViewControllerForCard:(id)arg1 animate:(bool)arg2;
- (void)setCardSectionViewSource:(id)arg1;
- (void)setCardViewControllerDelegate:(id)arg1;
- (void)setDefaultFeedbackAdapter:(id)arg1;
- (void)userDidEngageCardSection:(id)arg1 withEngagementFeedback:(id)arg2;
- (void)userDidReportFeedback:(id)arg1 fromCardSection:(id)arg2;
- (void)willDismissViewController:(id)arg1;

@end
