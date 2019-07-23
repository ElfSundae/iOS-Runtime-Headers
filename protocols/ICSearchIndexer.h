/* Generated by RuntimeBrowser.
 */

@protocol ICSearchIndexer <ICSearchQueryable, ICSearchAsyncQueryable, ICSearchIndexerContextDelegate, NSObject>

@required

- (void)deleteIndex;
- (ICSearchIndexerContext *)indexerContext;
- (void)reprocessAllObjects;
- (void)resumeIndexing;
- (void)startProcessingPendingChanges;
- (void)synchronouslyProcessAllObjects;
- (void)wrapUpIndexingIfNecessary;

@end
