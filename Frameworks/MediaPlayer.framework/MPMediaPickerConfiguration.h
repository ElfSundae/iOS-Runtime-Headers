/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaPickerConfiguration : NSObject <NSSecureCoding> {
    bool  _allowsPickingMultipleItems;
    unsigned long long  _mediaTypes;
    bool  _pickingForExternalPlayer;
    bool  _picksSingleCollectionEntity;
    MPPlaybackArchiveConfiguration * _playbackArchiveConfiguration;
    NSString * _prompt;
    long long  _selectionMode;
    bool  _showsCatalogContent;
    bool  _showsCloudItems;
    bool  _showsItemsWithProtectedAssets;
    bool  _showsLibraryContent;
    NSArray * _typeIdentifiers;
    unsigned int  _watchCompatibilityVersion;
}

@property (nonatomic) bool allowsPickingMultipleItems;
@property (nonatomic) unsigned long long mediaTypes;
@property (nonatomic) bool pickingForExternalPlayer;
@property (nonatomic) bool picksSingleCollectionEntity;
@property (nonatomic, retain) MPPlaybackArchiveConfiguration *playbackArchiveConfiguration;
@property (nonatomic, copy) NSString *prompt;
@property (nonatomic) long long selectionMode;
@property (nonatomic) bool showsCatalogContent;
@property (nonatomic) bool showsCloudItems;
@property (nonatomic) bool showsItemsWithProtectedAssets;
@property (nonatomic) bool showsLibraryContent;
@property (nonatomic, copy) NSArray *typeIdentifiers;
@property (nonatomic) unsigned int watchCompatibilityVersion;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)allowsPickingMultipleItems;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)mediaTypes;
- (bool)pickingForExternalPlayer;
- (bool)picksSingleCollectionEntity;
- (id)playbackArchiveConfiguration;
- (id)prompt;
- (long long)selectionMode;
- (void)setAllowsPickingMultipleItems:(bool)arg1;
- (void)setMediaTypes:(unsigned long long)arg1;
- (void)setPickingForExternalPlayer:(bool)arg1;
- (void)setPicksSingleCollectionEntity:(bool)arg1;
- (void)setPlaybackArchiveConfiguration:(id)arg1;
- (void)setPrompt:(id)arg1;
- (void)setSelectionMode:(long long)arg1;
- (void)setShowsCatalogContent:(bool)arg1;
- (void)setShowsCloudItems:(bool)arg1;
- (void)setShowsItemsWithProtectedAssets:(bool)arg1;
- (void)setShowsLibraryContent:(bool)arg1;
- (void)setTypeIdentifiers:(id)arg1;
- (void)setWatchCompatibilityVersion:(unsigned int)arg1;
- (bool)showsCatalogContent;
- (bool)showsCloudItems;
- (bool)showsItemsWithProtectedAssets;
- (bool)showsLibraryContent;
- (id)typeIdentifiers;
- (unsigned int)watchCompatibilityVersion;

@end
