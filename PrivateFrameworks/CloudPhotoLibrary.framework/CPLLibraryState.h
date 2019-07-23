/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLLibraryState : NSObject {
    NSDate * _deleteDate;
    bool  _disabled;
    NSDate * _disabledDate;
}

@property (nonatomic, copy) NSDate *deleteDate;
@property (getter=isDisabled, nonatomic) bool disabled;
@property (nonatomic, copy) NSDate *disabledDate;

- (void).cxx_destruct;
- (id)deleteDate;
- (id)disabledDate;
- (bool)isDisabled;
- (void)setDeleteDate:(id)arg1;
- (void)setDisabled:(bool)arg1;
- (void)setDisabledDate:(id)arg1;

@end
