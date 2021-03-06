//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface SCStoriesPlaybackLoggingInfo : NSObject <NSCopying>
{
    unsigned long long _storySessionId;
    long long _mapSessionId;
    long long _sourceType;
}

@property(readonly, nonatomic) long long sourceType; // @synthesize sourceType=_sourceType;
@property(readonly, nonatomic) long long mapSessionId; // @synthesize mapSessionId=_mapSessionId;
@property(readonly, nonatomic) unsigned long long storySessionId; // @synthesize storySessionId=_storySessionId;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStorySessionId:(unsigned long long)arg1 mapSessionId:(long long)arg2 sourceType:(long long)arg3;

@end

