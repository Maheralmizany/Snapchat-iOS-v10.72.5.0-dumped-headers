//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCDocObject.h"

#import "NSCopying.h"

@class NSString, SCDiscoverFeedStorySummary;

@interface SCDiscoverFeedStorySummaryInfo : SCDocObject <NSCopying>
{
    _Bool _isSubscribed;
    _Bool _isOptedInNotifications;
    _Bool _isSensitive;
    _Bool _isFullyViewed;
    NSString *_compositeStoryId;
    SCDiscoverFeedStorySummary *_storySummary;
}

+ (struct SCDocObjectClassFunctionPointer)objectClassFunctionPointer;
+ (id)immutableObjectParse:(const void *)arg1 bufferSize:(unsigned long long)arg2;
+ (const char *)table;
@property(readonly, nonatomic) _Bool isFullyViewed; // @synthesize isFullyViewed=_isFullyViewed;
@property(readonly, nonatomic) _Bool isSensitive; // @synthesize isSensitive=_isSensitive;
@property(readonly, nonatomic) _Bool isOptedInNotifications; // @synthesize isOptedInNotifications=_isOptedInNotifications;
@property(readonly, nonatomic) _Bool isSubscribed; // @synthesize isSubscribed=_isSubscribed;
@property(readonly, copy, nonatomic) SCDiscoverFeedStorySummary *storySummary; // @synthesize storySummary=_storySummary;
@property(readonly, copy, nonatomic) NSString *compositeStoryId; // @synthesize compositeStoryId=_compositeStoryId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCompositeStoryId:(id)arg1 storySummary:(id)arg2 isSubscribed:(_Bool)arg3 isOptedInNotifications:(_Bool)arg4 isSensitive:(_Bool)arg5 isFullyViewed:(_Bool)arg6;
- (id)xLogObjectInfo;

@end

