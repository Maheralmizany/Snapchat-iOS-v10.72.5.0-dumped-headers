//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSObject<NSCopying>, SCActionModel;

@interface SCUnifiedProfileIdentityItemCollectionViewCellViewModel : NSObject <NSCopying>
{
    NSObject<NSCopying> *_identityCarouselItemViewModel;
    SCActionModel *_tapCarouselItemActionModel;
    SCActionModel *_longPressCarouselItemActionModel;
}

@property(readonly, copy, nonatomic) SCActionModel *longPressCarouselItemActionModel; // @synthesize longPressCarouselItemActionModel=_longPressCarouselItemActionModel;
@property(readonly, copy, nonatomic) SCActionModel *tapCarouselItemActionModel; // @synthesize tapCarouselItemActionModel=_tapCarouselItemActionModel;
@property(readonly, copy, nonatomic) NSObject<NSCopying> *identityCarouselItemViewModel; // @synthesize identityCarouselItemViewModel=_identityCarouselItemViewModel;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentityCarouselItemViewModel:(id)arg1 tapCarouselItemActionModel:(id)arg2 longPressCarouselItemActionModel:(id)arg3;

@end

