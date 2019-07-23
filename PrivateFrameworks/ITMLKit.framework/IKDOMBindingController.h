/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKDOMBindingController : NSObject <IKJSDataItemObserver> {
    IKAppContext * _appContext;
    IKDataBinding * _binding;
    NSDictionary * _bindingKeysByPathString;
    IKJSDataItem * _dataItem;
    <IKDOMBindingControllerDelegate> * _delegate;
    struct { 
        BOOL hasDidLoadBinding; 
        BOOL hasShouldResolveData; 
        BOOL hasDoKeysAffectingChildren; 
        BOOL hasDoKeysAffectingSubtree; 
        BOOL hasAdditionalKeysToResolve; 
        BOOL hasApplyValueForKey; 
        BOOL hasDidResolveKeys; 
    }  _delegateFlags;
    IKDOMElement * _domElement;
    IKDOMBindingController * _parent;
    NSMutableArray * _scheduledUpdaters;
    BOOL  _shouldResolveData;
}

@property (nonatomic, readonly) IKAppContext *appContext;
@property (nonatomic, readonly) IKDataBinding *binding;
@property (nonatomic, readonly) IKJSDataItem *dataItem;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <IKDOMBindingControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) IKDOMElement *domElement;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) IKDOMBindingController *parent;
@property (nonatomic, readonly) BOOL shouldResolveData;
@property (readonly) Class superclass;

+ (id)parsedBindingForDOMElement:(id)arg1;

- (void).cxx_destruct;
- (void)_resolve;
- (id)appContext;
- (id)binding;
- (id)dataItem;
- (void)dataItem:(id)arg1 didChangePropertyPathWithString:(id)arg2;
- (id)delegate;
- (id)domElement;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 delegate:(id)arg3;
- (id)parent;
- (void)scheduleUpdateUsingPreUpdate:(id /* block */)arg1 update:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;
- (BOOL)shouldResolveData;
- (void)teardown;

@end
