//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCEventAnnouncing.h"

@class NSMutableDictionary, NSNumber, NSString, SCCheetahFeedAst, SCEventListenerAnnouncer;

@interface SCSendToRanker : NSObject <SCEventAnnouncing>
{
    id <SCPerforming> _performer;
    SCCheetahFeedAst *_ast;
    SCEventListenerAnnouncer *_eventAnnouncer;
    NSNumber *_streakExpirationWarningMilliSeconds;
    NSMutableDictionary *_rankingFeaturesByRecipient;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (_Bool)_shouldFilterBasedOnScore:(float)arg1;
- (id)_reorderRecipients:(id)arg1;
- (void)_announceRankingFeaturesWithRankableObject:(id)arg1;
- (id)reorderRecipients:(id)arg1;
- (id)initWithAST:(id)arg1 streakExpirationWarningMilliSeconds:(id)arg2;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

