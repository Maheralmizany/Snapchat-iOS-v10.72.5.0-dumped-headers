//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCPreferences, SCTimeProvider;

@interface SCLensCacheClearTracker : NSObject
{
    SCPreferences *_preferencesStorage;
    SCTimeProvider *_currentDateProvider;
    double _cooldownTimeInterval;
}

- (void).cxx_destruct;
- (void)resetLensCacheClearTracker;
- (_Bool)wasLensCacheRecentlyCleared;
- (void)trackLensCacheClearEvent;
- (id)initWithPreferencesStorage:(id)arg1 currentDateProvider:(id)arg2 cooldownTimeInterval:(double)arg3;
- (id)initWithPreferencesStorage:(id)arg1 currentDateProvider:(id)arg2;

@end

