//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCTimeProvider;

@interface SCUserNavigationTracker : NSObject
{
    double _timeEnteredBackground;
    SCTimeProvider *_timeProvider;
}

- (void).cxx_destruct;
- (_Bool)shouldReturnToCamera:(double)arg1;
- (_Bool)shouldOpenToCameraAfterBackgroundingOnViewController:(id)arg1;
- (double)timeEnteredBackground;
- (void)didEnterBackground;
- (id)init;

@end

