/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

@interface CXCallDirectoryIdentificationEntryMutableData : CXCallDirectoryIdentificationEntryData <NSCopying> {
    NSMutableDictionary * _labelToLabelDataOffset;
    NSMutableData * _mutableLabelData;
    NSMutableData * _mutablePhoneNumberData;
}

@property (nonatomic, retain) NSMutableDictionary *labelToLabelDataOffset;
@property (nonatomic, retain) NSMutableData *mutableLabelData;
@property (nonatomic, retain) NSMutableData *mutablePhoneNumberData;

- (void).cxx_destruct;
- (BOOL)appendPhoneNumber:(long long)arg1 label:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithCapacity:(unsigned int)arg1;
- (id)labelToLabelDataOffset;
- (id)mutableLabelData;
- (id)mutablePhoneNumberData;
- (void)setLabelToLabelDataOffset:(id)arg1;
- (void)setMutableLabelData:(id)arg1;
- (void)setMutablePhoneNumberData:(id)arg1;

@end
