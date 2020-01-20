//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL, SCLRUCache, SCLazy, SCSessionRequestManager;

@interface SCWeatherService : NSObject
{
    SCSessionRequestManager *_sessionRequestManager;
    SCLazy *_snapTokenProvider;
    id <SCPerforming> _performer;
    SCLRUCache *_cache;
    NSURL *_currentWeatherAndForecastURL;
}

- (void).cxx_destruct;
- (void)fetchCurrentConditionAndForecastForCoordinate:(struct CLLocationCoordinate2D)arg1 referer:(int)arg2 completionQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithSessionRequestManager:(id)arg1 snapTokenProvider:(id)arg2;

@end
