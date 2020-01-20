//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSNumber;

@interface SCSnapchattersSuggestDataRequestFetch : NSObject <NSCopying>
{
    _Bool _isPrefetchForNotification;
    NSNumber *_syncVersion;
    NSNumber *_expirationThresholdHours;
}

@property(readonly, copy, nonatomic) NSNumber *expirationThresholdHours; // @synthesize expirationThresholdHours=_expirationThresholdHours;
@property(readonly, copy, nonatomic) NSNumber *syncVersion; // @synthesize syncVersion=_syncVersion;
@property(readonly, nonatomic) _Bool isPrefetchForNotification; // @synthesize isPrefetchForNotification=_isPrefetchForNotification;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIsPrefetchForNotification:(_Bool)arg1 syncVersion:(id)arg2 expirationThresholdHours:(id)arg3;

@end
