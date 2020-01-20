//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUFriendStory.h"

@class NSNumber, NSString, SOJUStory;

@interface SOJUFriendStory : NSObject <SOJUFriendStory>
{
    SOJUStory *_story;
    NSNumber *_viewed;
    NSString *_flushableStoryId;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSString *flushableStoryId; // @synthesize flushableStoryId=_flushableStoryId;
@property(readonly, copy, nonatomic) NSNumber *viewed; // @synthesize viewed=_viewed;
@property(readonly, copy, nonatomic) SOJUStory *story; // @synthesize story=_story;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)decodeWithFasterDecoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStory:(id)arg1 viewed:(id)arg2 flushableStoryId:(id)arg3;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (_Bool)viewedValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
