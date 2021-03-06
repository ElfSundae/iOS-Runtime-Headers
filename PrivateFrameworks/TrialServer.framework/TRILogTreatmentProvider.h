/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
 */

@interface TRILogTreatmentProvider : TRILogTreatmentReader

+ (bool)deleteFileAtPath:(id)arg1;
+ (int)projectIdFromExperimentId:(struct NSString { Class x1; }*)arg1;
+ (id)providerWithProjectId:(int)arg1;
+ (bool)upgrade;

- (bool)addTreatment:(id)arg1;
- (id)initWithPath:(id)arg1;
- (id)initWithProjectId:(int)arg1;
- (bool)removeTreatment:(struct NSString { Class x1; }*)arg1;
- (bool)saveTreatments:(id)arg1;

@end
