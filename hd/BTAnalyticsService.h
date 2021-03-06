//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BTAPIClient, BTHTTP, NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface BTAnalyticsService : NSObject
{
    unsigned long long _flushThreshold;
    BTAPIClient *_apiClient;
    BTHTTP *_http;
    NSMutableDictionary *_analyticsSessions;
    NSObject<OS_dispatch_queue> *_sessionsQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *sessionsQueue; // @synthesize sessionsQueue=_sessionsQueue;
@property(retain, nonatomic) NSMutableDictionary *analyticsSessions; // @synthesize analyticsSessions=_analyticsSessions;
@property(retain, nonatomic) BTHTTP *http; // @synthesize http=_http;
@property(retain, nonatomic) BTAPIClient *apiClient; // @synthesize apiClient=_apiClient;
@property(nonatomic) unsigned long long flushThreshold; // @synthesize flushThreshold=_flushThreshold;
- (void).cxx_destruct;
- (void)checkFlushThreshold;
- (void)enqueueEvent:(id)arg1;
- (void)appWillResign:(id)arg1;
- (void)flush:(CDUnknownBlockType)arg1;
- (void)sendAnalyticsEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendAnalyticsEvent:(id)arg1;
- (void)dealloc;
- (id)initWithAPIClient:(id)arg1;

@end

