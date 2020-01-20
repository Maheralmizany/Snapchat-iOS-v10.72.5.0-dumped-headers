//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCCognacOperaSessionParticipantTracking.h"

@class NSMutableArray, NSMutableSet, NSString, SCCognacOperaSessionParticipantInfoBuilder, SCQueuePerformer;

@interface SCCognacOperaSessionParticipantTracker : NSObject <SCCognacOperaSessionParticipantTracking>
{
    SCQueuePerformer *_performer;
    NSString *_currentUsername;
    NSMutableSet *_participantHistorySet;
    NSMutableArray *_participantHistoryArray;
    SCCognacOperaSessionParticipantInfoBuilder *_participantInfoBuilder;
}

- (void).cxx_destruct;
- (id)participantInfo;
- (void)clear;
- (void)updateParticipantHistoryWithSortedPresentUsernames:(id)arg1;
- (id)initWithCurrentUsername:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
