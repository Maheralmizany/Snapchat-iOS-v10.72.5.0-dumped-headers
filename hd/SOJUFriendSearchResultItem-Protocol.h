//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"

@class NSArray, NSDictionary, NSNumber, NSString;

@protocol SOJUFriendSearchResultItem <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSString *displayUsername;
@property(readonly, copy, nonatomic) NSString *latestStoryMediaKey;
@property(readonly, copy, nonatomic) NSString *latestStoryThumbnailIv;
@property(readonly, copy, nonatomic) NSString *latestStoryThumbnailUrl;
@property(readonly, copy, nonatomic) NSArray *keywords;
@property(readonly, copy, nonatomic) NSNumber *position;
@property(readonly, copy, nonatomic) NSDictionary *friendmojiDictionary;
@property(readonly, copy, nonatomic) NSArray *friendmojiCategories;
@property(readonly, copy, nonatomic) NSString *storyPrivacy;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly, copy, nonatomic) NSString *username;
@property(readonly, copy, nonatomic) NSString *userId;
@end

