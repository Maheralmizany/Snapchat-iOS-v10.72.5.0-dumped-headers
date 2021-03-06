//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSArray, NSString;

@interface SCDDMLEngagementBuckets : NSObject <NSCoding>
{
    NSArray *_buckets;
    NSString *_friendUsername;
}

@property(readonly, nonatomic) NSString *friendUsername; // @synthesize friendUsername=_friendUsername;
- (void).cxx_destruct;
- (id)toDictionaryWithTimestamp:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)increment:(unsigned long long)arg1 count:(long long)arg2 timestamp:(id)arg3;
- (id)initWithUsername:(id)arg1 type:(unsigned long long)arg2 count:(long long)arg3 lastUpdatedTimestamp:(id)arg4;
- (id)initWithUsername:(id)arg1 lastUpdatedTimestamp:(id)arg2;

@end

