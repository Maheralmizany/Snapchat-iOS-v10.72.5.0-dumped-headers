//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface SCTextFitFontRange : NSObject <NSCopying>
{
    double _minimumFontSize;
    double _maximumFontSize;
    double _acceptableCharaterSpacingAdjustmentForMinimumFontSize;
    struct UIEdgeInsets _edgeInsetsForConstrainedSize;
}

@property(readonly, nonatomic) double acceptableCharaterSpacingAdjustmentForMinimumFontSize; // @synthesize acceptableCharaterSpacingAdjustmentForMinimumFontSize=_acceptableCharaterSpacingAdjustmentForMinimumFontSize;
@property(readonly, nonatomic) struct UIEdgeInsets edgeInsetsForConstrainedSize; // @synthesize edgeInsetsForConstrainedSize=_edgeInsetsForConstrainedSize;
@property(readonly, nonatomic) double maximumFontSize; // @synthesize maximumFontSize=_maximumFontSize;
@property(readonly, nonatomic) double minimumFontSize; // @synthesize minimumFontSize=_minimumFontSize;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMinimumFontSize:(double)arg1 maximumFontSize:(double)arg2 edgeInsetsForConstrainedSize:(struct UIEdgeInsets)arg3 acceptableCharaterSpacingAdjustmentForMinimumFontSize:(double)arg4;

@end

