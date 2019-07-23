/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSPersistentStoreCache : NSObject {
    unsigned long long  _capacity;
    id  _externalData;
    struct { long long x1; int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); } * _externalDataValueCallbacks;
    int  _lock;
    struct persistentStoreCacheFlags { 
        unsigned int _preserveToManyRelationships : 1; 
        unsigned int _reserved : 31; 
    }  _persistentStoreCacheFlags;
}

+ (void)initialize;

- (void)_createExternalDataDictWithValueCallbacks:(void*)arg1;
- (void)_forgetRowForObjectID:(id)arg1;
- (void)_registerRow:(id)arg1 forObjectID:(id)arg2 options:(unsigned int)arg3;
- (void)_registerToMany:(id)arg1 withOrderKeys:(id)arg2 forSourceObjectID:(id)arg3 forProperty:(id)arg4 options:(unsigned int)arg5 andTimestamp:(double)arg6;
- (id)ancillaryOrderKeysForSourceObjectID:(id)arg1 forProperty:(id)arg2 afterTimestamp:(double)arg3;
- (void)dealloc;
- (void)decrementRefCountForObjectID:(id)arg1;
- (void)forgetAllExternalData;
- (void)forgetRowForObjectID:(id)arg1;
- (void)growRegistrationCollectionTo:(unsigned long long)arg1;
- (void)incrementRefCountForObjectID:(id)arg1;
- (id)init;
- (id)initWithPersistentStore:(id)arg1;
- (id)initWithValueCallbacks:(void*)arg1 preserveToManyRelationships:(bool)arg2;
- (int)refCountForObjectID:(id)arg1;
- (void)registerRow:(id)arg1 forObjectID:(id)arg2;
- (void)registerRow:(id)arg1 forObjectID:(id)arg2 options:(unsigned int)arg3;
- (void)registerToMany:(id)arg1 withOrderKeys:(id)arg2 forSourceObjectID:(id)arg3 forProperty:(id)arg4 andTimestamp:(double)arg5;
- (void)registerToMany:(id)arg1 withOrderKeys:(id)arg2 forSourceObjectID:(id)arg3 forProperty:(id)arg4 options:(unsigned int)arg5 andTimestamp:(double)arg6;
- (id)rowForObjectID:(id)arg1;
- (id)rowForObjectID:(id)arg1 afterTimestamp:(double)arg2;
- (id)toManyForSourceObjectID:(id)arg1 forProperty:(id)arg2 afterTimestamp:(double)arg3;
- (id)toManyInformationForSourceObjectID:(id)arg1 forProperty:(id)arg2 afterTimestamp:(double)arg3;

@end
