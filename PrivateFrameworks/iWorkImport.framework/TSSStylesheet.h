/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSSStylesheet : TSPObject <TSKTransformableObject> {
    BOOL mBaseStyleSetUpdated;
    BOOL mCanCullStyles;
    TSSStylesheet *mChild;
    NSString *mDebugName;
    NSMutableDictionary *mIdentifierToStyleMap;
    BOOL mIsLocked;
    TSSStylesheet *mParent;
    TSURetainedPointerKeyDictionary *mParentToChildrenStyleMap;
    TSUMutableRetainedPointerSet *mStyles;
}

@property (nonatomic, readonly) BOOL baseStyleSetUpdated;
@property (nonatomic, readonly) NSSet *baseStyles;
@property (nonatomic) BOOL canCullStyles;
@property (nonatomic, readonly) TSSStylesheet *child;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) TSWPParagraphStyle *defaultPresenterNotesParagraphStyle;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL isLocked;
@property (nonatomic, readonly) TSSStylesheet *parent;
@property (nonatomic, readonly) NSSet *styles;
@property (readonly) Class superclass;

+ (id)p_presenterNotesListStyleIdentifierForListLabelType:(int)arg1;
+ (id)presenterNotesParagraphStyleIdentifier;
+ (id)variationMapForVaryingCharacterStyle:(id)arg1 overParagraphStyle:(id)arg2 withPropertyMap:(id)arg3;

- (id)_defaultCharacterStyleWasCreated:(BOOL*)arg1;
- (id)_defaultColumnStyleWasCreated:(BOOL*)arg1;
- (id)_defaultListStyleWasCreated:(BOOL*)arg1;
- (id)_defaultParagraphStyleWasCreated:(BOOL*)arg1;
- (id)_defaultStyleOfClass:(Class)arg1 withIdentifier:(id)arg2 wasCreated:(BOOL*)arg3 usingBlock:(id /* block */)arg4;
- (id)_hyperlinkStyleWasCreated:(BOOL*)arg1;
- (void)addDefaultPresenterNotesStylesIfAbsent;
- (id)addDuplicateOfStyle:(id)arg1 withIdentifier:(id)arg2;
- (void)addStyle:(id)arg1;
- (void)addStyle:(id)arg1 withIdentifier:(id)arg2;
- (void)addStyle:(id)arg1 withParent:(id)arg2;
- (void)addStyle:(id)arg1 withParent:(id)arg2 identifier:(id)arg3;
- (id)allPresenterNotesStyles;
- (BOOL)baseStyleSetUpdated;
- (id)baseStyles;
- (BOOL)canCullStyles;
- (BOOL)cascadedContainsStyle:(id)arg1;
- (id)cascadedStyleWithIdentifier:(id)arg1;
- (id)cascadedStyleWithIdentifier:(id)arg1 componentMask:(int)arg2;
- (id)cascadedStylesPassingTest:(id /* block */)arg1;
- (id)child;
- (id)childrenOfStyle:(id)arg1;
- (BOOL)containsStyle:(id)arg1;
- (void)dealloc;
- (id)defaultCharacterStyle;
- (id)defaultColumnStyle;
- (id)defaultListStyle;
- (id)defaultParagraphStyle;
- (id)defaultPresenterNotesParagraphStyle;
- (unsigned int)delayedArchivingPriority;
- (unsigned int)descendantCount;
- (void)didLoadChildObjectFromDocumentSupport:(id)arg1;
- (void)enumerateCascadedStylesUsingBlock:(id /* block */)arg1;
- (void)enumerateStylesUsingBlock:(id /* block */)arg1;
- (id)firstCascadedStylePassingTest:(id /* block */)arg1;
- (id)firstRootlessStyleOfClass:(Class)arg1 withOverridePropertyMap:(id)arg2;
- (id)headerAndFooterStyle;
- (id)hyperlinkStyle;
- (id)identifiedStyles;
- (id)identifiedStylesOfClass:(Class)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 canCullStyles:(BOOL)arg2;
- (BOOL)isAncestorOf:(id)arg1;
- (BOOL)isChildOf:(id)arg1;
- (BOOL)isDescendentOf:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isLocked;
- (BOOL)isParentOf:(id)arg1;
- (void)moveAllStylestoStylesheet:(id)arg1 stripIdentifiers:(BOOL)arg2;
- (void)moveStyle:(id)arg1 toStylesheet:(id)arg2 stripIdentifiers:(BOOL)arg3 overwriteIdentifiers:(BOOL)arg4;
- (id)namedStylesOfClass:(Class)arg1;
- (id)pVariationOfStyle:(id)arg1 propertyMap:(id)arg2 matchStyles:(id)arg3 context:(id)arg4;
- (void)p_addStyle:(id)arg1 withParent:(id)arg2 identifier:(id)arg3;
- (void)p_addStyleToParentChildren:(id)arg1;
- (struct set<long long, std::__1::less<long long>, std::__1::allocator<long long> > { struct __tree<long long, std::__1::less<long long>, std::__1::allocator<long long> > { struct __tree_node<long long, void *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<long long, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::less<long long> > { unsigned long x_3_2_1; } x_1_1_3; } x1; }*)p_allFilteredIdentifiersInArchive:(const struct StylesheetArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TSP::Reference> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; struct RepeatedPtrField<TSS::StylesheetArchive_IdentifiedStyleEntry> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; struct Reference {} *x7; struct RepeatedPtrField<TSS::StylesheetArchive_StyleChildrenEntry> { void **x_8_1_1; int x_8_1_2; int x_8_1_3; int x_8_1_4; } x8; bool x9; bool x10; }*)arg1 unarchiver:(id)arg2;
- (id)p_boxedLabelTypesForNotesListStyles;
- (id)p_defaultPresenterNotesListStylePropertyMapForListLabelType:(int)arg1;
- (id)p_defaultPresenterNotesParagraphStylePropertyMap;
- (id)p_defaultPresenterNotesParagraphStyleWithContext:(id)arg1;
- (id)p_newDefaultPresenterNotesListStyleWithContext:(id)arg1 forListLabelType:(int)arg2;
- (void)p_removeStyle:(id)arg1;
- (void)p_removeStyleFromParentChildren:(id)arg1;
- (void)p_setIdentifier:(id)arg1 ofStyle:(id)arg2;
- (void)p_setParent:(id)arg1 ofStyle:(id)arg2;
- (BOOL)p_shouldDoDOLCForStyle:(id)arg1;
- (id)p_stylesPassingTest:(id /* block */)arg1 cascade:(BOOL)arg2;
- (void)p_upgradeDefaultPresenterNotesStylesResetExisting:(BOOL)arg1;
- (id)packageLocator;
- (id)parent;
- (void)removeStyle:(id)arg1;
- (void)resetBaseStyleSetUpdatedFlag;
- (id)rootAncestor;
- (void)saveStyles:(id)arg1 toArchiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setCanCullStyles:(BOOL)arg1;
- (void)setIdentifier:(id)arg1 ofStyle:(id)arg2;
- (void)setIsLocked:(BOOL)arg1;
- (void)setParent:(id)arg1;
- (void)setParent:(id)arg1 ofStyle:(id)arg2;
- (void)setParent:(id)arg1 withParentStyleMap:(struct __CFDictionary { }*)arg2;
- (BOOL)shouldDelayArchiving;
- (id)styleWithIdentifier:(id)arg1;
- (id)styleWithIdentifier:(id)arg1 componentMask:(int)arg2;
- (id)styles;
- (id)stylesOfClass:(Class)arg1;
- (id)stylesPassingTest:(id /* block */)arg1;
- (id)stylesWithName:(id)arg1;
- (void)unlockStylesheetForDurationOfBlock:(id /* block */)arg1;
- (id)unusedStyleIdentifierWithPackageString:(id)arg1 styleDescriptor:(id)arg2 contentTag:(id)arg3;
- (void)upgradeDefaultPresenterNotesStyles;
- (id)variationOfCharacterStyle:(id)arg1 paragraphStyle:(id)arg2 propertyMap:(id)arg3;
- (id)variationOfStyle:(id)arg1 exactPropertyMap:(id)arg2;
- (id)variationOfStyle:(id)arg1 propertyMap:(id)arg2;
- (id)variationOfStyle:(id)arg1 propertyMap:(id)arg2 context:(id)arg3;
- (id)variationOfStyle:(id)arg1 propertyMap:(id)arg2 matchStyles:(id)arg3 context:(id)arg4;
- (id)variationOfStyleMatchingStyle:(id)arg1 withNewParentStyle:(id)arg2;

@end
