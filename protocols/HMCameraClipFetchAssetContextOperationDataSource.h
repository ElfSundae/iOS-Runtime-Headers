/* Generated by RuntimeBrowser.
 */

@protocol HMCameraClipFetchAssetContextOperationDataSource <NSObject>

@required

- (NSData *)dataFromEncryptedDataContext:(HMCameraClipEncryptedDataContext *)arg1 usingDecryptionManager:(HMCameraClipDecryptionManager *)arg2;
- (HMCameraClipDownloadAssetDataTask *)dataTaskWithURL:(NSURL *)arg1 httpHeaderFields:(NSDictionary *)arg2;
- (NSOutputStream *)outputStreamToFileAtURL:(NSURL *)arg1 shouldAppend:(bool)arg2;
- (bool)writeData:(NSData *)arg1 toFileURL:(NSURL *)arg2 error:(id*)arg3;

@end