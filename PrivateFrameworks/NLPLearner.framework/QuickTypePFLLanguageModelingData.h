/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NLPLearner.framework/NLPLearner
 */

@interface QuickTypePFLLanguageModelingData : QuickTypePFLTrainingData {
    struct CFScopedPtr<const _LXLexicon *> { 
        struct _LXLexicon {} *m_ref; 
    }  _lexicon;
    NSLocale * _locale;
    NSString * _tokenIDMapPath;
}

@property (nonatomic, copy) NSString *tokenIDMapPath;

+ (unsigned long long)defaultMaxSequenceLength;
+ (void)initialize;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)addExamples:(id)arg1;
- (void)addResource:(id)arg1;
- (id)getEvaluationDataPoint;
- (id)getTrainingDataBatch:(unsigned long long)arg1;
- (id)initWithLocale:(id)arg1;
- (bool)loadFromCoreDuet:(id)arg1;
- (void)setTokenIDMapPath:(id)arg1;
- (id)tokenIDMapPath;

@end
