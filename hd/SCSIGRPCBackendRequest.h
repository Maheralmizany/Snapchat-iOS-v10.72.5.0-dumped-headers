//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCSIBackendRequest.h"

@class GRPCProtoCall, NSSet, NSString, SCPNSceneIntRequest;

@interface SCSIGRPCBackendRequest : NSObject <SCSIBackendRequest>
{
    _Bool _isRequestCanceled;
    NSString *_requestKey;
    NSSet *_requestContexts;
    SCPNSceneIntRequest *_protoRequest;
    GRPCProtoCall *_protoCall;
}

@property _Bool isRequestCanceled; // @synthesize isRequestCanceled=_isRequestCanceled;
@property(retain, nonatomic) GRPCProtoCall *protoCall; // @synthesize protoCall=_protoCall;
@property(readonly, nonatomic) SCPNSceneIntRequest *protoRequest; // @synthesize protoRequest=_protoRequest;
@property(readonly, nonatomic) NSSet *requestContexts; // @synthesize requestContexts=_requestContexts;
@property(readonly, nonatomic) NSString *requestKey; // @synthesize requestKey=_requestKey;
- (void).cxx_destruct;
- (_Bool)isCancelled;
- (void)cancel;
- (id)initWithProtoRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
