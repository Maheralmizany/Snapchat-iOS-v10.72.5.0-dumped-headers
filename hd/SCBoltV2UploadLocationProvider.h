//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCRefreshAheadItemProviding.h"

@class NSString, SCGrpcService, SCLazy;

@interface SCBoltV2UploadLocationProvider : NSObject <SCRefreshAheadItemProviding>
{
    SCLazy *_tokenProvider;
    SCGrpcService *_grpcService;
}

- (void).cxx_destruct;
- (void)itemsWithCallbackPerformer:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)initWithTokenProvider:(id)arg1 grpcService:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

