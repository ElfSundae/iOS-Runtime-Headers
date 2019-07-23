/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicCloudGeniusMixPlaybackContext : MusicQueryPlaybackContext <MPShuffleControllerDataSource, MusicGeniusMixQueueFeederDataSource> {
    BOOL  _hasValidQueryItems;
    MPMediaPlaylist * _mixPlaylist;
    NSArray * _queryItems;
    MPMediaItem * _requiredInitialMediaItem;
    MPShuffleController * _shuffleController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) MPMediaPlaylist *mixPlaylist;
@property (nonatomic, retain) MPMediaItem *requiredInitialMediaItem;
@property (readonly) Class superclass;

+ (Class)queueFeederClass;

- (void).cxx_destruct;
- (void)_musicCloudGeniusMixPlaybackContext_mediaLibraryDidChangeNotification:(id)arg1;
- (id)_queryItems;
- (void)dealloc;
- (unsigned int)geniusMixQueueFeeder:(id)arg1 indexOfMediaItem:(id)arg2;
- (id)geniusMixQueueFeeder:(id)arg1 mediaItemAtIndex:(unsigned int)arg2;
- (id)geniusMixQueueFeeder:(id)arg1 queryForMediaItemAtIndex:(unsigned int)arg2;
- (unsigned int)geniusMixQueueFeederMediaItemCount:(id)arg1;
- (id)initWithGeniusMixPlaylist:(id)arg1 requiredInitialMediaItem:(id)arg2 error:(id*)arg3;
- (unsigned int)itemCountForShuffleController:(id)arg1;
- (id)mixPlaylist;
- (id)requiredInitialMediaItem;
- (void)setRequiredInitialMediaItem:(id)arg1;
- (unsigned int)shuffleController:(id)arg1 countOfItemIdentifier:(id)arg2 withMaximumCount:(unsigned int)arg3;
- (id)shuffleController:(id)arg1 identifierForItemAtIndex:(unsigned int)arg2;

@end
