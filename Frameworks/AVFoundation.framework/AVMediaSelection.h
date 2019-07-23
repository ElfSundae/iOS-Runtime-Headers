/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVMediaSelection : NSObject <NSCopying, NSMutableCopying> {
    AVMediaSelectionInternal *_mediaSelection;
}

@property (nonatomic, readonly) AVAsset *asset;

- (id)_groupDictionaries;
- (id)_initWithAsset:(id)arg1;
- (id)_initWithAsset:(id)arg1 selectedMediaArray:(id)arg2;
- (id)_internal;
- (id)_propertyListForSelectedMediaOptionInMediaSelectionGroup:(id)arg1;
- (id)_selectedMediaArray;
- (id)asset;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)finalize;
- (unsigned int)hash;
- (id)initWithAsset:(id)arg1 propertyList:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)mediaSelectionCriteriaCanBeAppliedAutomaticallyToMediaSelectionGroup:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)propertyList;
- (id)selectedMediaOptionInMediaSelectionGroup:(id)arg1;

@end
