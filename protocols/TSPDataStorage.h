/* Generated by RuntimeBrowser.
 */

@protocol TSPDataStorage <NSObject>

@required

- (AVAsset *)AVAssetWithOptions:(NSDictionary *)arg1 forData:(TSPData *)arg2;
- (NSData *)NSDataWithOptions:(unsigned int)arg1;
- (BOOL)archiveInfoMessage:(struct DataInfo { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned long long x5; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x6; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x7; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x8; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x9; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x10; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x11; bool x12; int x13; struct DataAttributes {} *x14; struct EncryptionInfo {} *x15; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x16; }*)arg1 archiver:(id <TSPDataArchiver>)arg2 packageWriter:(TSPPackageWriter *)arg3;
- (NSString *)documentResourceLocator;
- (unsigned long long)encodedLength;
- (NSString *)filenameForPreferredFilename:(NSString *)arg1;
- (BOOL)isInPackage:(TSPPackage *)arg1;
- (BOOL)isMissingData;
- (BOOL)isReadable;
- (unsigned long long)length;
- (struct CGDataProvider { }*)newCGDataProvider;
- (struct CGImageSource { }*)newCGImageSource;
- (unsigned char)packageIdentifier;
- (NSString *)packageLocator;
- (void)performIOChannelReadWithAccessor:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <TSUReadChannel> *, void*
- (BOOL)readOnly;
- (TSPDataStorageWriteResult *)writeData:(TSPData *)arg1 toPackageWriter:(TSPPackageWriter *)arg2 infoMessage:(struct DataInfo { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned long long x5; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x6; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x7; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x8; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x9; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x10; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x11; bool x12; int x13; struct DataAttributes {} *x14; struct EncryptionInfo {} *x15; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x16; }*)arg3 preferredFilename:(NSString *)arg4;

@optional

- (unsigned int)CRC;
- (void)addDownloadObserver:(void *)arg1 forData:(void *)arg2 options:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 20: id, TSPData *, unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, void*, void*, unsigned short, void*, long double, void*, void*, void*, void*, int, NSDictionary *, void*
- (BOOL)copyToTemporaryURL:(NSURL *)arg1 encryptionInfo:(id <TSPMutableCryptoInfo>)arg2;
- (<TSPCryptoInfo> *)decryptionInfo;
- (void)didInitializeFromDocumentURL:(NSURL *)arg1;
- (BOOL)gilligan_isRemote;
- (BOOL)needsDownload;
- (void)performReadOnBookmarkDataSourceURLWithAccessor:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, void*
- (void)setGilligan_isRemote:(BOOL)arg1;
- (void)setIsMissingData:(BOOL)arg1;
- (id)storageForDataCopyFromOtherContext;

@end
