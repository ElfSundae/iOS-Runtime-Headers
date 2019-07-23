/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DSelectionPath : TSCHSelectionPath {
    Class mSceneObjectClass;
    unsigned int mStyleIndex;
}

@property (nonatomic, readonly) Class sceneObjectClass;
@property (nonatomic, readonly) unsigned int styleIndex;

+ (id)selectionPathWithClass:(Class)arg1 styleIndex:(unsigned int)arg2 selectionPath:(id)arg3;
+ (id)selectionPathWithClass:(Class)arg1 styleIndex:(unsigned int)arg2 type:(id)arg3 name:(id)arg4 arguments:(id)arg5;

- (id)initWithClass:(Class)arg1 styleIndex:(unsigned int)arg2 type:(id)arg3 name:(id)arg4 arguments:(id)arg5;
- (Class)sceneObjectClass;
- (unsigned int)styleIndex;

@end
