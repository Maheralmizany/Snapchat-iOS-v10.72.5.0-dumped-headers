//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class SCStoriesThumbnailInfo;

@interface SCComposerAvatarStoryInfo : NSObject <NSCopying>
{
    _Bool _isStoryMuted;
    _Bool _hasUnviewedSnaps;
    SCStoriesThumbnailInfo *_thumbnail;
}

@property(readonly, nonatomic) _Bool hasUnviewedSnaps; // @synthesize hasUnviewedSnaps=_hasUnviewedSnaps;
@property(readonly, nonatomic) _Bool isStoryMuted; // @synthesize isStoryMuted=_isStoryMuted;
@property(readonly, copy, nonatomic) SCStoriesThumbnailInfo *thumbnail; // @synthesize thumbnail=_thumbnail;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithThumbnail:(id)arg1 isStoryMuted:(_Bool)arg2 hasUnviewedSnaps:(_Bool)arg3;

@end

