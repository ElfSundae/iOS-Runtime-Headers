/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UICollectionViewCompositionalLayoutConfiguration : NSObject <NSCopying, _UICollectionViewCompositionalLayoutConfiguration> {
    NSArray * _boundarySupplementaryItems;
    double  _interSectionSpacing;
    long long  _safeAreaReference;
    long long  _scrollDirection;
}

@property (nonatomic, copy) NSArray *boundarySupplementaryItems;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double interSectionSpacing;
@property (getter=_safeAreaReference, setter=_setSafeAreaReference:, nonatomic) long long safeAreaReference;
@property (nonatomic) long long scrollDirection;
@property (readonly) Class superclass;

+ (id)defaultConfiguration;

- (void).cxx_destruct;
- (long long)_safeAreaReference;
- (void)_setSafeAreaReference:(long long)arg1;
- (id)boundarySupplementaryItems;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)differencesFromConfiguration:(id)arg1;
- (id)initWithScrollDirection:(long long)arg1 interSectionSpacing:(double)arg2 boundarySupplememtaryItems:(id)arg3 safeAreaReference:(long long)arg4;
- (double)interSectionSpacing;
- (long long)scrollDirection;
- (void)setBoundarySupplementaryItems:(id)arg1;
- (void)setInterSectionSpacing:(double)arg1;
- (void)setScrollDirection:(long long)arg1;

@end