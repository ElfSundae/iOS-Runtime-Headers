/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCMMInvitationGadget : NSObject <PXChangeObserver, PXGadget> {
    PXCMMAssetsProgressListener * _assetsProgressListener;
    UIColor * _backgroundColor;
    <PXGadgetDelegate> * _delegate;
    PXGadgetSpec * _gadgetSpec;
    <PXCMMInvitation> * _invitation;
    <PXCMMInvitationGadgetDelegate> * _invitationGadgetDelegate;
    PXCMMInvitationView * _invitationView;
    UILongPressGestureRecognizer * _longPressGestureRecognizer;
    NSManagedObjectID * _objectID;
}

@property (nonatomic, readonly) const struct __CFString { }*accessoryButtonEventTrackerKey;
@property (nonatomic, readonly) NSString *accessoryButtonTitle;
@property (nonatomic, readonly) unsigned long long accessoryButtonType;
@property (nonatomic, retain) PXCMMAssetsProgressListener *assetsProgressListener;
@property (nonatomic, retain) UIColor *backgroundColor;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXGadgetDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PXGadgetSpec *gadgetSpec;
@property (nonatomic, readonly) unsigned long long gadgetType;
@property (nonatomic, readonly) bool hasContentToDisplay;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long headerStyle;
@property (nonatomic, retain) <PXCMMInvitation> *invitation;
@property (nonatomic) <PXCMMInvitationGadgetDelegate> *invitationGadgetDelegate;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, retain) NSManagedObjectID *objectID;
@property (nonatomic) long long priority;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsAssetsDrop;
@property (nonatomic, readonly) bool supportsHighlighting;
@property (nonatomic, readonly) bool supportsSelection;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleContentRect;

- (void).cxx_destruct;
- (void)_changeViewConfiguration:(id /* block */)arg1;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_lastExitedForYouDateDidChange:(id)arg1;
- (void)_loadInvitation:(id)arg1;
- (void)_longPressGesture:(id)arg1;
- (void)_registerAssetsProgressListenerForInvitation:(id)arg1;
- (void)_tapGesture:(id)arg1;
- (void)_updateExpirationTitle;
- (void)_updateLongPressGestureRecognizer;
- (void)_updateStatusString;
- (void)_updateTitle;
- (id)assetsProgressListener;
- (id)backgroundColor;
- (void)commitPreviewViewController:(id)arg1;
- (struct NSObject { Class x1; }*)contentView;
- (id)delegate;
- (id)gadgetSpec;
- (unsigned long long)gadgetType;
- (bool)hasContentToDisplay;
- (id)invitation;
- (id)invitationGadgetDelegate;
- (id)objectID;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)ppt_presentDetailView;
- (void)presentInvitationAnimated:(bool)arg1;
- (struct NSObject { Class x1; }*)previewViewControllerAtLocation:(struct CGPoint { double x1; double x2; })arg1 fromSourceView:(struct NSObject { Class x1; }*)arg2 outSourceRect:(out struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3;
- (void)setAssetsProgressListener:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGadgetSpec:(id)arg1;
- (void)setInvitation:(id)arg1;
- (void)setInvitationGadgetDelegate:(id)arg1;
- (void)setObjectID:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)supportsHighlighting;
- (bool)supportsSelection;
- (id)uniqueGadgetIdentifier;

@end
