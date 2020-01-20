//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class SCMapExploreStatusCarouselItemViewModel;

@interface SCMapExploreVerticalScrollingViewCellModel : NSObject <NSCopying>
{
    _Bool _requiresUpdate;
    SCMapExploreStatusCarouselItemViewModel *_itemViewModel;
}

+ (id)viewModelWithCurrentUserId:(id)arg1 item:(id)arg2 itemStyle:(unsigned long long)arg3 mapPeopleFriendsProvider:(id)arg4;
@property(readonly, copy, nonatomic) SCMapExploreStatusCarouselItemViewModel *itemViewModel; // @synthesize itemViewModel=_itemViewModel;
@property(readonly, nonatomic) _Bool requiresUpdate; // @synthesize requiresUpdate=_requiresUpdate;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRequiresUpdate:(_Bool)arg1 itemViewModel:(id)arg2;

@end
