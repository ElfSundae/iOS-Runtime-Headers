/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PHAWorkerJob : NSObject <NSCopying> {
    unsigned int  _countOfFailedStarts;
    <PHAWorkerJobDelegate> * _delegate;
    BOOL  _ignoreFurtherResults;
    BOOL  _isReactionJob;
    double  _lastReportTimeAsInterval;
    PHPhotoLibrary * _photoLibrary;
    unsigned int  _scenario;
    BOOL  _treatMissingResultsAsFailures;
    short  _workerType;
}

@property (nonatomic, readonly) float completionScore;
@property (nonatomic) unsigned int countOfFailedStarts;
@property (nonatomic) <PHAWorkerJobDelegate> *delegate;
@property (nonatomic, readonly) BOOL finished;
@property (nonatomic) BOOL ignoreFurtherResults;
@property (readonly) double intervalSinceLastReport;
@property (setter=setIsReactionJob:, nonatomic) BOOL isReactionJob;
@property double lastReportTimeAsInterval;
@property (nonatomic, retain) PHPhotoLibrary *photoLibrary;
@property (nonatomic, readonly) unsigned int scenario;
@property (nonatomic) BOOL treatMissingResultsAsFailures;
@property (nonatomic, readonly) short workerType;

- (void).cxx_destruct;
- (float)completionScore;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)countOfFailedStarts;
- (id)delegate;
- (void)extendTimeout;
- (void)finish;
- (BOOL)finished;
- (BOOL)ignoreFurtherResults;
- (id)init;
- (id)initWithWorkerType:(short)arg1 scenario:(unsigned int)arg2 library:(id)arg3;
- (double)intervalSinceLastReport;
- (BOOL)isEqualToWorkerJob:(id)arg1;
- (BOOL)isReactionJob;
- (double)lastReportTimeAsInterval;
- (id)photoLibrary;
- (void)prepare;
- (unsigned int)scenario;
- (void)setCountOfFailedStarts:(unsigned int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIgnoreFurtherResults:(BOOL)arg1;
- (void)setIsReactionJob:(BOOL)arg1;
- (void)setLastReportTimeAsInterval:(double)arg1;
- (void)setPhotoLibrary:(id)arg1;
- (void)setTreatMissingResultsAsFailures:(BOOL)arg1;
- (BOOL)startProcessingOnWorker:(id)arg1 withError:(id*)arg2;
- (id)statusAsDictionary;
- (void)stopAcceptingResults;
- (BOOL)stopProcessingOnWorker:(id)arg1 withError:(id*)arg2;
- (BOOL)treatMissingResultsAsFailures;
- (short)workerType;

@end
