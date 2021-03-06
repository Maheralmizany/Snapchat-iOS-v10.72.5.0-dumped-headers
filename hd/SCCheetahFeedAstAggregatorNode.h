//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSArray;

@interface SCCheetahFeedAstAggregatorNode : NSObject <NSCopying, NSCoding>
{
    long long _aggregatorType;
    NSArray *_nodes;
}

@property(readonly, copy, nonatomic) NSArray *nodes; // @synthesize nodes=_nodes;
@property(readonly, nonatomic) long long aggregatorType; // @synthesize aggregatorType=_aggregatorType;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAggregatorType:(long long)arg1 nodes:(id)arg2;

@end

