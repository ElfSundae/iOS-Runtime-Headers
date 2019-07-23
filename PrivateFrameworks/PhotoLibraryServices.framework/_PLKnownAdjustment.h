/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface _PLKnownAdjustment : NSObject {
    NSString *_identifier;
    id /* block */ _settingsExtractionBlock;
    int _supportLevel;
    NSIndexSet *_supportedVersions;
}

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) id /* block */ settingsExtractionBlock;
@property (nonatomic) int supportLevel;
@property (nonatomic, copy) NSIndexSet *supportedVersions;

- (void)dealloc;
- (id)description;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (void)setSettingsExtractionBlock:(id /* block */)arg1;
- (void)setSupportLevel:(int)arg1;
- (void)setSupportedVersions:(id)arg1;
- (id /* block */)settingsExtractionBlock;
- (int)supportLevel;
- (id)supportedVersions;

@end
