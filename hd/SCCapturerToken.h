//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SCCaptureStateMachineContext;

@interface SCCapturerToken : NSObject
{
    NSString *_identifier;
    SCCaptureStateMachineContext *_stateMachineContext;
    _Bool _isValid;
}

@property(readonly, nonatomic) _Bool isValid; // @synthesize isValid=_isValid;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)stopRunningWithContext:(id)arg1 delay:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)stopRunningWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 stateMachineContext:(id)arg2;

@end

