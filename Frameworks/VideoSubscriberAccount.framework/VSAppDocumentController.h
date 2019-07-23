/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSAppDocumentController : NSObject <IKAppDocumentDelegate> {
    IKAppDocument * _appDocument;
    <VSAppDocumentControllerDelegate> * _delegate;
    IKViewElement * _templateElement;
    VSViewModel * _viewModel;
    NSError * _viewModelError;
}

@property (nonatomic, retain) IKAppDocument *appDocument;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VSAppDocumentControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) IKViewElement *templateElement;
@property (nonatomic, retain) VSViewModel *viewModel;
@property (nonatomic, retain) NSError *viewModelError;

- (void).cxx_destruct;
- (id)_imageItemProviderWithImageElement:(id)arg1;
- (id)_newViewModel;
- (void)_notiftyDidFailToUpdateViewModel;
- (void)_notiftyDidUpdateViewModel;
- (void)_startObservingViewModel:(id)arg1;
- (void)_stopObservingViewModel:(id)arg1;
- (BOOL)_updateViewModel:(id)arg1 WithError:(id*)arg2;
- (id)appDocument;
- (void)dealloc;
- (id)delegate;
- (BOOL)document:(id)arg1 evaluateStyleMediaQuery:(id)arg2;
- (void)documentDidUpdate:(id)arg1;
- (void)documentNeedsUpdate:(id)arg1;
- (id)init;
- (id)initWithAppDocument:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setAppDocument:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setTemplateElement:(id)arg1;
- (void)setViewModel:(id)arg1;
- (void)setViewModelError:(id)arg1;
- (id)templateElement;
- (id)viewModel;
- (id)viewModelError;

@end
