/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIAppDocumentServiceViewController : _TVAppDocumentRequestController <IKUpdateServiceRequestDelegate, UIPopoverPresentationControllerDelegate, VUIAppDocumentUpdateEventMonitorObserving> {
    IKAppContext * _appContext;
    bool  _deferDocumentUpdateEventProcessing;
    VUIAppDocumentUpdateEventStore * _deferredDocumentUpdateEventStore;
    NSString * _documentRef;
    <VUIAppDocumentUpdateContext> * _documentUpdateContext;
    NSMutableOrderedSet * _documentUpdateViewElements;
    bool  _markDocumentDirtyForRefreshUpdate;
    NSString * _viewControllerIdentifier;
}

@property (nonatomic) IKAppContext *appContext;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) bool deferDocumentUpdateEventProcessing;
@property (nonatomic, retain) VUIAppDocumentUpdateEventStore *deferredDocumentUpdateEventStore;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *documentRef;
@property (nonatomic, retain) <VUIAppDocumentUpdateContext> *documentUpdateContext;
@property (nonatomic, retain) NSMutableOrderedSet *documentUpdateViewElements;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool markDocumentDirtyForRefreshUpdate;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *viewControllerIdentifier;

+ (id)_findCollectionListChildElementsInViewElement:(id)arg1;

- (void).cxx_destruct;
- (void)_cancelDocumentUpdateWithRequest:(id)arg1;
- (void)_cancelDocumentUpdates;
- (void)_cancelDocumentUpdatesAndPreserveUpdateEvents;
- (void)_performNextDocumentUpdateIfNeeded;
- (void)_registerDocumentUpdateEventDescriptorsWithServiceCompletionStatus:(long long)arg1;
- (void)_startDocumentUpdateWithRequest:(id)arg1;
- (void)_startDocumentUpdatesForDeferredEventsIfPossible;
- (void)_startDocumentUpdatesWithContext:(id)arg1;
- (void)_unregisterDocumentUpdateEventDescriptors;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (id)appContext;
- (void)appDocumentDidReceiveEvent:(id)arg1;
- (void)dealloc;
- (bool)deferDocumentUpdateEventProcessing;
- (id)deferredDocumentUpdateEventStore;
- (void)didCompleteDocumentCreationWithStatus:(long long)arg1 errorDictionary:(id)arg2;
- (void)documentDidUpdate:(id)arg1;
- (id)documentRef;
- (id)documentUpdateContext;
- (id)documentUpdateViewElements;
- (bool)handleEvent:(id)arg1 targetResponder:(id)arg2 viewElement:(id)arg3 extraInfo:(id*)arg4;
- (id)init;
- (id)initWithAppContext:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDocumentServiceRequest:(id)arg1;
- (id)initWithDocumentServiceRequest:(id)arg1 loadImmediately:(bool)arg2;
- (id)initWithDocumentServiceRequest:(id)arg1 loadImmediately:(bool)arg2 documentRef:(id)arg3 viewControllerIdentifier:(id)arg4;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)interactionPreviewControllerForViewController:(id)arg1 presentingView:(id)arg2 presentingElement:(id)arg3;
- (bool)markDocumentDirtyForRefreshUpdate;
- (void)popoverPresentationController:(id)arg1 willRepositionPopoverToRect:(inout struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 inView:(inout id*)arg3;
- (void)serviceRequest:(id)arg1 didCompleteWithStatus:(long long)arg2 errorDictionary:(id)arg3;
- (void)setAppContext:(id)arg1;
- (void)setDeferDocumentUpdateEventProcessing:(bool)arg1;
- (void)setDeferredDocumentUpdateEventStore:(id)arg1;
- (void)setDocumentRef:(id)arg1;
- (void)setDocumentUpdateContext:(id)arg1;
- (void)setDocumentUpdateViewElements:(id)arg1;
- (void)setMarkDocumentDirtyForRefreshUpdate:(bool)arg1;
- (void)setViewControllerIdentifier:(id)arg1;
- (void)updateDocumentWithContextDictionary:(id)arg1 element:(id)arg2;
- (void)updateServiceRequest:(id)arg1 documentDidChange:(id)arg2;
- (id)viewControllerIdentifier;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)vui_handleEvent:(id)arg1 forElement:(id)arg2 sourceView:(id)arg3;

@end
