//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCCommerceNetworkRequestHandling.h"

@interface SCCommerceAuthenticatingRequestHandler : NSObject <SCCommerceNetworkRequestHandling>
{
    id <SCRequestManager> _requestManager;
    id <SCSecurityTokenUpdating> _tokenUpdater;
}

@property(retain, nonatomic) id <SCSecurityTokenUpdating> tokenUpdater; // @synthesize tokenUpdater=_tokenUpdater;
@property(retain, nonatomic) id <SCRequestManager> requestManager; // @synthesize requestManager=_requestManager;
- (void).cxx_destruct;
- (void)executeCommerceRequest:(id)arg1 completionQueue:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (id)initWithTokenUpdater:(id)arg1 requestManager:(id)arg2;

@end
