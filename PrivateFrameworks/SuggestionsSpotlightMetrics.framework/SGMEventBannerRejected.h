/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

@interface SGMEventBannerRejected : NSObject {
    PETScalarEventTracker * _tracker;
}

@property (nonatomic, readonly) PETScalarEventTracker *tracker;

- (void).cxx_destruct;
- (id)init;
- (void)trackEventWithScalar:(unsigned int)arg1 app:(struct SGMBannerDisplayApp_ { unsigned int x1; })arg2 category:(struct SGMEventCategory_ { unsigned int x1; })arg3 extracted:(struct SGMEventExtractionType_ { unsigned int x1; })arg4;
- (id)tracker;

@end
