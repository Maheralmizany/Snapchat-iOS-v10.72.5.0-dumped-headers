//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIView;

@interface SCTV3ELMShrunkMeasurements : NSObject
{
    UIView *_referenceView;
    struct CGRect _frame;
    double _topOffset;
}

+ (id)shrunkMeasurementsWithAbsoluteFrame:(struct CGRect)arg1 topOffset:(double)arg2;
+ (id)shrunkMeasurementsWithReferenceView:(id)arg1 relativeFrame:(struct CGRect)arg2 topOffset:(double)arg3;
- (void).cxx_destruct;
- (id)description;
- (double)topOffset;
- (struct CGRect)absoluteRect;

@end

