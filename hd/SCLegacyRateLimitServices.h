//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCLazy;

@interface SCLegacyRateLimitServices : NSObject
{
    SCLazy *_loqConfigRateLimiter;
    SCLazy *_broadcastInitRateLimiter;
    SCLazy *_conversationsStoriesRateLimiter;
    SCLazy *_allUpdatesRateLimiter;
}

@property(readonly, nonatomic) SCLazy *allUpdatesRateLimiter; // @synthesize allUpdatesRateLimiter=_allUpdatesRateLimiter;
@property(readonly, nonatomic) SCLazy *conversationsStoriesRateLimiter; // @synthesize conversationsStoriesRateLimiter=_conversationsStoriesRateLimiter;
@property(readonly, nonatomic) SCLazy *broadcastInitRateLimiter; // @synthesize broadcastInitRateLimiter=_broadcastInitRateLimiter;
@property(readonly, nonatomic) SCLazy *loqConfigRateLimiter; // @synthesize loqConfigRateLimiter=_loqConfigRateLimiter;
- (void).cxx_destruct;
- (id)initWithLoqConfigRateLimiter:(id)arg1 broadcastInitRateLimiter:(id)arg2 conversationsStoriesRateLimiter:(id)arg3 allUpdatesRateLimiter:(id)arg4;

@end

