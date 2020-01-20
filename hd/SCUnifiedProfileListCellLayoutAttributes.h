//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface SCUnifiedProfileListCellLayoutAttributes : NSObject <NSCopying>
{
    double _leftIconMarginX;
    double _rightIconMarginX;
    double _listCellHeight;
    double _leftIconLabelPadding;
    struct CGSize _leftIconSize;
    struct CGSize _rightIconSize;
}

@property(readonly, nonatomic) double leftIconLabelPadding; // @synthesize leftIconLabelPadding=_leftIconLabelPadding;
@property(readonly, nonatomic) double listCellHeight; // @synthesize listCellHeight=_listCellHeight;
@property(readonly, nonatomic) double rightIconMarginX; // @synthesize rightIconMarginX=_rightIconMarginX;
@property(readonly, nonatomic) struct CGSize rightIconSize; // @synthesize rightIconSize=_rightIconSize;
@property(readonly, nonatomic) double leftIconMarginX; // @synthesize leftIconMarginX=_leftIconMarginX;
@property(readonly, nonatomic) struct CGSize leftIconSize; // @synthesize leftIconSize=_leftIconSize;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLeftIconSize:(struct CGSize)arg1 leftIconMarginX:(double)arg2 rightIconSize:(struct CGSize)arg3 rightIconMarginX:(double)arg4 listCellHeight:(double)arg5 leftIconLabelPadding:(double)arg6;

@end
