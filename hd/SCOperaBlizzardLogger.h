//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCLogger;

@interface SCOperaBlizzardLogger : NSObject
{
    SCLogger *_logger;
    _Bool _shouldSamplePlaybackMetrics;
}

- (void).cxx_destruct;
- (_Bool)_shouldLogPlaybackMetrics;
- (void)logPlaybackIntentToNext:(id)arg1 date:(id)arg2 mediaTime:(double)arg3;
- (void)logPlaybackIntentToNext:(id)arg1;
- (id)initWithLogger:(id)arg1;

@end

