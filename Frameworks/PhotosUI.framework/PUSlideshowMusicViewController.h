/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSlideshowMusicViewController : UIViewController <MPMediaPickerControllerDelegate, PUViewControllerSpecChangeObserver, UITableViewDataSource, UITableViewDelegate> {
    BOOL __needsUpdateBackgroundView;
    BOOL __needsUpdateSpec;
    BOOL __needsUpdateTableView;
    PUSlideshowMediaItem *_currentMediaItem;
    <PUSlideshowMusicDelegate> *_delegate;
    NSArray *_mediaItems;
    BOOL _shouldHideTableViewWhenViewWillDisappear;
    PUSlideshowSettingsViewControllerSpec *_spec;
    UITableView *_tableView;
}

@property (setter=_setNeedsUpdateBackgroundView:, nonatomic) BOOL _needsUpdateBackgroundView;
@property (setter=_setNeedsUpdateSpec:, nonatomic) BOOL _needsUpdateSpec;
@property (setter=_setNeedsUpdateTableView:, nonatomic) BOOL _needsUpdateTableView;
@property (nonatomic, retain) PUSlideshowMediaItem *currentMediaItem;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUSlideshowMusicDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_didFinish;
- (void)_didPickMediaItem:(id)arg1;
- (void)_invalidateBackgroundView;
- (void)_invalidateSpec;
- (void)_invalidateTableView;
- (BOOL)_needsUpdate;
- (BOOL)_needsUpdateBackgroundView;
- (BOOL)_needsUpdateSpec;
- (BOOL)_needsUpdateTableView;
- (void)_setNeedsUpdate;
- (void)_setNeedsUpdateBackgroundView:(BOOL)arg1;
- (void)_setNeedsUpdateSpec:(BOOL)arg1;
- (void)_setNeedsUpdateTableView:(BOOL)arg1;
- (void)_updateBackgroundViewIfNeeded;
- (void)_updateIfNeeded;
- (void)_updateSpecIfNeeded;
- (void)_updateTableViewIfNeeded;
- (id)currentMediaItem;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (void)mediaPicker:(id)arg1 didPickMediaItems:(id)arg2;
- (void)mediaPickerDidCancel:(id)arg1;
- (int)numberOfSectionsInTableView:(id)arg1;
- (BOOL)pu_wantsNavigationBarVisible;
- (void)setCurrentMediaItem:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(int)arg3;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewControllerSpec:(id)arg1 didChange:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
