//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface SCStoriesSnapPlaybackViewStatus : NSObject <NSCopying>
{
    _Bool _isViewed;
    _Bool _isScreenshotted;
}

@property(readonly, nonatomic) _Bool isScreenshotted; // @synthesize isScreenshotted=_isScreenshotted;
@property(readonly, nonatomic) _Bool isViewed; // @synthesize isViewed=_isViewed;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIsViewed:(_Bool)arg1 isScreenshotted:(_Bool)arg2;

@end

