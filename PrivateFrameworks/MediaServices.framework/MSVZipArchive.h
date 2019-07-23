/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

@interface MSVZipArchive : NSObject {
    NSString * _archivePath;
    struct BOMSys { } * _bomsys;
    NSMutableArray * _filesToArchive;
}

- (void).cxx_destruct;
- (void)addFileAtPath:(id)arg1;
- (void)dealloc;
- (BOOL)decompressToPath:(id)arg1 withError:(id*)arg2;
- (id)init;
- (id)initWithContentsOfFile:(id)arg1;
- (BOOL)writeToFileAtPath:(id)arg1 withError:(id*)arg2;

@end