/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKViewElement : NSObject <IKAppDocumentStyleChangeObserving, IKDOMBindingControllerDelegate, IKStyleableElement> {
    NSString * _accessibilityText;
    NSMutableSet * _activeSingularEvents;
    IKAppDocument * _appDocument;
    NSDictionary * _attributes;
    NSString * _autoHighlightIdentifier;
    IKDOMBindingController * _bindingController;
    BOOL  _didUpdateAutoHighlightIdentifier;
    BOOL  _disabled;
    NSString * _elementID;
    NSString * _elementName;
    unsigned int  _elementType;
    NSArray * _features;
    BOOL  _impressionable;
    NSDictionary * _impressionableAttributes;
    NSString * _itmlID;
    NSMutableDictionary * _metadataDict;
    IKViewElement * _parent;
    <IKStyleableElement> * _parentStyleableElement;
    BOOL  _partOfPrototype;
    NSDictionary * _prototypesByType;
    IKViewElement * _prototypesElement;
    BOOL  _prototypesUpdated;
    IKViewElementStyleComposer * _styleComposer;
    NSArray * _unfilteredChildren;
    IKElementChangeSet * _unfilteredChildrenChangeset;
    unsigned int  _updateType;
    NSArray * _visibleChildren;
}

@property (nonatomic, readonly, copy) NSString *accessibilityText;
@property (nonatomic, retain) NSMutableSet *activeSingularEvents;
@property (nonatomic) IKAppDocument *appDocument;
@property (nonatomic, readonly, retain) NSDictionary *attributes;
@property (nonatomic, copy) NSString *autoHighlightIdentifier;
@property (nonatomic, readonly) IKDOMBindingController *bindingController;
@property (nonatomic, readonly, retain) NSArray *children;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didUpdateAutoHighlightIdentifier;
@property (getter=isDisabled, nonatomic) BOOL disabled;
@property (nonatomic, readonly, copy) NSString *elementID;
@property (nonatomic, readonly, copy) NSString *elementName;
@property (nonatomic, readonly) unsigned int elementType;
@property (nonatomic, readonly) SKUIEntityProviderListViewElement *entityProviderList;
@property (nonatomic, readonly, copy) NSArray *features;
@property (readonly) unsigned int hash;
@property (getter=isHidden, nonatomic, readonly) BOOL hidden;
@property (getter=isImpressionable, nonatomic) BOOL impressionable;
@property (nonatomic, readonly) NSDictionary *impressionableAttributes;
@property (nonatomic, readonly, retain) NSString *itmlID;
@property (nonatomic, retain) NSMutableDictionary *metadataDict;
@property (nonatomic) IKViewElement *parent;
@property (nonatomic, readonly) <IKStyleableElement> *parentStyleableElement;
@property (getter=isPartOfPrototype, nonatomic, readonly) BOOL partOfPrototype;
@property (nonatomic, readonly) NSDictionary *prototypesByType;
@property (nonatomic, readonly) BOOL prototypesUpdated;
@property (nonatomic, readonly, retain) IKViewElementStyle *style;
@property (nonatomic, retain) IKViewElementStyleComposer *styleComposer;
@property (readonly) Class superclass;
@property (nonatomic, readonly, retain) NSArray *unfilteredChildren;
@property (nonatomic, readonly) IKElementChangeSet *unfilteredChildrenChangeset;
@property (nonatomic) unsigned int updateType;

// Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit

+ (id)_prototypesByTypeForDOMElement:(id)arg1 prototypesDOMElement:(id*)arg2;
+ (unsigned int)evaluateElementUpdateTypeAndReset:(id)arg1;
+ (BOOL)shouldParseChildDOMElement:(id)arg1;
+ (BOOL)shouldParseChildDOMElements;
+ (id)supportedFeatures;
+ (void)willParseDOMElement:(id)arg1;

- (void).cxx_destruct;
- (void)_resetUpdates;
- (void)_setAppDocument:(id)arg1;
- (void)_updateSubtreeWithElement:(id)arg1;
- (id)accessibilityText;
- (id)activeSingularEvents;
- (id)appDocument;
- (void)appDocumentDidMarkStylesDirty;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)attributes;
- (id)autoHighlightIdentifier;
- (id)bindingController;
- (id)childElementWithType:(unsigned int)arg1;
- (id)childElementsWithType:(unsigned int)arg1;
- (id)childImageElementWithType:(unsigned int)arg1;
- (id)childTextElementWithStyle:(unsigned int)arg1;
- (id)children;
- (void)configureUpdatesWithElement:(id)arg1;
- (void)dealloc;
- (id)debugDescription;
- (BOOL)didUpdateAutoHighlightIdentifier;
- (void)dispatchEvent:(id)arg1 eventAttribute:(id)arg2 canBubble:(BOOL)arg3 isCancelable:(BOOL)arg4 extraInfo:(id)arg5 completionBlock:(id /* block */)arg6;
- (void)dispatchEventOfType:(unsigned int)arg1 canBubble:(BOOL)arg2 isCancelable:(BOOL)arg3 extraInfo:(id)arg4 completionBlock:(id /* block */)arg5;
- (void)disperseUpdateType:(unsigned int)arg1;
- (id)elementID;
- (id)elementName;
- (unsigned int)elementType;
- (id)features;
- (id)impressionableAttributes;
- (id)init;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)initWithPrototypeElement:(id)arg1 parent:(id)arg2 appDataItem:(id)arg3;
- (BOOL)isDisabled;
- (BOOL)isHidden;
- (BOOL)isImpressionable;
- (BOOL)isPartOfPrototype;
- (id)itmlID;
- (id)metadataDict;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)parent;
- (id)parentStyleableElement;
- (void)propagateUpdateType:(unsigned int)arg1;
- (id)prototypesByType;
- (BOOL)prototypesUpdated;
- (void)resetProperty:(unsigned int)arg1;
- (void)retrievePresentationDocument:(id /* block */)arg1;
- (void)setActiveSingularEvents:(id)arg1;
- (void)setAppDocument:(id)arg1;
- (void)setAutoHighlightIdentifier:(id)arg1;
- (void)setDidUpdateAutoHighlightIdentifier:(BOOL)arg1;
- (void)setDisabled:(BOOL)arg1;
- (void)setImpressionable:(BOOL)arg1;
- (void)setMetadataDict:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setParent:(id)arg1;
- (void)setStyleComposer:(id)arg1;
- (void)setUpdateType:(unsigned int)arg1;
- (BOOL)shouldResolveDataForDOMBindingController:(id)arg1;
- (id)style;
- (id)styleComposer;
- (id)unfilteredChildren;
- (id)unfilteredChildrenChangeset;
- (unsigned int)updateType;

// Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI

- (id)entityProviderList;

// Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit

- (id)itemElementsOfType:(unsigned int)arg1;
- (id)tv_associatedViewElement;
- (id)tv_associatedViewElementWithDefaultClass:(Class)arg1;
- (unsigned int)tv_elementType;

// Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI

- (unsigned int)vs_elementType;
- (id)vs_itemElementsOfType:(unsigned int)arg1;

@end
