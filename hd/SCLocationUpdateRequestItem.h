//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate;

@interface SCLocationUpdateRequestItem : NSObject
{
    NSDate *_startTime;
    long long _appStateWhenRequestStart;
}

@property(nonatomic) long long appStateWhenRequestStart; // @synthesize appStateWhenRequestStart=_appStateWhenRequestStart;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
- (void).cxx_destruct;
- (id)initWithStartTimestamp:(id)arg1 appState:(long long)arg2;

@end

