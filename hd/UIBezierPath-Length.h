//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIBezierPath.h"

@interface UIBezierPath (Length)
- (struct CGPoint)pointAtPercentOfLength:(double)arg1;
- (double)length;
- (struct CGPoint)pointAtPercent:(double)arg1 ofSubpath:(struct BezierSubpath)arg2;
- (void)extractSubpaths:(struct BezierSubpath *)arg1;
- (unsigned long long)countSubpaths;
- (void)enumerateSubpaths:(CDUnknownBlockType)arg1;
@end

