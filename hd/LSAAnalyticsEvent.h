//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface LSAAnalyticsEvent : NSObject
{
    NSString *_interactionName;
    NSString *_interactionValue;
    long long _sessionTotalCount;
    long long _actionSequenceCount;
    unsigned long long _cameraType;
}

@property(readonly, nonatomic) unsigned long long cameraType; // @synthesize cameraType=_cameraType;
@property(readonly, nonatomic) long long actionSequenceCount; // @synthesize actionSequenceCount=_actionSequenceCount;
@property(readonly, nonatomic) long long sessionTotalCount; // @synthesize sessionTotalCount=_sessionTotalCount;
@property(readonly, copy, nonatomic) NSString *interactionValue; // @synthesize interactionValue=_interactionValue;
@property(readonly, copy, nonatomic) NSString *interactionName; // @synthesize interactionName=_interactionName;
- (void).cxx_destruct;
- (id)description;
- (id)initWithInteractionName:(id)arg1 interactionValue:(id)arg2 sessionTotalCount:(long long)arg3 actionSequenceCount:(long long)arg4 cameraType:(unsigned long long)arg5;

@end

