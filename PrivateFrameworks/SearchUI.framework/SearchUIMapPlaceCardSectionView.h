/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIMapPlaceCardSectionView : SearchUICardSectionView <NUIContainerViewDelegate, _MKPlaceViewControllerDelegate> {
    bool  _alreadyDispatchedOnMainQueue;
    SearchUIMapsViewController * _mapViewController;
    struct CGSize { 
        double width; 
        double height; 
    }  _placecardBoundsSize;
}

@property bool alreadyDispatchedOnMainQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) SearchUIMapsViewController *mapViewController;
@property (nonatomic) struct CGSize { double x1; double x2; } placecardBoundsSize;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)alreadyDispatchedOnMainQueue;
- (struct CGSize { double x1; double x2; })containerView:(id)arg1 systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg2 forArrangedSubview:(id)arg3;
- (void)containerView:(id)arg1 willMeasureArrangedSubviewsFittingSize:(struct CGSize { double x1; double x2; })arg2 forReason:(long long)arg3;
- (id)embeddedViewController;
- (id)mapViewController;
- (void)placeViewController:(id)arg1 requestPasscodeUnlockWithCompletion:(id /* block */)arg2;
- (void)placeViewControllerDidUpdateHeight:(id)arg1;
- (struct CGSize { double x1; double x2; })placecardBoundsSize;
- (void)setAlreadyDispatchedOnMainQueue:(bool)arg1;
- (void)setMapViewController:(id)arg1;
- (void)setPlacecardBoundsSize:(struct CGSize { double x1; double x2; })arg1;
- (id)setupContentView;
- (void)tlk_updateForAppearance:(id)arg1;

@end
