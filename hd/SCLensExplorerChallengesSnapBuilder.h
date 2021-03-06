//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<NSCopying><NSCoding>, SCNetworkImage;

@interface SCLensExplorerChallengesSnapBuilder : NSObject
{
    NSObject<NSCopying><NSCoding> *_discoverFeedStory;
    unsigned long long _storyDedupeFp;
    _Bool _isFullyViewed;
    _Bool _isSubscribed;
    SCNetworkImage *_imageThumbnail;
}

+ (id)lensExplorerChallengesSnapFromExistingLensExplorerChallengesSnap:(id)arg1;
+ (id)lensExplorerChallengesSnap;
- (void).cxx_destruct;
- (id)withImageThumbnail:(id)arg1;
- (id)withIsSubscribed:(_Bool)arg1;
- (id)withIsFullyViewed:(_Bool)arg1;
- (id)withStoryDedupeFp:(unsigned long long)arg1;
- (id)withDiscoverFeedStory:(id)arg1;
- (id)build;

@end

