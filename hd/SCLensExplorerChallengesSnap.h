//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSObject<NSCopying><NSCoding>, SCNetworkImage;

@interface SCLensExplorerChallengesSnap : NSObject <NSCopying, NSCoding>
{
    _Bool _isFullyViewed;
    _Bool _isSubscribed;
    NSObject<NSCopying><NSCoding> *_discoverFeedStory;
    unsigned long long _storyDedupeFp;
    SCNetworkImage *_imageThumbnail;
}

@property(readonly, copy, nonatomic) SCNetworkImage *imageThumbnail; // @synthesize imageThumbnail=_imageThumbnail;
@property(readonly, nonatomic) _Bool isSubscribed; // @synthesize isSubscribed=_isSubscribed;
@property(readonly, nonatomic) _Bool isFullyViewed; // @synthesize isFullyViewed=_isFullyViewed;
@property(readonly, nonatomic) unsigned long long storyDedupeFp; // @synthesize storyDedupeFp=_storyDedupeFp;
@property(readonly, copy, nonatomic) NSObject<NSCopying><NSCoding> *discoverFeedStory; // @synthesize discoverFeedStory=_discoverFeedStory;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDiscoverFeedStory:(id)arg1 storyDedupeFp:(unsigned long long)arg2 isFullyViewed:(_Bool)arg3 isSubscribed:(_Bool)arg4 imageThumbnail:(id)arg5;
- (id)initWithCoder:(id)arg1;

@end

