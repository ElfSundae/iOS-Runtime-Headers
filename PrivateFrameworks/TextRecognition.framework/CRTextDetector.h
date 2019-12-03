/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
 */

@interface CRTextDetector : NSObject {
    bool  _shouldCancel;
}

@property bool shouldCancel;

- (id)charLevelNMSDetectFutharkTextInImage:(id)arg1 logIntermediateDetectorResult:(id*)arg2 options:(id)arg3;
- (id)charLevelNMSDetectTextInImage:(id)arg1 logIntermediateDetectorResult:(id*)arg2 options:(id)arg3;
- (id)detectCITextFeaturesInImage:(id)arg1 options:(id)arg2;
- (id)detectCITextFeaturesInImage:(id)arg1 withThresholdingAlgorithm:(long long)arg2 options:(id)arg3;
- (bool)detectTextCandidatesInImage:(id)arg1 atScale:(long long)arg2 forNumScales:(long long)arg3 toDocument:(struct Document { int (**x1)(); struct Mat { int (**x_2_1_1)(); char *x_2_1_2; int x_2_1_3; int x_2_1_4; int x_2_1_5; int x_2_1_6[32]; int x_2_1_7[32]; struct SmartPtr { int (**x_8_2_1)(); void *x_8_2_2; int *x_8_2_3; } x_2_1_8; int x_2_1_9; int x_2_1_10; int x_2_1_11[32]; int x_2_1_12[32]; unsigned long long x_2_1_13; } x2; struct vector<TextDetector::Stroke, std::__1::allocator<TextDetector::Stroke> > { struct Stroke {} *x_3_1_1; struct Stroke {} *x_3_1_2; struct __compressed_pair<TextDetector::Stroke *, std::__1::allocator<TextDetector::Stroke> > { struct Stroke {} *x_3_2_1; } x_3_1_3; } x3[2]; struct vector<TextDetector::Character, std::__1::allocator<TextDetector::Character> > { struct Character {} *x_4_1_1; struct Character {} *x_4_1_2; struct __compressed_pair<TextDetector::Character *, std::__1::allocator<TextDetector::Character> > { struct Character {} *x_3_2_1; } x_4_1_3; } x4[2]; struct vector<TextDetector::Word, std::__1::allocator<TextDetector::Word> > { struct Word {} *x_5_1_1; struct Word {} *x_5_1_2; struct __compressed_pair<TextDetector::Word *, std::__1::allocator<TextDetector::Word> > { struct Word {} *x_3_2_1; } x_5_1_3; } x5; }*)arg4 options:(id)arg5;
- (id)detectTextInImage:(id)arg1 logIntermediateDetectorResult:(id*)arg2 options:(id)arg3;
- (bool)filterTextLines:(struct vector<TextDetector::Word, std::__1::allocator<TextDetector::Word> > { struct Word {} *x1; struct Word {} *x2; struct __compressed_pair<TextDetector::Word *, std::__1::allocator<TextDetector::Word> > { struct Word {} *x_3_1_1; } x3; }*)arg1 withIncludedCandidates:(struct vector<bool, std::__1::allocator<bool> > { unsigned long long *x1; unsigned long long x2; struct __compressed_pair<unsigned long, std::__1::allocator<unsigned long> > { unsigned long long x_3_1_1; } x3; }*)arg2 options:(id)arg3;
- (bool)formInitialTextLines:(struct Document { int (**x1)(); struct Mat { int (**x_2_1_1)(); char *x_2_1_2; int x_2_1_3; int x_2_1_4; int x_2_1_5; int x_2_1_6[32]; int x_2_1_7[32]; struct SmartPtr { int (**x_8_2_1)(); void *x_8_2_2; int *x_8_2_3; } x_2_1_8; int x_2_1_9; int x_2_1_10; int x_2_1_11[32]; int x_2_1_12[32]; unsigned long long x_2_1_13; } x2; struct vector<TextDetector::Stroke, std::__1::allocator<TextDetector::Stroke> > { struct Stroke {} *x_3_1_1; struct Stroke {} *x_3_1_2; struct __compressed_pair<TextDetector::Stroke *, std::__1::allocator<TextDetector::Stroke> > { struct Stroke {} *x_3_2_1; } x_3_1_3; } x3[2]; struct vector<TextDetector::Character, std::__1::allocator<TextDetector::Character> > { struct Character {} *x_4_1_1; struct Character {} *x_4_1_2; struct __compressed_pair<TextDetector::Character *, std::__1::allocator<TextDetector::Character> > { struct Character {} *x_3_2_1; } x_4_1_3; } x4[2]; struct vector<TextDetector::Word, std::__1::allocator<TextDetector::Word> > { struct Word {} *x_5_1_1; struct Word {} *x_5_1_2; struct __compressed_pair<TextDetector::Word *, std::__1::allocator<TextDetector::Word> > { struct Word {} *x_3_2_1; } x_5_1_3; } x5; }*)arg1 withIncludedCandidates:(struct vector<bool, std::__1::allocator<bool> > { unsigned long long *x1; unsigned long long x2; struct __compressed_pair<unsigned long, std::__1::allocator<unsigned long> > { unsigned long long x_3_1_1; } x3; }*)arg2 options:(id)arg3;
- (id)generateOutputFeatures:(struct vector<TextDetector::Word, std::__1::allocator<TextDetector::Word> > { struct Word {} *x1; struct Word {} *x2; struct __compressed_pair<TextDetector::Word *, std::__1::allocator<TextDetector::Word> > { struct Word {} *x_3_1_1; } x3; }*)arg1 forImageSize:(struct Size_<unsigned long> { int (**x1)(); unsigned long long x2; unsigned long long x3; })arg2 withIncludedCandidates:(const struct vector<bool, std::__1::allocator<bool> > { unsigned long long *x1; unsigned long long x2; struct __compressed_pair<unsigned long, std::__1::allocator<unsigned long> > { unsigned long long x_3_1_1; } x3; }*)arg3 options:(id)arg4;
- (id)init;
- (unsigned long long)numScalesForImage:(id)arg1 options:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (bool)regroupTextLinesForChinese:(struct vector<TextDetector::Word, std::__1::allocator<TextDetector::Word> > { struct Word {} *x1; struct Word {} *x2; struct __compressed_pair<TextDetector::Word *, std::__1::allocator<TextDetector::Word> > { struct Word {} *x_3_1_1; } x3; }*)arg1 withIncludedCandidates:(const struct vector<bool, std::__1::allocator<bool> > { unsigned long long *x1; unsigned long long x2; struct __compressed_pair<unsigned long, std::__1::allocator<unsigned long> > { unsigned long long x_3_1_1; } x3; }*)arg2 options:(id)arg3;
- (void)setShouldCancel:(bool)arg1;
- (bool)shouldCancel;

@end
