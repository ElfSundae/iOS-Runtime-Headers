/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUQuickControlViewController : UIViewController <HUPreloadableViewController, HUQuickControlContentCharacteristicWriting, HUQuickControlInteractiveContentContaining, HUQuickControlItemHosting> {
    bool  _areControlItemsRequestingToBeHidden;
    <HUQuickControlContentCharacteristicWritingDelegate> * _characteristicWritingDelegate;
    NSSet * _controlItems;
    unsigned long long  _controlSize;
    bool  _controlsVisible;
    <HUQuickControlViewControllerDelegate> * _delegate;
    HMHome * _home;
    HUQuickControlSimpleItemUpdater * _internalItemUpdater;
    <HUQuickControlItemUpdating> * _itemUpdater;
    <HULayoutAnchorProviding> * _preferredFrameLayoutGuide;
    <HUQuickControlContentHosting> * _quickControlHost;
    bool  _userInteractionEnabled;
}

@property (nonatomic, readonly, copy) NSSet *affectedCharacteristics;
@property (nonatomic) bool areControlItemsRequestingToBeHidden;
@property (nonatomic) <HUQuickControlContentCharacteristicWritingDelegate> *characteristicWritingDelegate;
@property (nonatomic, readonly, copy) NSSet *controlItems;
@property (nonatomic) unsigned long long controlSize;
@property (getter=areControlsVisible, nonatomic) bool controlsVisible;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUQuickControlViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasSingleControlView;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) HUQuickControlSimpleItemUpdater *internalItemUpdater;
@property (nonatomic, readonly) <HUQuickControlItemUpdating> *itemUpdater;
@property (nonatomic, readonly, copy) NSString *overrideSecondaryStatusText;
@property (nonatomic, readonly, copy) NSString *overrideStatusText;
@property (nonatomic, retain) <HULayoutAnchorProviding> *preferredFrameLayoutGuide;
@property (nonatomic, readonly) unsigned long long preferredPresentationStyle;
@property (nonatomic) <HUQuickControlContentHosting> *quickControlHost;
@property (readonly) Class superclass;
@property (getter=isUserInteractionEnabled, nonatomic) bool userInteractionEnabled;

+ (id)controlItemPredicate;

- (void).cxx_destruct;
- (void)_updateControlItemHiddenStateNotifyingHost:(bool)arg1;
- (id)affectedCharacteristics;
- (bool)areControlItemsRequestingToBeHidden;
- (bool)areControlsVisible;
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1;
- (id)characteristicWritingDelegate;
- (id)childQuickControlContentViewControllers;
- (id)controlItems;
- (unsigned long long)controlSize;
- (id)delegate;
- (bool)hasSingleControlView;
- (id)home;
- (id)hu_preloadContent;
- (id)initWithCoder:(id)arg1;
- (id)initWithControlItems:(id)arg1 home:(id)arg2 itemUpdater:(id)arg3;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)internalItemUpdater;
- (id)intrinsicSizeDescriptorForControlSize:(unsigned long long)arg1;
- (bool)isUserInteractionEnabled;
- (id)itemUpdater;
- (id)overrideSecondaryStatusText;
- (id)overrideStatusText;
- (id)overrideValueForCharacteristic:(id)arg1;
- (id)preferredFrameLayoutGuide;
- (unsigned long long)preferredPresentationStyle;
- (id)quickControlHost;
- (void)quickControlItemUpdater:(id)arg1 didUpdateResultsForControlItems:(id)arg2;
- (void)setAreControlItemsRequestingToBeHidden:(bool)arg1;
- (void)setCharacteristicWritingDelegate:(id)arg1;
- (void)setControlSize:(unsigned long long)arg1;
- (void)setControlsVisible:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPreferredFrameLayoutGuide:(id)arg1;
- (void)setQuickControlHost:(id)arg1;
- (void)setUserInteractionEnabled:(bool)arg1;
- (bool)shouldShowContentForReachabilityState:(bool)arg1;

@end
