//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSObject<NSCopying>, NSString;

@interface SCUnifiedProfileStoriesActionDataModel : NSObject <NSCopying>
{
    long long _storyType;
    NSString *_storyIdentifier;
    NSString *_individualStoryId;
    NSObject<NSCopying> *_dataModel;
}

@property(readonly, copy, nonatomic) NSObject<NSCopying> *dataModel; // @synthesize dataModel=_dataModel;
@property(readonly, copy, nonatomic) NSString *individualStoryId; // @synthesize individualStoryId=_individualStoryId;
@property(readonly, copy, nonatomic) NSString *storyIdentifier; // @synthesize storyIdentifier=_storyIdentifier;
@property(readonly, nonatomic) long long storyType; // @synthesize storyType=_storyType;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStoryType:(long long)arg1 storyIdentifier:(id)arg2 individualStoryId:(id)arg3 dataModel:(id)arg4;

@end

