//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCCognacWebProxyAccessTokenProvider.h"

@class NSString, SCLazy;

@interface SCCognacWebProxySnapTokenProvider : NSObject <SCCognacWebProxyAccessTokenProvider>
{
    SCLazy *_snapTokenProvider;
}

- (void).cxx_destruct;
- (void)fetchAccessTokenForURL:(id)arg1 resultQueue:(id)arg2 resultBlock:(CDUnknownBlockType)arg3;
- (_Bool)needsAccessTokenForURL:(id)arg1;
- (id)initWithSnapTokenProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

