//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCDisplayContext;

@interface SCRequestManagerLogParameter : NSObject
{
    unsigned long long _runningCountMessages;
    unsigned long long _runningCountStories;
    unsigned long long _runningCountDiscover;
    unsigned long long _runningCountLarge;
    unsigned long long _runningCountSmall;
    unsigned long long _queueCountMessages;
    unsigned long long _queueCountStories;
    unsigned long long _queueCountDiscover;
    unsigned long long _queueCountLarge;
    unsigned long long _queueCountSmall;
    unsigned long long _queueCountWifiOnly;
    unsigned long long _maxCountLarge;
    unsigned long long _maxCountSmall;
    unsigned long long _maxCountInContext;
    SCDisplayContext *_currentDisplayContext;
}

@property(retain, nonatomic) SCDisplayContext *currentDisplayContext; // @synthesize currentDisplayContext=_currentDisplayContext;
@property(nonatomic) unsigned long long maxCountInContext; // @synthesize maxCountInContext=_maxCountInContext;
@property(nonatomic) unsigned long long maxCountSmall; // @synthesize maxCountSmall=_maxCountSmall;
@property(nonatomic) unsigned long long maxCountLarge; // @synthesize maxCountLarge=_maxCountLarge;
@property(nonatomic) unsigned long long queueCountWifiOnly; // @synthesize queueCountWifiOnly=_queueCountWifiOnly;
@property(nonatomic) unsigned long long queueCountSmall; // @synthesize queueCountSmall=_queueCountSmall;
@property(nonatomic) unsigned long long queueCountLarge; // @synthesize queueCountLarge=_queueCountLarge;
@property(nonatomic) unsigned long long queueCountDiscover; // @synthesize queueCountDiscover=_queueCountDiscover;
@property(nonatomic) unsigned long long queueCountStories; // @synthesize queueCountStories=_queueCountStories;
@property(nonatomic) unsigned long long queueCountMessages; // @synthesize queueCountMessages=_queueCountMessages;
@property(nonatomic) unsigned long long runningCountSmall; // @synthesize runningCountSmall=_runningCountSmall;
@property(nonatomic) unsigned long long runningCountLarge; // @synthesize runningCountLarge=_runningCountLarge;
@property(nonatomic) unsigned long long runningCountDiscover; // @synthesize runningCountDiscover=_runningCountDiscover;
@property(nonatomic) unsigned long long runningCountStories; // @synthesize runningCountStories=_runningCountStories;
@property(nonatomic) unsigned long long runningCountMessages; // @synthesize runningCountMessages=_runningCountMessages;
- (void).cxx_destruct;

@end

