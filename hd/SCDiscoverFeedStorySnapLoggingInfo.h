//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSString;

@interface SCDiscoverFeedStorySnapLoggingInfo : NSObject <NSCopying, NSCoding>
{
    NSString *_snapId;
    long long _mediaType;
    double _mediaDurationSecs;
}

@property(readonly, nonatomic) double mediaDurationSecs; // @synthesize mediaDurationSecs=_mediaDurationSecs;
@property(readonly, nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
@property(readonly, copy, nonatomic) NSString *snapId; // @synthesize snapId=_snapId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSnapId:(id)arg1 mediaType:(long long)arg2 mediaDurationSecs:(double)arg3;
- (id)initWithCoder:(id)arg1;

@end

