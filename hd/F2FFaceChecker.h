//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface F2FFaceChecker : NSObject
{
}

+ (_Bool)isFaceTooSmall:(struct CGSize)arg1 faceRect:(struct CGRect)arg2;
+ (id)checkAndCropFaces:(struct CGSize)arg1 faceRects:(id)arg2 minHWRatioNominator:(unsigned long long)arg3 minHWRatioDenominator:(unsigned long long)arg4 maxHWRatioNominator:(unsigned long long)arg5 maxHWRatioDenominator:(unsigned long long)arg6;
- (id)init;

@end

