//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCLaunchEnvironmentBase.h"

@interface SCMultiSnapEnvironment : SCLaunchEnvironmentBase
{
}

+ (id)environmentScheme;
+ (id)environmentWithMultiSnapSegmentTime:(double)arg1;
- (id)initWithEnvironment:(id)arg1 arguments:(id)arg2;
@property(readonly, nonatomic) double multiSnapSegmentTime;
- (id)initWithMultiSnapSegmentTime:(double)arg1;

@end
