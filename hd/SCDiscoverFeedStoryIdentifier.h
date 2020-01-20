//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface SCDiscoverFeedStoryIdentifier : NSObject <NSCopying>
{
    unsigned long long _storyDedupeFp;
    NSString *_compositeStoryId;
}

@property(readonly, copy, nonatomic) NSString *compositeStoryId; // @synthesize compositeStoryId=_compositeStoryId;
@property(readonly, nonatomic) unsigned long long storyDedupeFp; // @synthesize storyDedupeFp=_storyDedupeFp;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStoryDedupeFp:(unsigned long long)arg1 compositeStoryId:(id)arg2;

@end

