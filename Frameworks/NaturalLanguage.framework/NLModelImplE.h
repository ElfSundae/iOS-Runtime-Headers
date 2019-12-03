/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
 */

@interface NLModelImplE : NLModelImpl {
    NLEmbedding * _embedding;
    NSData * _embeddingData;
}

- (void).cxx_destruct;
- (id)embedding;
- (id)embeddingData;
- (id)initWithModelData:(id)arg1 configuration:(id)arg2 labelMap:(id)arg3 vocabularyMap:(id)arg4 documentFrequencyMap:(id)arg5 customEmbeddingData:(id)arg6 trainingInfo:(id)arg7;
- (id)initWithModelTrainer:(id)arg1;
- (id)modelData;
- (id)predictedLabelForString:(id)arg1;
- (id)predictedLabelsForTokens:(id)arg1;
- (unsigned long long)systemVersion;

@end
