//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GRPCCallOptions, GRPCUnaryProtoCall, SCPNSceneIntRequest;

@protocol SCPNSceneIntService2 <NSObject>
- (GRPCUnaryProtoCall *)sceneIntStreamWithMessage:(SCPNSceneIntRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
- (GRPCUnaryProtoCall *)sceneIntWithMessage:(SCPNSceneIntRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
@end

