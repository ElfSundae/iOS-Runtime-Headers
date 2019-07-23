/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPObjectSerializationReadAssistant : NSObject <TSPDecoderReadCoordinatorDelegate> {
    TSPObjectContext * _context;
    NSDictionary * _dataInfos;
    NSDictionary * _identifierToObjectUUIDDictionary;
    BOOL  _resetObjectUUIDs;
    TSPComponent * _rootObjectComponent;
    BOOL  _shouldDecodeMissingDataAsRemote;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long fileFormatVersion;
@property (nonatomic, readonly) BOOL hasDocumentVersionUUID;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL isCrossAppPaste;
@property (nonatomic, readonly) BOOL isCrossDocumentPaste;
@property (nonatomic, readonly) int sourceType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)cachedDataForIdentifier:(long long)arg1;
- (id)cachedMetadataObject;
- (BOOL)canResolveExternalReferences;
- (id)dataInfoForIdentifier:(long long)arg1;
- (id)decodeObjectWithData:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (unsigned long long)fileFormatVersion;
- (BOOL)hasDocumentVersionUUID;
- (id)init;
- (id)initWithContext:(id)arg1;
- (BOOL)isCrossAppPaste;
- (BOOL)isCrossDocumentPaste;
- (id)metadataComponent;
- (long long)objectIdentifierForUUID:(id)arg1;
- (id)objectUUIDForExternalReferenceToIdentifier:(long long)arg1;
- (BOOL)processMetadataObject:(id)arg1 error:(id*)arg2;
- (id)rootObjectComponent;
- (BOOL)shouldDecodeMissingDataAsRemote;
- (BOOL)shouldResolveExternalReferencesUsingObjectUUID;
- (int)sourceType;

@end
