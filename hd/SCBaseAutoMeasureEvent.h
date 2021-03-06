//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface SCBaseAutoMeasureEvent : NSObject
{
    NSString *_eventName;
    double _sampleRate;
    long long _measureType;
    NSArray *_sliceNames;
    NSArray *_loggingTypes;
    NSString *_eventNamespace;
}

- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (_Bool)canLogGraphene:(id)arg1;
- (_Bool)hasValidSlicesForSCBaseAutoCounter:(id)arg1;
- (id)initWithEventName:(id)arg1 sampleRate:(double)arg2 measureType:(long long)arg3 sliceNames:(id)arg4 loggingTypes:(id)arg5 eventNamespace:(id)arg6;
- (_Bool)shouldLogGraphene;
- (_Bool)shouldLogODP;
- (id)getEventNamespace;
- (id)getEventName;
- (double)getSampleRate;
- (id)toString;

@end

