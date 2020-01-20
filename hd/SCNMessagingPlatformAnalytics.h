//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface SCNMessagingPlatformAnalytics : NSObject
{
    NSData *_content;
    long long _metricsMessageType;
    long long _metricsMessageMediaType;
}

+ (id)PlatformAnalyticsWithContent:(id)arg1 metricsMessageType:(long long)arg2 metricsMessageMediaType:(long long)arg3;
@property(readonly, nonatomic) long long metricsMessageMediaType; // @synthesize metricsMessageMediaType=_metricsMessageMediaType;
@property(readonly, nonatomic) long long metricsMessageType; // @synthesize metricsMessageType=_metricsMessageType;
@property(readonly, nonatomic) NSData *content; // @synthesize content=_content;
- (void).cxx_destruct;
- (id)description;
- (id)initWithContent:(id)arg1 metricsMessageType:(long long)arg2 metricsMessageMediaType:(long long)arg3;

@end
