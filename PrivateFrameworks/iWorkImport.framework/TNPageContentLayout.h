/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TNPageContentLayout : TSDLayout {
    TNPageLayout *mPageLayout;
    unsigned int mPageNumber;
}

@property TNPageLayout *pageLayout;
@property (readonly) unsigned int pageNumber;

- (id)computeLayoutGeometry;
- (id)initWithPageLayout:(id)arg1;
- (unsigned int)pageCount;
- (id)pageLayout;
- (unsigned int)pageNumber;
- (Class)repClassOverride;
- (void)setPageLayout:(id)arg1;
- (void)validate;

@end
