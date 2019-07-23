/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUISingleNamedAssetCreator : NSObject {
    NSMutableArray *_generators;
    NSMutableArray *_names;
    unsigned int _primaryIndex;
    NSString *_primaryName;
    CUIMutableCommonAssetStorage *_store;
}

@property (retain) NSMutableArray *generators;
@property (retain) NSMutableArray *names;
@property unsigned int primaryIndex;
@property (retain) NSString *primaryName;
@property CUIMutableCommonAssetStorage *store;

- (void)_addImage:(struct CGImage { }*)arg1 withBaseKey:(id)arg2 name:(id)arg3;
- (void)_configureDefaultStorageParameters;
- (id)_defaultBaseKey;
- (BOOL)_distillNameEntries:(id*)arg1;
- (BOOL)_distillRenditions:(id*)arg1;
- (BOOL)_extractFlattenedImages:(id*)arg1;
- (void)_finalizeNameIdentifiers;
- (id)_flattenedImageBaseKey;
- (id)_generatorForName:(id)arg1;
- (id)_keyDataFromKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (const struct _renditionkeyfmt { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4[0]; }*)_keyFormat;
- (id)_radiosityImageBaseKey;
- (void)addFlattenedImage:(struct CGImage { }*)arg1 forLayerStackWithName:(id)arg2;
- (void)addImage:(struct CGImage { }*)arg1 withName:(id)arg2;
- (void)addLayerReference:(id)arg1 forImage:(struct CGImage { }*)arg2 toLayerStackWithName:(id)arg3;
- (void)addLayerStackWithSize:(struct CGSize { float x1; float x2; })arg1 stackData:(id)arg2 name:(id)arg3;
- (void)dealloc;
- (BOOL)distillAndSave:(id*)arg1;
- (id)generators;
- (id)initWithOutputURL:(id)arg1 versionString:(id)arg2;
- (id)names;
- (unsigned int)primaryIndex;
- (id)primaryName;
- (void)setGenerators:(id)arg1;
- (void)setNames:(id)arg1;
- (void)setPrimaryIndex:(unsigned int)arg1;
- (void)setPrimaryName:(id)arg1;
- (void)setStore:(id)arg1;
- (id)store;

@end
