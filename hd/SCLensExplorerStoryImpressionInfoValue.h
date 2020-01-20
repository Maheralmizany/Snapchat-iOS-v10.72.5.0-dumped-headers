//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSDate, NSDictionary, NSString;

@interface SCLensExplorerStoryImpressionInfoValue : NSObject <NSCopying, NSCoding>
{
    _Bool _isFullyViewed;
    unsigned int _itemPosition;
    NSDate *_viewSessionStartTime;
    double _mediaViewTime;
    NSString *_subitemId;
    NSString *_pageId;
    unsigned long long _numberOfSnapsViewed;
    long long _maxSubitemViewIndex;
    NSString *_maxSubitemIdView;
    NSDictionary *_fieldsOverrideDict;
    NSString *_section;
    NSString *_triggeringItemId;
    long long _triggeringItemPlaylistOffset;
}

@property(readonly, nonatomic) long long triggeringItemPlaylistOffset; // @synthesize triggeringItemPlaylistOffset=_triggeringItemPlaylistOffset;
@property(readonly, copy, nonatomic) NSString *triggeringItemId; // @synthesize triggeringItemId=_triggeringItemId;
@property(readonly, nonatomic) _Bool isFullyViewed; // @synthesize isFullyViewed=_isFullyViewed;
@property(readonly, copy, nonatomic) NSString *section; // @synthesize section=_section;
@property(readonly, copy, nonatomic) NSDictionary *fieldsOverrideDict; // @synthesize fieldsOverrideDict=_fieldsOverrideDict;
@property(readonly, copy, nonatomic) NSString *maxSubitemIdView; // @synthesize maxSubitemIdView=_maxSubitemIdView;
@property(readonly, nonatomic) long long maxSubitemViewIndex; // @synthesize maxSubitemViewIndex=_maxSubitemViewIndex;
@property(readonly, nonatomic) unsigned long long numberOfSnapsViewed; // @synthesize numberOfSnapsViewed=_numberOfSnapsViewed;
@property(readonly, copy, nonatomic) NSString *pageId; // @synthesize pageId=_pageId;
@property(readonly, copy, nonatomic) NSString *subitemId; // @synthesize subitemId=_subitemId;
@property(readonly, nonatomic) double mediaViewTime; // @synthesize mediaViewTime=_mediaViewTime;
@property(readonly, copy, nonatomic) NSDate *viewSessionStartTime; // @synthesize viewSessionStartTime=_viewSessionStartTime;
@property(readonly, nonatomic) unsigned int itemPosition; // @synthesize itemPosition=_itemPosition;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithItemPosition:(unsigned int)arg1 viewSessionStartTime:(id)arg2 mediaViewTime:(double)arg3 subitemId:(id)arg4 pageId:(id)arg5 numberOfSnapsViewed:(unsigned long long)arg6 maxSubitemViewIndex:(long long)arg7 maxSubitemIdView:(id)arg8 fieldsOverrideDict:(id)arg9 section:(id)arg10 isFullyViewed:(_Bool)arg11 triggeringItemId:(id)arg12 triggeringItemPlaylistOffset:(long long)arg13;
- (id)initWithCoder:(id)arg1;

@end

