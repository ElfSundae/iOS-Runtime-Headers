/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UISettingsGroup : _UISettings <NSFastEnumeration> {
    NSMutableArray *_internal_group;
    NSHashTable *_internal_groupObservers;
}

- (void).cxx_destruct;
- (void)_addInternalEntriesToArchiveDictionary:(id)arg1;
- (void)_completeInitByApplyingArchiveDictionary:(id)arg1;
- (void)_continueInitBySettingDefaultValues;
- (BOOL)_hasObservers;
- (void)_sendInsert:(id)arg1 atIndex:(unsigned int)arg2;
- (void)_sendMove:(id)arg1 fromIndex:(unsigned int)arg2 toIndex:(unsigned int)arg3;
- (void)_sendRemove:(id)arg1 atIndex:(unsigned int)arg2;
- (id)_startInit;
- (void)_startObservingPropertiesAndChildren;
- (void)_stopObservingPropertiesAndChildren;
- (void)addGroupObserver:(id)arg1;
- (void)addSettings:(id)arg1;
- (id)archiveDictionary;
- (BOOL)containsSettings:(id)arg1;
- (unsigned int)count;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (void)enumerateSettingsUsingBlock:(id /* block */)arg1;
- (unsigned int)indexOfSettings:(id)arg1;
- (void)insertSettings:(id)arg1 atIndex:(unsigned int)arg2;
- (void)moveSettings:(id)arg1 toIndex:(unsigned int)arg2;
- (void)moveSettingsAtIndex:(unsigned int)arg1 toIndex:(unsigned int)arg2;
- (void)removeGroupObserver:(id)arg1;
- (void)removeSettings:(id)arg1;
- (void)removeSettingsAtIndex:(unsigned int)arg1;
- (void)setValuesFromModel:(id)arg1;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;
- (id)settingsAtIndex:(unsigned int)arg1;
- (id)valueForUndefinedKey:(id)arg1;

@end
