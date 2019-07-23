/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUFeedAssetContainerList : NSObject <PLAssetContainerList> {
    NSOrderedSet *_sectionInfos;
    NSString *_transientIdentifier;
}

@property (nonatomic, readonly) unsigned int containersCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSOrderedSet *sectionInfos;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *transientIdentifier;

- (void).cxx_destruct;
- (BOOL)canEditContainers;
- (id)containers;
- (unsigned int)containersCount;
- (id)containersRelationshipName;
- (unsigned int)hash;
- (BOOL)isEmpty;
- (BOOL)isEqual:(id)arg1;
- (id)managedObjectContext;
- (id)photoLibrary;
- (id)sectionInfos;
- (void)setSectionInfos:(id)arg1;
- (id)transientIdentifier;

@end
