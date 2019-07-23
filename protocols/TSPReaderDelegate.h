/* Generated by RuntimeBrowser.
 */

@protocol TSPReaderDelegate <NSObject>

@required

- (NSUUID *)baseObjectUUID;
- (TSPObjectContext *)contextForReader:(TSPReader *)arg1;
- (unsigned long long)fileFormatVersion;
- (BOOL)hasDocumentVersionUUID;
- (BOOL)isReadingFromDocument;
- (<TSPLazyReferenceDelegate> *)lazyReferenceDelegateForReader:(TSPReader *)arg1;
- (<TSPObjectDelegate> *)objectDelegateForReader:(TSPReader *)arg1;
- (unsigned char)packageIdentifier;
- (void)reader:(void *)arg1 didFindExternalReferenceToObjectIdentifier:(void *)arg2 componentIdentifier:(void *)arg3 isWeak:(void *)arg4 allowUnknownObject:(void *)arg5 fromParentObject:(void *)arg6 completion:(void *)arg7; // needs 7 arg types, found 11: TSPReader *, long long, long long, BOOL, BOOL, TSPObject *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id
- (void)reader:(void *)arg1 didFindExternalRepeatedReference:(void *)arg2 isWeak:(void *)arg3 allowUnknownObject:(void *)arg4 fromParentObject:(void *)arg5 completion:(void *)arg6; // needs 6 arg types, found 10: TSPReader *, NSArray *, BOOL, BOOL, TSPObject *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id
- (void)reader:(TSPReader *)arg1 didReadLazyReference:(TSPLazyReference *)arg2;
- (TSPData *)reader:(TSPReader *)arg1 wantsDataForIdentifier:(long long)arg2;
- (long long)reader:(TSPReader *)arg1 wantsObjectIdentifierForUUID:(NSUUID *)arg2;

@optional

- (BOOL)isCrossAppPaste;
- (BOOL)isCrossDocumentPaste;
- (BOOL)isFromCopy;
- (void)reader:(TSPReader *)arg1 didResetObjectIdentifierForObject:(TSPObject *)arg2 originalObjectIdentifier:(long long)arg3;
- (void)reader:(TSPReader *)arg1 didResetObjectUUID:(NSUUID *)arg2 forObjectIdentifier:(long long)arg3 originalObjectUUID:(NSUUID *)arg4;
- (void)reader:(TSPReader *)arg1 didUnarchiveObject:(TSPObject *)arg2;

@end
