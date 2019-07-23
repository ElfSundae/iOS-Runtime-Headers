/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNPropertyPostalAddressCell : CNPropertySimpleTransportCell {
    UIImageView * _mapImageView;
    BOOL  _shouldUseMapTiles;
}

@property (nonatomic, retain) UIImageView *mapImageView;
@property (nonatomic) BOOL shouldUseMapTiles;

+ (id)defaultMapImage;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (id)mapImageView;
- (void)mapSnapshotWithPlacemark:(id)arg1;
- (void)prepareForReuse;
- (void)setMapImage:(id)arg1;
- (void)setMapImageView:(id)arg1;
- (void)setProperty:(id)arg1;
- (void)setShouldUseMapTiles:(BOOL)arg1;
- (BOOL)shouldUseMapTiles;
- (void)tapGesture:(id)arg1;
- (id)variableConstraints;

@end
