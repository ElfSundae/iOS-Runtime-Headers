/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKSearchFoundationFeedbackListener : NSObject <SFFeedbackListener> {
    unsigned int  _clientType;
    NSArray * _sections;
}

@property (nonatomic) unsigned int clientType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSArray *sections;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned int)clientType;
- (void)didEngageResult:(id)arg1;
- (void)didEngageSection:(id)arg1;
- (void)didRankSections:(id)arg1;
- (id)initWithClientType:(unsigned int)arg1;
- (void)resultsDidBecomeVisible:(id)arg1;
- (id)sections;
- (void)setClientType:(unsigned int)arg1;
- (void)setSections:(id)arg1;

@end
