//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCUserVerificationStateTransition.h"

@class NSString;

@interface SCUserVerificationDefaultStateTransition : NSObject <SCUserVerificationStateTransition>
{
    _Bool _needsCaptcha;
}

@property(nonatomic) _Bool needsCaptcha; // @synthesize needsCaptcha=_needsCaptcha;
- (id)stateConfigForState:(id)arg1 context:(id)arg2;
- (id)nextStateConfigFromState:(id)arg1 action:(unsigned long long)arg2 context:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
