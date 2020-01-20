//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class SCActionModel, SCProfileMapViewModel;

@interface SCProfileMapCellViewModel : NSObject <NSCopying>
{
    _Bool _shouldRoundBottomCorners;
    SCActionModel *_tapActionModel;
    SCProfileMapViewModel *_mapViewModel;
}

@property(readonly, copy, nonatomic) SCProfileMapViewModel *mapViewModel; // @synthesize mapViewModel=_mapViewModel;
@property(readonly, copy, nonatomic) SCActionModel *tapActionModel; // @synthesize tapActionModel=_tapActionModel;
@property(readonly, nonatomic) _Bool shouldRoundBottomCorners; // @synthesize shouldRoundBottomCorners=_shouldRoundBottomCorners;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithShouldRoundBottomCorners:(_Bool)arg1 tapActionModel:(id)arg2 mapViewModel:(id)arg3;

@end

