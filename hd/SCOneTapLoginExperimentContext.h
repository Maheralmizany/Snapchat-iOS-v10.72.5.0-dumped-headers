//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCOneTapLoginExperimentContext : SCExperimentContext
{
    _Bool _oneTapLoginEnabled;
    _Bool _useLogInAs;
}

@property(readonly, nonatomic) _Bool useLogInAs; // @synthesize useLogInAs=_useLogInAs;
@property(readonly, nonatomic) _Bool oneTapLoginEnabled; // @synthesize oneTapLoginEnabled=_oneTapLoginEnabled;
- (void)setupParameters;
- (id)experimentName;

@end

