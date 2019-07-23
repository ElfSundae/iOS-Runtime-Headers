/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKRecentsViewController : CKBrowserViewController <CKBrowserDragControllerDelegate, MSStickerBrowserViewDataSource, _MSStickerSendManagerDelegate> {
    MSStickerBrowserView * _browserView;
    id /* block */  _draggingCompletionHandler;
    BOOL  _hasHandwritingRecents;
    BOOL  _hasStickerRecents;
    BOOL  _isLoadingRecents;
    UILabel * _noRecentsLabel;
    BOOL  _preparingForDisplay;
    NSMutableArray * _recentItems;
    NSMutableDictionary * _stickerCache;
}

@property (nonatomic, retain) MSStickerBrowserView *browserView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ draggingCompletionHandler;
@property (nonatomic) BOOL hasHandwritingRecents;
@property (nonatomic) BOOL hasStickerRecents;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL isLoadingRecents;
@property (nonatomic, retain) UILabel *noRecentsLabel;
@property (getter=isPreparingForDisplay, nonatomic) BOOL preparingForDisplay;
@property (nonatomic, retain) NSMutableArray *recentItems;
@property (nonatomic, retain) NSMutableDictionary *stickerCache;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_postBrowserDidPrepareForDisplayNotificationIfNecessary;
- (void)_setContentOverlayInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (id)_stickerForMSSticker:(id)arg1;
- (id)browserView;
- (void)dealloc;
- (void)didTransitionFromOrientation:(int)arg1 toOrientation:(int)arg2;
- (BOOL)dragManager:(id)arg1 canPeelItem:(id)arg2;
- (BOOL)dragManager:(id)arg1 canRotateItem:(id)arg2;
- (BOOL)dragManager:(id)arg1 canScaleItem:(id)arg2;
- (void)dragManager:(id)arg1 didDragItem:(id)arg2 toDragTarget:(id)arg3;
- (void)dragManager:(id)arg1 didEndDraggingItem:(id)arg2 toDragTarget:(id)arg3 dropArea:(int)arg4;
- (BOOL)dragManager:(id)arg1 shouldCancelDraggingForItem:(id)arg2 toDragTarget:(id)arg3 dropArea:(int)arg4;
- (id /* block */)draggingCompletionHandler;
- (void)forceTearDownRemoteView;
- (BOOL)hasHandwritingRecents;
- (BOOL)hasStickerRecents;
- (id)initWithBalloonPlugin:(id)arg1 dataSource:(id)arg2;
- (void)insertSticker:(id)arg1 completionHandler:(id /* block */)arg2;
- (BOOL)isLoadingRecents;
- (BOOL)isPreparingForDisplay;
- (void)loadRecents;
- (void)loadView;
- (BOOL)mayBeKeptInViewHierarchy;
- (id)noRecentsLabel;
- (int)numberOfStickersInStickerBrowserView:(id)arg1;
- (void)prepareForDisplay;
- (id)recentItems;
- (void)recentsUpdated;
- (id)requestSnapshotDataForPersistance;
- (void)resortAndReloadRecents;
- (void)saveSnapshotForBrowserViewController;
- (void)setBrowserView:(id)arg1;
- (void)setDraggingCompletionHandler:(id /* block */)arg1;
- (void)setHasHandwritingRecents:(BOOL)arg1;
- (void)setHasStickerRecents:(BOOL)arg1;
- (void)setIsLoadingRecents:(BOOL)arg1;
- (void)setNoRecentsLabel:(id)arg1;
- (void)setPreparingForDisplay:(BOOL)arg1;
- (void)setRecentItems:(id)arg1;
- (void)setStickerCache:(id)arg1;
- (void)setupNoRecentsLabel;
- (BOOL)shouldShowChatChrome;
- (void)startDragSticker:(id)arg1 frameInRemoteView:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 fence:(id)arg3 completionHandler:(id /* block */)arg4;
- (BOOL)stickerBrowserView:(id)arg1 shouldDrawBorderAroundSticker:(id)arg2;
- (id)stickerBrowserView:(id)arg1 stickerAtIndex:(int)arg2;
- (id)stickerCache;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;

@end
