//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCLensExplorerPageEventLoggerProtocol.h"

@class NSString, SCLensExplorerEventContext, SCLensTimeTracker;

@interface SCLensExplorerPageEventLogger : NSObject <SCLensExplorerPageEventLoggerProtocol>
{
    SCLensExplorerEventContext *_eventContext;
    id <SCLensExplorerLoggerProtocol> _rankingLogger;
    SCLensTimeTracker *_pageViewTimeTracker;
}

- (void).cxx_destruct;
- (void)logPageViewEvent;
- (void)logPageOpenEvent:(unsigned long long)arg1 pageTypeSpecific:(id)arg2;
- (id)initWithRankingLogger:(id)arg1 eventContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

