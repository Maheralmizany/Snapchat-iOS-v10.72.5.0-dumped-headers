//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class SCStoriesMediaInfo;

@interface SCStoriesMediaAddedRequest : NSObject <NSCopying>
{
    _Bool _shouldGenerateThumbnails;
    SCStoriesMediaInfo *_mediaInfo;
}

@property(readonly, nonatomic) _Bool shouldGenerateThumbnails; // @synthesize shouldGenerateThumbnails=_shouldGenerateThumbnails;
@property(readonly, copy, nonatomic) SCStoriesMediaInfo *mediaInfo; // @synthesize mediaInfo=_mediaInfo;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMediaInfo:(id)arg1 shouldGenerateThumbnails:(_Bool)arg2;

@end

