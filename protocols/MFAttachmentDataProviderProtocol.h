/* Generated by RuntimeBrowser.
 */

@protocol MFAttachmentDataProviderProtocol <NSObject>

@required

- (void)fetchDataForAttachment:(void *)arg1 withDataConsumer:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 10: MFAttachment *, <MFDataConsumer> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, NSError *, BOOL, void*
- (NSData *)fetchLocalDataForAttachment:(MFAttachment *)arg1;
- (MFMessage *)messageForAttachment:(MFAttachment *)arg1;
- (NSString *)storageLocationForAttachment:(MFAttachment *)arg1 withMessage:(MFMessage *)arg2;

@end
