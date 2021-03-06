//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface SCDynamicLayoutPrefetchedStories : NSObject <NSCopying>
{
    int _feedType;
    int _numStories;
}

@property(readonly, nonatomic) int numStories; // @synthesize numStories=_numStories;
@property(readonly, nonatomic) int feedType; // @synthesize feedType=_feedType;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFeedType:(int)arg1 numStories:(int)arg2;

@end

