/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUITemplateCollectionViewCell : SAUITemplateBaseItem <SAUITemplateMonogrammable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) SAUIImageResource *image;
@property (nonatomic, copy) NSArray *monogramName;
@property (nonatomic) BOOL sizeToFitImage;
@property (nonatomic, copy) NSString *subtitleText;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *titleText;

+ (id)collectionViewCell;
+ (id)collectionViewCellWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)image;
- (id)monogramName;
- (void)setImage:(id)arg1;
- (void)setMonogramName:(id)arg1;
- (void)setSizeToFitImage:(BOOL)arg1;
- (void)setSubtitleText:(id)arg1;
- (void)setTitleText:(id)arg1;
- (BOOL)sizeToFitImage;
- (id)subtitleText;
- (id)titleText;

@end
