//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber;

@interface SCUnifiedProfilePageView : NSObject
{
    NSNumber *viewTimeSec;
    unsigned long long profileType;
    long long entryEvent;
}

- (void).cxx_destruct;
- (long long)entryEvent;
- (void)setEntryEvent:(long long)arg1;
- (unsigned long long)profileType;
- (void)setProfileType:(unsigned long long)arg1;
- (double)viewTimeSec;
- (void)setViewTimeSec:(double)arg1;
- (id)eventName;
- (id)init;

@end

