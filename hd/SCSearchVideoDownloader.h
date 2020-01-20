//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCLegacyItemDownloader.h"

@class SCLazy, SCSessionRequestManager;

@interface SCSearchVideoDownloader : SCLegacyItemDownloader
{
    SCSessionRequestManager *_requestManager;
    SCLazy *_contentDelivery;
}

- (void).cxx_destruct;
- (long long)mediaContextTypeForItem:(id)arg1;
- (id)downloadPerformer;
- (id)cache;
- (id)contentDelivery;
- (id)requestManager;
- (id)requestForItem:(id)arg1;
- (id)loadItem:(id)arg1 completion:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3 callbackQueue:(id)arg4;
- (id)requestContexts:(id)arg1;
- (id)cacheKeyForItem:(id)arg1;
- (id)resultFromData:(id)arg1 withItem:(id)arg2;
- (id)decryptData:(id)arg1 withItem:(id)arg2;
- (id)encryptionIVForItem:(id)arg1;
- (id)encryptionKeyForItem:(id)arg1;
- (_Bool)isItemValid:(id)arg1;
- (id)initWithRequestManager:(id)arg1 contentDelivery:(id)arg2;

@end

