/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICAttachmentLocation : ICLocation <ICSearchIndexableTarget>

@property (nonatomic, retain) ICAttachment *attachment;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *formattedAddressWithoutAttachmentTitle;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool placeUpdated;
@property (readonly) Class superclass;

+ (id)newAttachmentLocationForAttachment:(id)arg1;

- (id)formattedAddressWithoutAttachmentTitle;
- (id)targetSearchIndexable;

@end
