/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@interface SUDownload : NSObject <NSCopying, NSSecureCoding> {
    SUDescriptor * _descriptor;
    SUDownloadMetadata * _metadata;
    SUOperationProgress * _progress;
}

@property (nonatomic, retain) SUDescriptor *descriptor;
@property (nonatomic, retain) SUDownloadMetadata *metadata;
@property (nonatomic, retain) SUOperationProgress *progress;

+ (bool)supportsSecureCoding;

- (bool)allowCellularDownload;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)descriptor;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isValidDownload;
- (id)metadata;
- (id)progress;
- (void)setDescriptor:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setProgress:(id)arg1;
- (unsigned long long)totalSpaceConsumed;

@end
