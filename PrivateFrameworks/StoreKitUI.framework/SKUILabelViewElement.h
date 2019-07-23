/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUILabelViewElement : SKUIViewElement <SKUILinkHandler> {
    int _badgePlacement;
    NSArray *_badges;
    BOOL _containsLinks;
    NSMutableDictionary *_domObjectsToViewElements;
    int _labelViewStyle;
    int _linkCounter;
    <SKUILinkHandler> *_linkDelegate;
    NSMutableDictionary *_linkToViewButtonElements;
    NSString *_moreButtonTitle;
    int _numberOfLines;
    SKUIViewElementText *_text;
    NSArray *_trailingBadges;
    IKDOMElement *_xml;
}

@property (nonatomic, readonly) int badgePlacement;
@property (nonatomic, readonly) NSArray *badges;
@property (nonatomic) BOOL containsLinks;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) int labelViewStyle;
@property (nonatomic) <SKUILinkHandler> *linkDelegate;
@property (nonatomic, readonly) NSString *moreButtonTitle;
@property (nonatomic, readonly) int numberOfLines;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SKUIViewElementText *text;
@property (nonatomic, readonly) NSArray *trailingBadges;

+ (BOOL)shouldParseChildDOMElements;

- (void).cxx_destruct;
- (void)_createText:(id)arg1;
- (id)_stringFromDateElement:(id)arg1;
- (id)_stringFromDurationElement:(id)arg1;
- (id)_stringFromNumberElement:(id)arg1;
- (void)_walkDOM:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)applyUpdatesWithElement:(id)arg1;
- (int)badgePlacement;
- (id)badges;
- (BOOL)containsLinks;
- (void)dealloc;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (int)labelViewStyle;
- (id)linkDelegate;
- (void)linkTapped:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)moreButtonTitle;
- (int)numberOfLines;
- (int)pageComponentType;
- (void)setContainsLinks:(BOOL)arg1;
- (void)setLinkDelegate:(id)arg1;
- (id)text;
- (id)trailingBadges;
- (id)uniquingMapKey;

@end
