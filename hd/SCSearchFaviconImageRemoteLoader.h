//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCLegacyItemRemoteDownloading.h"

@class NSString, SCUserSession;

@interface SCSearchFaviconImageRemoteLoader : NSObject <SCLegacyItemRemoteDownloading>
{
    SCUserSession *_userSession;
}

- (void).cxx_destruct;
- (void)downloadItem:(id)arg1 callbackQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3 retryCount:(unsigned long long)arg4;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
