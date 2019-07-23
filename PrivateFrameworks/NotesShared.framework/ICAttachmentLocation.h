/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICAttachmentLocation : ICLocation <ICSearchIndexableTarget>

@property (nonatomic, retain) ICAttachment *attachment;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *formattedAddressWithoutAttachmentTitle;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL placeUpdated;
@property (readonly) Class superclass;

- (id)formattedAddressWithoutAttachmentTitle;
- (id)targetSearchIndexable;

@end
