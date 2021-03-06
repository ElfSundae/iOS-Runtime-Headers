/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
 */

@interface MAElement : NSObject <NSCopying> {
    unsigned short  _domain;
    MAGraphReference * _graphReference;
    unsigned int  _identifier;
    NSString * _label;
    NSMutableDictionary * _properties;
    float  _weight;
}

@property (nonatomic, readonly) unsigned short domain;
@property (nonatomic, readonly) MAGraph *graph;
@property (nonatomic, retain) MAGraphReference *graphReference;
@property (nonatomic) unsigned int identifier;
@property (readonly) bool isAbstract;
@property (nonatomic, readonly, copy) NSString *label;
@property (nonatomic) float weight;

+ (bool)areProperties:(id)arg1 similarToOtherProperties:(id)arg2;

- (void).cxx_destruct;
- (unsigned long long)_memoryFootprint:(id)arg1;
- (void)_removeAllLocalProperties;
- (void)_removeAllPersistentStoreProperties;
- (void)_removePersistentStorePropertyForKey:(id)arg1;
- (void)_setLocalProperties:(id)arg1;
- (void)_setPersistentStoreProperties:(id)arg1;
- (void)_setPersistentStorePropertyValue:(id)arg1 forKey:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned short)domain;
- (void)enumeratePropertiesUsingBlock:(id /* block */)arg1;
- (id)graph;
- (id)graphReference;
- (bool)hasEqualPropertiesToElement:(id)arg1;
- (bool)hasProperties:(id)arg1;
- (bool)hasPropertiesForKeys:(id)arg1;
- (bool)hasPropertyForKey:(id)arg1;
- (bool)hasPropertyForKey:(id)arg1 kindOfClass:(Class)arg2;
- (unsigned long long)hash;
- (unsigned int)identifier;
- (id)init;
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3;
- (bool)isAbstract;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToElement:(id)arg1;
- (bool)isNode;
- (id)label;
- (bool)matchesElement:(id)arg1 includingProperties:(bool)arg2;
- (void)mergeProperties:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (unsigned long long)propertiesCount;
- (id)propertiesVisualStringForKeys:(id)arg1;
- (id)propertyDictionary;
- (id)propertyForKey:(id)arg1;
- (id)propertyForKey:(id)arg1 kindOfClass:(Class)arg2;
- (id)propertyKeys;
- (void)removeAllProperties;
- (void)removePropertyForKey:(id)arg1;
- (void)setGraphReference:(id)arg1;
- (void)setIdentifier:(unsigned int)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setProperties:(id)arg1;
- (void)setPropertyValue:(id)arg1 forKey:(id)arg2;
- (void)setWeight:(float)arg1;
- (id)shortDescription;
- (id)visualString;
- (float)weight;

@end
