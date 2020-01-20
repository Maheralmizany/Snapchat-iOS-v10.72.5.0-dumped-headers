//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCDiscoverFeedRankingEventLogger;

@interface SCSearchEventLogger : NSObject
{
    SCDiscoverFeedRankingEventLogger *_rankingEventLogger;
}

- (void).cxx_destruct;
- (void)_applicationWillResignActive;
- (void)logSearchLocationManagerRequest:(id)arg1 pageType:(long long)arg2;
- (void)_commonSearchEventAssertions:(id)arg1;
- (id)_getUserLanguagePrefencesString;
- (void)logMultipleOnScreenResultEventsWithExtraData:(id)arg1 destination:(long long)arg2;
- (void)logSearchResultsOnScreenWithDictionary:(id)arg1 destination:(long long)arg2;
- (void)logActionWithDictionary:(id)arg1 destination:(long long)arg2;
- (void)logSearchQueryWithDictionary:(id)arg1 destination:(long long)arg2;
- (void)logSearchResultsWithDictionary:(id)arg1 destination:(long long)arg2;
- (void)_logSCAEvent:(id)arg1 event:(id)arg2 destination:(long long)arg3;
- (id)initWithExperimentManager:(id)arg1 snapTokenProvider:(id)arg2 requestManager:(id)arg3;

@end

