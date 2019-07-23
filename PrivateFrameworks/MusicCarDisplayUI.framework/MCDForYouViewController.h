/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@interface MCDForYouViewController : MCD_OLD_TableViewController <MCDErrorViewDelegate, UITableViewDelegate> {
    UIView * _MCD_tableView;
    UIActivityIndicatorView * _activityIndicator;
    BOOL  _hasLoadedRecommendations;
    MPWeakTimer * _loadingTimer;
    UINavigationController * _nowPlayingNavigationController;
    UIView * _placeholderView;
    MusicForYouRecommendationsResponse * _recommendationsResponse;
    float  _screenScale;
    NSIndexPath * _selectedIndexPath;
}

@property (nonatomic, retain) UIView *MCD_tableView;
@property (nonatomic, retain) UIActivityIndicatorView *activityIndicator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasLoadedRecommendations;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) MPWeakTimer *loadingTimer;
@property (nonatomic, retain) UINavigationController *nowPlayingNavigationController;
@property (nonatomic, retain) UIView *placeholderView;
@property (nonatomic, retain) MusicForYouRecommendationsResponse *recommendationsResponse;
@property (nonatomic) float screenScale;
@property (nonatomic, retain) NSIndexPath *selectedIndexPath;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)MCD_tableView;
- (void)_itemDidChange;
- (void)_loadForYouRecommendations;
- (void)_networkTypeDidChangeNotification:(id)arg1;
- (id)_normalizedStringStoreIDForRecommendationItem:(id)arg1;
- (void)_setCurrentTableView;
- (void)_showLoadingScreen;
- (void)_updateViewForNetworkType:(int)arg1;
- (id)activityIndicator;
- (void)didStartPlaying:(id)arg1;
- (void)errorViewDidTapButton:(id)arg1;
- (BOOL)hasLoadedRecommendations;
- (id)initWithPlayer:(id)arg1 serviceProvider:(id)arg2;
- (id)loadingTimer;
- (id)nowPlayingNavigationController;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)placeholderView;
- (id)recommendationsResponse;
- (float)screenScale;
- (id)selectedIndexPath;
- (void)setActivityIndicator:(id)arg1;
- (void)setHasLoadedRecommendations:(BOOL)arg1;
- (void)setLoadingTimer:(id)arg1;
- (void)setMCD_tableView:(id)arg1;
- (void)setNowPlayingNavigationController:(id)arg1;
- (void)setPlaceholderView:(id)arg1;
- (void)setRecommendationsResponse:(id)arg1;
- (void)setScreenScale:(float)arg1;
- (void)setSelectedIndexPath:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end
