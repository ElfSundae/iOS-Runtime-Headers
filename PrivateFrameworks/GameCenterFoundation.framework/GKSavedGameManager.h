/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKSavedGameManager : NSObject {
    NSMutableDictionary *_documents;
    NSMutableArray *_fetchHandlers;
    NSMetadataQuery *_query;
    int _queryDisableCount;
    NSURL *_ubiquityURL;
    BOOL _ubiquityUnavailable;
}

@property (nonatomic, retain) NSMutableDictionary *documents;
@property (nonatomic, retain) NSMutableArray *fetchHandlers;
@property (nonatomic, retain) NSMetadataQuery *query;
@property (nonatomic) int queryDisableCount;
@property (nonatomic, retain) NSURL *ubiquityURL;
@property (nonatomic) BOOL ubiquityUnavailable;

+ (id)sharedManager;

- (void)addDocument:(id)arg1;
- (void)callFetchHandlers;
- (id)currentDocumentWithName:(id)arg1;
- (void)dealloc;
- (void)deleteSavedGamesWithName:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)disableQueryUpdates;
- (void)documentConflictStateChanged:(id)arg1;
- (id)documentForSavedGame:(id)arg1;
- (void)documentModified:(id)arg1;
- (id)documentToSaveWithName:(id)arg1;
- (id)documents;
- (void)enableQueryUpdates;
- (id)errorForNoUbiquity;
- (id)fetchHandlers;
- (void)fetchSavedGamesWithCompletionHandler:(id /* block */)arg1;
- (id)fileURLForName:(id)arg1;
- (id)init;
- (void)loadDataForSavedGame:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)query;
- (void)queryDidFinishGathering:(id)arg1;
- (void)queryDidUpdate:(id)arg1;
- (int)queryDisableCount;
- (void)removeDocument:(id)arg1;
- (void)resolveConflictingSavedGames:(id)arg1 withData:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)saveGameData:(id)arg1 withName:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)savedGameForDocument:(id)arg1;
- (id)savedGameForDocuments:(id)arg1;
- (id)savedGamesWithName:(id)arg1;
- (void)setDocuments:(id)arg1;
- (void)setFetchHandlers:(id)arg1;
- (void)setQuery:(id)arg1;
- (void)setQueryDisableCount:(int)arg1;
- (void)setUbiquityURL:(id)arg1;
- (void)setUbiquityUnavailable:(BOOL)arg1;
- (void)setupUbiquity;
- (void)startSavedGameQuery;
- (void)ubiquityAvailabilityChanged:(id)arg1;
- (id)ubiquityURL;
- (BOOL)ubiquityUnavailable;
- (void)updateSavedGameDocumentsForQueryWithHandler:(id /* block */)arg1;

@end
