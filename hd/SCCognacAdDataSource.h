//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAdDataSource.h"

@class NSString;

@interface SCCognacAdDataSource : SCAdDataSource
{
    NSString *_gameId;
    NSString *_slotId;
    NSString *_buildId;
    NSString *_requestId;
    NSString *_sessionId;
}

- (void).cxx_destruct;
- (id)adSkipEvent;
- (id)adViewContextForGroup:(id)arg1;
- (_Bool)shouldInsertPlaylistItemGroup;
- (_Bool)shouldInsertPlaylistItem;
- (id)mediaLoadContexts;
- (_Bool)shouldCachePendingAdAfterTearDown;
- (unsigned long long)adProductType;
- (id)targetingParameters;
- (_Bool)isAdContentLoopingForDataModel:(id)arg1;
- (id)extraPagePropertiesForDataModel:(id)arg1;
- (void)updateTrackInfoWithGameId:(id)arg1 buildId:(id)arg2 slotId:(id)arg3 requestId:(id)arg4 sessionId:(id)arg5;
- (void)logAndTrackNoFill;
- (void)makeAdRequestWithAdRequestCompletionBlock:(CDUnknownBlockType)arg1 adMediaLoadCompletionBlock:(CDUnknownBlockType)arg2;

@end

