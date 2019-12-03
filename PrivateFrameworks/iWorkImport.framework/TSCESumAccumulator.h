/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCESumAccumulator : NSObject {
    NSDate * _dateAccumulator;
    bool  _foundANumber;
    bool  _mixedDurationsAndNumbers;
    struct TSCENumberValue { 
        int (**_vptr$TSCEAbstractValue)(); 
        struct TSUDecimal { 
            struct { 
                unsigned long long w[2]; 
            } _decimal; 
        } _decimal; 
        int _baseUnits[1]; 
        struct TSCEFormat { 
            struct TSCEFormatStruct { 
                int mFormatType; 
                union { 
                    struct { 
                        unsigned int mCurrencyCodeIndex : 16; 
                        unsigned int mDecimalPlaces : 8; 
                        unsigned int mNegativeStyle : 3; 
                        unsigned int mShowThousandsSeparator : 1; 
                        unsigned int mUseAccountingStyle : 1; 
                    } mNumberStruct; 
                    struct { 
                        unsigned int mFractionAccuracy : 8; 
                    } mFractionFormatStruct; 
                    struct { 
                        unsigned int mBase : 8; 
                        unsigned int mBasePlaces : 8; 
                        unsigned int mBaseUseMinusSign : 1; 
                    } mBaseFormatStruct; 
                    struct { 
                        unsigned int mUseAutomaticUnits : 1; 
                        int mDurationUnitSmallest; 
                        int mDurationUnitLargest; 
                        int mDurationStyle; 
                    } mDurationFormatStruct; 
                } ; 
                TSKDateTimeFormat *_dateTimeFormat; 
                TSKCustomFormatWrapper *_customFormatWrapper; 
                TSKBooleanFormat *_booleanFormat; 
            } _formatStruct; 
            unsigned char _formatState; 
        } _format; 
        bool _isUnitlessZero; 
    }  _numberAccumulator;
    double  _secondsToAdd;
}

@property (nonatomic) NSDate *dateAccumulator;
@property (nonatomic) bool foundANumber;
@property (nonatomic) bool mixedDurationsAndNumbers;
@property (nonatomic, readonly) struct TSCENumberValue { int (**x1)(); struct TSUDecimal { struct { unsigned long long x_1_2_1[2]; } x_2_1_1; } x2; int x3[1]; struct TSCEFormat { struct TSCEFormatStruct { int x_1_2_1; union { struct { unsigned int x_1_4_1 : 16; unsigned int x_1_4_2 : 8; unsigned int x_1_4_3 : 3; unsigned int x_1_4_4 : 1; unsigned int x_1_4_5 : 1; } x_2_3_1; struct { unsigned int x_2_4_1 : 8; } x_2_3_2; struct { unsigned int x_3_4_1 : 8; unsigned int x_3_4_2 : 8; unsigned int x_3_4_3 : 1; } x_2_3_3; struct { unsigned int x_4_4_1 : 1; int x_4_4_2; int x_4_4_3; int x_4_4_4; } x_2_3_4; } x_1_2_2; id x_1_2_3; id x_1_2_4; id x_1_2_5; } x_4_1_1; unsigned char x_4_1_2; } x4; bool x5; }*numberAccumulator;
@property (nonatomic) double secondsToAdd;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addValue:(const struct TSCEValue { struct TSCENumberValue { int (**x_1_1_1)(); struct TSUDecimal { struct { unsigned long long x_1_3_1[2]; } x_2_2_1; } x_1_1_2; int x_1_1_3[1]; struct TSCEFormat { struct TSCEFormatStruct { int x_1_3_1; union { struct { unsigned int x_1_5_1 : 16; unsigned int x_1_5_2 : 8; unsigned int x_1_5_3 : 3; unsigned int x_1_5_4 : 1; unsigned int x_1_5_5 : 1; } x_2_4_1; struct { unsigned int x_2_5_1 : 8; } x_2_4_2; struct { unsigned int x_3_5_1 : 8; unsigned int x_3_5_2 : 8; unsigned int x_3_5_3 : 1; } x_2_4_3; struct { unsigned int x_4_5_1 : 1; int x_4_5_2; int x_4_5_3; int x_4_5_4; } x_2_4_4; } x_1_3_2; id x_1_3_3; id x_1_3_4; id x_1_3_5; } x_4_2_1; unsigned char x_4_2_2; } x_1_1_4; bool x_1_1_5; } x1; unsigned long long x2[19]; int x3; }*)arg1 function:(id)arg2 evaluationContext:(struct TSCEEvaluationContext { struct TSCEEvaluationStack { struct vector<TSCEValue, std::__1::allocator<TSCEValue> > { struct TSCEValue {} *x_1_2_1; struct TSCEValue {} *x_1_2_2; struct __compressed_pair<TSCEValue *, std::__1::allocator<TSCEValue> > { struct TSCEValue {} *x_3_3_1; } x_1_2_3; } x_1_1_1; int x_1_1_2; } x1; id x2; id x3; bool x4; bool x5; bool x6; struct TSCEWarningReportingContext { bool x_7_1_1; bool x_7_1_2; id x_7_1_3; } x7; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_8_1_1; } x8; struct TSUCellCoord { unsigned int x_9_1_1; unsigned short x_9_1_2; bool x_9_1_3; bool x_9_1_4; } x9; }*)arg3;
- (id)dateAccumulator;
- (bool)foundANumber;
- (id)init;
- (bool)mixedDurationsAndNumbers;
- (struct TSCENumberValue { int (**x1)(); struct TSUDecimal { struct { unsigned long long x_1_2_1[2]; } x_2_1_1; } x2; int x3[1]; struct TSCEFormat { struct TSCEFormatStruct { int x_1_2_1; union { struct { unsigned int x_1_4_1 : 16; unsigned int x_1_4_2 : 8; unsigned int x_1_4_3 : 3; unsigned int x_1_4_4 : 1; unsigned int x_1_4_5 : 1; } x_2_3_1; struct { unsigned int x_2_4_1 : 8; } x_2_3_2; struct { unsigned int x_3_4_1 : 8; unsigned int x_3_4_2 : 8; unsigned int x_3_4_3 : 1; } x_2_3_3; struct { unsigned int x_4_4_1 : 1; int x_4_4_2; int x_4_4_3; int x_4_4_4; } x_2_3_4; } x_1_2_2; id x_1_2_3; id x_1_2_4; id x_1_2_5; } x_4_1_1; unsigned char x_4_1_2; } x4; bool x5; }*)numberAccumulator;
- (struct TSCEValue { struct TSCENumberValue { int (**x_1_1_1)(); struct TSUDecimal { struct { unsigned long long x_1_3_1[2]; } x_2_2_1; } x_1_1_2; int x_1_1_3[1]; struct TSCEFormat { struct TSCEFormatStruct { int x_1_3_1; union { struct { unsigned int x_1_5_1 : 16; unsigned int x_1_5_2 : 8; unsigned int x_1_5_3 : 3; unsigned int x_1_5_4 : 1; unsigned int x_1_5_5 : 1; } x_2_4_1; struct { unsigned int x_2_5_1 : 8; } x_2_4_2; struct { unsigned int x_3_5_1 : 8; unsigned int x_3_5_2 : 8; unsigned int x_3_5_3 : 1; } x_2_4_3; struct { unsigned int x_4_5_1 : 1; int x_4_5_2; int x_4_5_3; int x_4_5_4; } x_2_4_4; } x_1_3_2; id x_1_3_3; id x_1_3_4; id x_1_3_5; } x_4_2_1; unsigned char x_4_2_2; } x_1_1_4; bool x_1_1_5; } x1; unsigned long long x2[19]; int x3; })resultForFunction:(id)arg1;
- (double)secondsToAdd;
- (void)setDateAccumulator:(id)arg1;
- (void)setFoundANumber:(bool)arg1;
- (void)setMixedDurationsAndNumbers:(bool)arg1;
- (void)setSecondsToAdd:(double)arg1;

@end
