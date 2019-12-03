/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDDeviceFileManager : NSObject {
    NSFileManager * _fileManager;
}

@property (nonatomic, readonly) NSFileManager *fileManager;

- (void).cxx_destruct;
- (bool)copyItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
- (bool)createDirectoryAtPath:(id)arg1 withIntermediateDirectories:(bool)arg2 attributes:(id)arg3 error:(id*)arg4;
- (bool)createFileAtPath:(id)arg1 contents:(id)arg2 attributes:(id)arg3;
- (bool)fileExistsAtPath:(id)arg1 isDirectory:(bool*)arg2;
- (id)fileManager;
- (id)init;
- (bool)removeItemAtPath:(id)arg1 error:(id*)arg2;

@end
