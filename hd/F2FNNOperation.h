//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AIFKVONSOperation.h"

@class NSError, NSObject<OS_dispatch_group>, SPApplicationStateHolder;

@interface F2FNNOperation : AIFKVONSOperation
{
    SPApplicationStateHolder *_applicationStateHolder;
    NSError *_error;
    NSObject<OS_dispatch_group> *_retryGroup;
}

@property(retain, nonatomic) NSObject<OS_dispatch_group> *retryGroup; // @synthesize retryGroup=_retryGroup;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) SPApplicationStateHolder *applicationStateHolder; // @synthesize applicationStateHolder=_applicationStateHolder;
- (void).cxx_destruct;
- (void)performOperation;
- (void)main;
- (id)init;

@end
