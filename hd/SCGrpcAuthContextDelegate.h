//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCNGrpcAuthContextDelegate.h"

@class NSObject<OS_dispatch_queue>, SCLazy;

@interface SCGrpcAuthContextDelegate : NSObject <SCNGrpcAuthContextDelegate>
{
    SCLazy *_snapTokenProvider;
    NSObject<OS_dispatch_queue> *callbackQueue;
    _Bool _skipAttestation;
}

- (void).cxx_destruct;
- (void)getAuthContext:(id)arg1 callback:(id)arg2;
- (id)initWithSnapTokenProvider:(id)arg1 skipDispatch:(_Bool)arg2 skipAttestation:(_Bool)arg3;

@end
