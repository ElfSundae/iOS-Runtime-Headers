/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

@interface PIReframeRules : NURuleSystem

@property (readonly) bool isCandidateForHorizon;
@property (readonly) bool isCandidateForPerspective;
@property (readonly) bool isCandidateForReframe;

+ (id)factCandidateForHorizon;
+ (id)factCandidateForPerspective;
+ (id)factCandidateForReframe;
+ (id)factCandidateForStill;
+ (id)factCandidateForVideo;
+ (id)pregateRulesSystemWithConstants:(id)arg1;
+ (id)sharedPregateRules;

- (bool)isCandidateForHorizon;
- (bool)isCandidateForPerspective;
- (bool)isCandidateForReframe;

@end
