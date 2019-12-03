/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

@interface SGKeyValueCacheFile : NSObject <NSSecureCoding> {
    NSData * _data;
    int  _fd;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _lock;
    NSMutableData * _memStore;
    NSString * _tmpDest;
    NSString * _tmpDir;
    NSString * _tmpPath;
}

+ (id)encodedStringForFullName:(id)arg1;
+ (id)fullNameForEncodedContact:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_map;
- (void)commitTemporaryFile;
- (void)dealloc;
- (void)deleteValueByRecordId:(id)arg1;
- (void)deleteValueByRecordIdSet:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initBlank;
- (id)initInMemory;
- (id)initTemporaryForOverwritingPath:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileDescriptor:(int)arg1;
- (id)initWithPath:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2 fromRecordId:(id)arg3;
- (void)setValueIfNotPresent:(id)arg1 forKey:(id)arg2 fromRecordId:(id)arg3;
- (id)valueForKey:(id)arg1;
- (id)valueForKey:(id)arg1 found:(bool*)arg2;

@end
