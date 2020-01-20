//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCLaunchEnvironmentBase.h"

@class NSString;

@interface SCKarmaLensEnvironment : SCLaunchEnvironmentBase
{
}

+ (id)environmentScheme;
+ (id)environmentWithLensId:(id)arg1 lensLink:(id)arg2 lensSignature:(id)arg3 lensIconLink:(id)arg4 lensDescriptor:(id)arg5;
+ (id)environmentWithLensId:(id)arg1 lensLink:(id)arg2 lensSignature:(id)arg3 lensIconLink:(id)arg4;
- (id)initWithEnvironment:(id)arg1 arguments:(id)arg2;
@property(readonly, nonatomic) NSString *lensDescriptor;
@property(readonly, nonatomic) NSString *lensIconLink;
@property(readonly, nonatomic) NSString *lensSignature;
@property(readonly, nonatomic) NSString *lensLink;
@property(readonly, nonatomic) NSString *lensId;
- (id)initWithWithLensId:(id)arg1 lensLink:(id)arg2 lensSignature:(id)arg3 lensIconLink:(id)arg4 lensDescriptor:(id)arg5;

@end

