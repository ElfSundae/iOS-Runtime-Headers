/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@interface MCDAlbumsViewController : MCDTableViewController {
    NSString * _albumSortSetting;
    BOOL  _alwaysShowRecents;
    NSString * _artistAlbumSortSetting;
    BOOL  _artistMode;
    MPMediaPredicate * _compilationPredicate;
}

@property (nonatomic, retain) NSString *albumSortSetting;
@property (nonatomic) BOOL alwaysShowRecents;
@property (nonatomic, retain) NSString *artistAlbumSortSetting;
@property (getter=isArtistMode, nonatomic) BOOL artistMode;

+ (id)actionCellConfigurationClassesForLocation:(unsigned int)arg1;

- (void).cxx_destruct;
- (void)_limitedUIDidChange;
- (void)_updateQuery;
- (void)_userDefaultsDidChange:(id)arg1;
- (id)albumSortSetting;
- (BOOL)alwaysShowRecents;
- (id)artistAlbumSortSetting;
- (id)initWithDataSource:(id)arg1 cellConfigurationClass:(Class)arg2;
- (BOOL)isArtistMode;
- (void)reloadData;
- (void)setAlbumSortSetting:(id)arg1;
- (void)setAlwaysShowRecents:(BOOL)arg1;
- (void)setArtistAlbumSortSetting:(id)arg1;
- (void)setArtistMode:(BOOL)arg1;
- (void)shouldShowHeadersAndFooters:(BOOL)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (void)viewDidLoad;

@end
