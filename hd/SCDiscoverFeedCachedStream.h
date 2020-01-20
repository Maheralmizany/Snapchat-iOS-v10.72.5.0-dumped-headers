//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSArray, NSDictionary;

@interface SCDiscoverFeedCachedStream : NSObject <NSCopying, NSCoding>
{
    NSArray *_feedTypes;
    NSDictionary *_storyDedupeFpsByFeedType;
    NSDictionary *_sectionMetadataByFeedType;
    NSDictionary *_sectionDataModelsByFeedType;
    NSDictionary *_storiesByStoryDedupeFp;
}

@property(readonly, copy, nonatomic) NSDictionary *storiesByStoryDedupeFp; // @synthesize storiesByStoryDedupeFp=_storiesByStoryDedupeFp;
@property(readonly, copy, nonatomic) NSDictionary *sectionDataModelsByFeedType; // @synthesize sectionDataModelsByFeedType=_sectionDataModelsByFeedType;
@property(readonly, copy, nonatomic) NSDictionary *sectionMetadataByFeedType; // @synthesize sectionMetadataByFeedType=_sectionMetadataByFeedType;
@property(readonly, copy, nonatomic) NSDictionary *storyDedupeFpsByFeedType; // @synthesize storyDedupeFpsByFeedType=_storyDedupeFpsByFeedType;
@property(readonly, copy, nonatomic) NSArray *feedTypes; // @synthesize feedTypes=_feedTypes;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFeedTypes:(id)arg1 storyDedupeFpsByFeedType:(id)arg2 sectionMetadataByFeedType:(id)arg3 sectionDataModelsByFeedType:(id)arg4 storiesByStoryDedupeFp:(id)arg5;
- (id)initWithCoder:(id)arg1;

@end

