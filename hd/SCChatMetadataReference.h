//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSString;

@interface SCChatMetadataReference : NSObject <NSCopying>
{
    unsigned long long _subtype;
    NSString *_snapchatter_snapchatterId;
    NSString *_userStory_storyId;
    NSString *_userStory_snapchatterId;
    NSString *_mobStory_storyId;
    NSString *_mobStory_publisherId;
    NSString *_mapStory_storyId;
    NSString *_mapStory_poiId;
    NSString *_searchStory_snapId;
    NSArray *_mediaCard_urls;
    NSArray *_mediaCard_addresses;
}

+ (id)userStoryWithStoryId:(id)arg1 snapchatterId:(id)arg2;
+ (id)snapchatterWithSnapchatterId:(id)arg1;
+ (id)searchStoryWithSnapId:(id)arg1;
+ (id)mobStoryWithStoryId:(id)arg1 publisherId:(id)arg2;
+ (id)mediaCardWithUrls:(id)arg1 addresses:(id)arg2;
+ (id)mapStoryWithStoryId:(id)arg1 poiId:(id)arg2;
- (void).cxx_destruct;
- (void)matchSnapchatter:(CDUnknownBlockType)arg1 userStory:(CDUnknownBlockType)arg2 mobStory:(CDUnknownBlockType)arg3 mapStory:(CDUnknownBlockType)arg4 searchStory:(CDUnknownBlockType)arg5 mediaCard:(CDUnknownBlockType)arg6;
- (_Bool)isEqual:(id)arg1;
- (id)internalInit;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

