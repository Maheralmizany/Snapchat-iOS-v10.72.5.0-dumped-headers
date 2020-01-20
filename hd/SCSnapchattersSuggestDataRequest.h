//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSNumber, SCSnapchatter;

@interface SCSnapchattersSuggestDataRequest : NSObject <NSCopying>
{
    unsigned long long _subtype;
    _Bool _fetch_isPrefetchForNotification;
    NSNumber *_fetch_syncVersion;
    NSNumber *_fetch_expirationThresholdHours;
    SCSnapchatter *_hide_suggestedSnapchatter;
    long long _hide_placement;
    long long _hideAll_placement;
    NSArray *_view_suggestedSnapchatters;
}

+ (id)viewWithSuggestedSnapchatters:(id)arg1;
+ (id)hideWithSuggestedSnapchatter:(id)arg1 placement:(long long)arg2;
+ (id)hideAllWithPlacement:(long long)arg1;
+ (id)fetchWithIsPrefetchForNotification:(_Bool)arg1 syncVersion:(id)arg2 expirationThresholdHours:(id)arg3;
+ (id)initWithSCCHideSuggestedFriendRequest:(id)arg1;
- (void).cxx_destruct;
- (void)matchFetch:(CDUnknownBlockType)arg1 hide:(CDUnknownBlockType)arg2 hideAll:(CDUnknownBlockType)arg3 view:(CDUnknownBlockType)arg4;
- (_Bool)isEqual:(id)arg1;
- (id)internalInit;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)asView;
- (id)asHideAll;
- (id)asHide;
- (id)asFetch;

@end
