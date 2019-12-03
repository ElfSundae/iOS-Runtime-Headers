/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface WFParameter : NSObject {
    bool  _allowsMultipleValues;
    id  _defaultSerializedRepresentation;
    NSSet * _defaultSupportedVariableTypes;
    NSDictionary * _definition;
    NSSet * _disallowedVariableTypes;
    bool  _doNotLocalizeValues;
    NSHashTable * _eventObservers;
    bool  _hidden;
    bool  _insideWorkflow;
    NSString * _intentSlotName;
    NSString * _key;
    NSString * _localizedDescription;
    NSString * _localizedLabel;
    NSString * _localizedPlaceholder;
    WFResourceManager * _resourceManager;
    bool  _shouldAlignLabels;
    NSSet * _supportedVariableTypes;
    bool  _supportsImportQuestions;
}

@property (nonatomic, readonly) bool allowsMultipleValues;
@property (nonatomic, readonly, copy) id defaultSerializedRepresentation;
@property (nonatomic, readonly) NSSet *defaultSupportedVariableTypes;
@property (nonatomic, readonly, copy) NSDictionary *definition;
@property (nonatomic, readonly) NSSet *disallowedVariableTypes;
@property (nonatomic, readonly) bool doNotLocalizeValues;
@property (nonatomic, readonly) NSHashTable *eventObservers;
@property (getter=isHidden, nonatomic) bool hidden;
@property (getter=isInsideWorkflow, nonatomic, readonly) bool insideWorkflow;
@property (nonatomic, readonly) NSString *intentSlotName;
@property (nonatomic, readonly, copy) NSString *key;
@property (nonatomic, readonly, copy) NSString *localizedDescription;
@property (nonatomic, readonly, copy) NSString *localizedLabel;
@property (nonatomic, copy) NSString *localizedPlaceholder;
@property (nonatomic, readonly) WFResourceManager *resourceManager;
@property (nonatomic, readonly) bool shouldAlignLabels;
@property (nonatomic, readonly) NSSet *supportedVariableTypes;
@property (nonatomic, readonly) bool supportsImportQuestions;

+ (id)allInsertableVariableTypes;
+ (id)parameterWithDefinition:(id)arg1;
+ (id)referencedActionResourceClasses;

- (void).cxx_destruct;
- (void)addEventObserver:(id)arg1;
- (bool)allowsMultipleValues;
- (void)attributesDidChange;
- (id)defaultSerializedRepresentation;
- (void)defaultSerializedRepresentationDidChange;
- (id)defaultSupportedVariableTypes;
- (id)definition;
- (id)disallowedVariableTypes;
- (bool)doNotLocalizeValues;
- (id)eventObservers;
- (id)initWithDefinition:(id)arg1;
- (id)intentSlotName;
- (bool)isHidden;
- (bool)isInsideWorkflow;
- (id)key;
- (id)localizedDescription;
- (id)localizedLabel;
- (id)localizedPlaceholder;
- (Class)multipleStateClass;
- (bool)parameterStateIsValid:(id)arg1;
- (void)removeEventObserver:(id)arg1;
- (id)resourceManager;
- (void)setActionResources:(id)arg1;
- (void)setHidden:(bool)arg1;
- (void)setLocalizedPlaceholder:(id)arg1;
- (bool)shouldAlignLabels;
- (Class)singleStateClass;
- (Class)stateClass;
- (void)stateValidityCriteriaDidChange;
- (id)supportedVariableTypes;
- (bool)supportsImportQuestions;
- (void)wasAddedToWorkflow;
- (void)wasRemovedFromWorkflow;

@end