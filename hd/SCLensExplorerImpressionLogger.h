//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCLensExplorerImpressionLoggerProtocol.h"

@class NSString, SCLensExplorerEventContext;

@interface SCLensExplorerImpressionLogger : NSObject <SCLensExplorerImpressionLoggerProtocol>
{
    SCLensExplorerEventContext *_eventContext;
    id <SCLensExplorerLoggerProtocol> _rankingLogger;
}

- (void).cxx_destruct;
- (void)logShortImpressions:(id)arg1;
- (void)logLongImpressions:(id)arg1;
- (id)initWithRankingLogger:(id)arg1 eventContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
