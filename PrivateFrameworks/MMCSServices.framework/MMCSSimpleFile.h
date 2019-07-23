/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MMCSServices.framework/MMCSServices
 */

@interface MMCSSimpleFile : NSObject {
    NSData * _authResponseData;
    NSString * _authToken;
    int  _encryptionBehavior;
    int  _fd;
    NSData * _fileHash;
    NSString * _guid;
    unsigned long long  _itemID;
    NSString * _localPath;
    NSError * _mmcsError;
    double  _progress;
    unsigned long long  _protocolFileSize;
    NSURL * _requestURL;
    NSString * _requestorID;
    NSData * _signature;
}

@property (retain) NSData *authResponseData;
@property (retain) NSString *authToken;
@property int encryptionBehavior;
@property int fd;
@property (retain) NSData *fileHash;
@property (retain) NSString *guid;
@property unsigned long long itemID;
@property (retain) NSString *localPath;
@property (setter=setMMCSError:, retain) NSError *mmcsError;
@property double progress;
@property unsigned long long protocolFileSize;
@property (retain) NSURL *requestURL;
@property (retain) NSString *requestorID;
@property (retain) NSData *signature;

- (id)authResponseData;
- (id)authToken;
- (void)dealloc;
- (id)description;
- (int)encryptionBehavior;
- (int)fd;
- (id)fileHash;
- (id)guid;
- (id)init;
- (unsigned long long)itemID;
- (id)localPath;
- (id)mmcsError;
- (double)progress;
- (unsigned long long)protocolFileSize;
- (id)requestURL;
- (id)requestorID;
- (void)setAuthResponseData:(id)arg1;
- (void)setAuthToken:(id)arg1;
- (void)setEncryptionBehavior:(int)arg1;
- (void)setFd:(int)arg1;
- (void)setFileHash:(id)arg1;
- (void)setGuid:(id)arg1;
- (void)setItemID:(unsigned long long)arg1;
- (void)setLocalPath:(id)arg1;
- (void)setMMCSError:(id)arg1;
- (void)setProgress:(double)arg1;
- (void)setProtocolFileSize:(unsigned long long)arg1;
- (void)setRequestURL:(id)arg1;
- (void)setRequestorID:(id)arg1;
- (void)setSignature:(id)arg1;
- (id)signature;

@end
