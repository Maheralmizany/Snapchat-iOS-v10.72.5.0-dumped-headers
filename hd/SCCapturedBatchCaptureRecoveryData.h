//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSMutableArray;

@interface SCCapturedBatchCaptureRecoveryData : NSObject <NSCoding, NSCopying>
{
    NSMutableArray *_mutableSegments;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)removeAllRecoveryData;
- (void)removeSegmentAtIndex:(unsigned long long)arg1;
- (void)addRecoveryData:(id)arg1;
- (id)segments;
- (void)increaseAttemptedRecoveryCount;
- (id)init;

@end
