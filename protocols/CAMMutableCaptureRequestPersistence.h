/* Generated by RuntimeBrowser.
 */

@protocol CAMMutableCaptureRequestPersistence <NSObject>

@required

- (unsigned long long)deferredPersistenceOptions;
- (NSURL *)localDestinationURL;
- (long long)persistenceOptions;
- (NSString *)persistenceUUID;
- (void)setDeferredPersistenceOptions:(unsigned long long)arg1;
- (void)setLocalDestinationURL:(NSURL *)arg1;
- (void)setPersistenceOptions:(long long)arg1;
- (void)setPersistenceUUID:(NSString *)arg1;
- (void)setShouldDelayRemotePersistence:(bool)arg1;
- (void)setShouldExtractDiagnosticsFromMetadata:(bool)arg1;
- (void)setShouldPersistDiagnosticsToSidecar:(bool)arg1;
- (void)setTemporaryPersistenceOptions:(long long)arg1;
- (bool)shouldDelayRemotePersistence;
- (bool)shouldExtractDiagnosticsFromMetadata;
- (bool)shouldPersistDiagnosticsToSidecar;
- (long long)temporaryPersistenceOptions;

@end
