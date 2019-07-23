/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

@interface NFLDealerPipeSegment : NSObject <NFLPipeSegment> {
    unsigned long long  _pipeSegmentType;
    id /* block */  _segmentTypeDescriptionProvider;
    NFLSubBatchLayout * _subBatchLayout;
}

@property (nonatomic) unsigned long long pipeSegmentType;
@property (nonatomic, copy) id /* block */ segmentTypeDescriptionProvider;
@property (nonatomic, retain) NFLSubBatchLayout *subBatchLayout;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithSegmentType:(unsigned long long)arg1 subBatchLayout:(id)arg2 segmentTypeDescriptionProvider:(id /* block */)arg3;
- (unsigned long long)pipeSegmentType;
- (id /* block */)segmentTypeDescriptionProvider;
- (void)setPipeSegmentType:(unsigned long long)arg1;
- (void)setSegmentTypeDescriptionProvider:(id /* block */)arg1;
- (void)setSubBatchLayout:(id)arg1;
- (id)subBatchLayout;

@end
