//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDate;

@interface SCStoriesSnapPlaybackFramingInfo : NSObject <NSCopying>
{
    NSDate *_creationDate;
    long long _source;
}

@property(readonly, nonatomic) long long source; // @synthesize source=_source;
@property(readonly, copy, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCreationDate:(id)arg1 source:(long long)arg2;

@end

