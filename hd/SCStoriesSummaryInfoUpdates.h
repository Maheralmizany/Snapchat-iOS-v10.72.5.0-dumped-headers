//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface SCStoriesSummaryInfoUpdates : NSObject <NSCopying>
{
    unsigned long long _subtype;
}

+ (id)summariesInfo;
+ (id)rankedIdentifiers;
- (void)matchRankedIdentifiers:(CDUnknownBlockType)arg1 summariesInfo:(CDUnknownBlockType)arg2;
- (_Bool)isEqual:(id)arg1;
- (id)internalInit;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
