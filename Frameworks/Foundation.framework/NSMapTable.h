/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSMapTable : NSObject <MPCSupportedCommands, NSCopying, NSFastEnumeration, NSSecureCoding, SGHeaderCollection>

@property (readonly) unsigned long long count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSPointerFunctions *keyPointerFunctions;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool tsp_isWeakObjectMapTable;
@property (readonly, copy) NSPointerFunctions *valuePointerFunctions;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)mapTableWithKeyOptions:(unsigned long long)arg1 valueOptions:(unsigned long long)arg2;
+ (id)mapTableWithStrongToStrongObjects;
+ (id)mapTableWithStrongToWeakObjects;
+ (id)mapTableWithWeakToStrongObjects;
+ (id)mapTableWithWeakToWeakObjects;
+ (id)strongToStrongObjectsMapTable;
+ (id)strongToWeakObjectsMapTable;
+ (bool)supportsSecureCoding;
+ (id)weakToStrongObjectsMapTable;
+ (id)weakToWeakObjectsMapTable;

- (unsigned long long)__capacity;
- (id)allKeys;
- (id)allValues;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)enumerator;
- (void*)existingItemForSetItem:(const void*)arg1 forAbsentKey:(const void*)arg2;
- (unsigned long long)getKeys:(const void**)arg1 values:(const void**)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeyOptions:(unsigned long long)arg1 valueOptions:(unsigned long long)arg2 capacity:(unsigned long long)arg3;
- (id)initWithKeyPointerFunctions:(id)arg1 valuePointerFunctions:(id)arg2 capacity:(unsigned long long)arg3;
- (id)keyEnumerator;
- (id)keyPointerFunctions;
- (bool)mapMember:(const void*)arg1 originalKey:(const void**)arg2 value:(const void**)arg3;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)mutableDictionary;
- (id)objectEnumerator;
- (id)objectForKey:(id)arg1;
- (void)removeAllItems;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)replaceItem:(const void*)arg1 forExistingKey:(const void*)arg2;
- (void)setItem:(const void*)arg1 forAbsentKey:(const void*)arg2;
- (void)setItem:(const void*)arg1 forKey:(const void*)arg2;
- (void)setItem:(const void*)arg1 forKnownAbsentKey:(const void*)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)valuePointerFunctions;

// Image: /System/Library/Frameworks/ClassKit.framework/ClassKit

- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

- (id)allKeys;

// Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard

- (void)bs_each:(id /* block */)arg1;
- (id)bs_filter:(id /* block */)arg1;
- (id)bs_safeObjectForKey:(id)arg1 ofType:(Class)arg2;
- (void)bs_setSafeObject:(id)arg1 forKey:(id)arg2;
- (id)bs_takeObjectForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial

+ (id)bw_strongVideoRequirementToStrongObjectsMapTable;

// Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals

+ (id)sg_headerKeyFunctions;
+ (id)sg_headerValueFunctions;

- (void)sg_addEntriesFromHeadersDictionary:(id)arg1;
- (id)sg_firstHeaderForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation

- (void)_gkEnumerateKeysAndObjectsUsingBlock:(id /* block */)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

- (id)allKeys;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

- (struct _MRMediaRemoteCommandInfo { }*)commandInfoForCommand:(unsigned int)arg1;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

- (id)fc_objectsForKeys:(id)arg1;

// Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport

- (id)tsu_allKeys;
- (id)tsu_noCopyDictionaryRepresentation;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

+ (id)pk_weakPointerPersonalityToStrongObjectsMapTable;

// Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading

+ (id)newTspStrongObjectsMapTable;
+ (id)newTspWeakObjectsMapTable;

- (void)enumerateIdentifiersAndObjectsUsingBlock:(id /* block */)arg1;
- (void)enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)tsp_objectForIdentifier:(long long)arg1;
- (void)tsp_removeObjectForIdentifier:(long long)arg1;
- (void)tsp_setObject:(id)arg1 forIdentifier:(long long)arg2;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport

+ (id)newTspStrongObjectsMapTable;
+ (id)newTspStrongObjectsMapTableWithCapacity:(unsigned long long)arg1;
+ (id)newTspWeakObjectsMapTable;
+ (id)newTspWeakObjectsMapTableWithCapacity:(unsigned long long)arg1;

- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)tsp_enumerateIdentifiersAndObjectsUsingBlock:(id /* block */)arg1;
- (void)tsp_enumerateObjectsUsingBlock:(id /* block */)arg1;
- (bool)tsp_isWeakObjectMapTable;
- (id)tsp_objectForIdentifier:(long long)arg1;
- (void)tsp_removeObjectForIdentifier:(long long)arg1;
- (void)tsp_setObject:(id)arg1 forIdentifier:(long long)arg2;
- (id)tsu_allKeys;
- (id)tsu_allObjects;
- (void)tsu_enumerateKeysAndObjectsUsingBlock:(id /* block */)arg1;

@end
