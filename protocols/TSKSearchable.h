/* Generated by RuntimeBrowser.
 */

@protocol TSKSearchable <TSKModel>

@optional

- (TSKReplaceAllChildCommand *)childCommandForReplaceAllCommand:(TSKReplaceAllCommand *)arg1;
- (void)continueAnnotationSearch:(TSKSearch *)arg1;
- (void)continueSearch:(TSKSearch *)arg1;
- (TSKSearch *)searchForAnnotationsWithHitBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <TSKSearchReference> *, void*
- (TSKSearch *)searchForString:(void *)arg1 options:(void *)arg2 searchCanvasDelegate:(void *)arg3 onHit:(void *)arg4; // needs 4 arg types, found 9: NSString *, unsigned int, <TSKSearchCanvasDelegate> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <TSKSearchReference> *, void*

@end
