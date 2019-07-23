/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFServiceLikeItemUpdateResponse : NSObject {
    HFCharacteristicValueDisplayMetadata * _displayMetadata;
    HFCharacteristicValueBatchReadResponse * _readResponse;
    NSDictionary * _standardResults;
}

@property (nonatomic, readonly) HFCharacteristicValueDisplayMetadata *displayMetadata;
@property (nonatomic, readonly) HFCharacteristicValueBatchReadResponse *readResponse;
@property (nonatomic, readonly) NSDictionary *standardResults;

- (void).cxx_destruct;
- (id)displayMetadata;
- (id)initWithDisplayMetadata:(id)arg1 readResponse:(id)arg2 standardResults:(id)arg3;
- (id)readResponse;
- (id)standardResults;

@end
