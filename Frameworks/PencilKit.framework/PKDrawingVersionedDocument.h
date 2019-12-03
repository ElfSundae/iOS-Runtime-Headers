/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

@interface PKDrawingVersionedDocument : PKVersionedDocument {
    PKDrawing * _drawing;
    bool  _loadNonInkingStrokes;
}

@property (nonatomic, retain) PKDrawing *drawing;
@property (nonatomic) bool loadNonInkingStrokes;

+ (unsigned int)minimumSupportedVersion;
+ (unsigned int)serializationVersion;

- (void).cxx_destruct;
- (id)drawing;
- (id)initWithDrawing:(id)arg1;
- (bool)loadNonInkingStrokes;
- (bool)loadUnzippedData:(id)arg1;
- (void)mergeVersion:(unsigned int)arg1 fromData:(id)arg2;
- (unsigned long long)mergeWithDrawingVersionedDocument:(id)arg1;
- (id)serializeCurrentVersion:(unsigned int*)arg1;
- (void)setDrawing:(id)arg1;
- (void)setLoadNonInkingStrokes:(bool)arg1;

@end
