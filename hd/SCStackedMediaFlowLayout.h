//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewFlowLayout.h"

@interface SCStackedMediaFlowLayout : UICollectionViewFlowLayout
{
    _Bool _isRTL;
    double _maximumInteritemSpacing;
}

@property(nonatomic) _Bool isRTL; // @synthesize isRTL=_isRTL;
@property(nonatomic) double maximumInteritemSpacing; // @synthesize maximumInteritemSpacing=_maximumInteritemSpacing;
- (void)_updateXForAttribute:(id)arg1 updatedX:(long long)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;

@end

