//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCLegacyItemDownloader.h"

@class SCLazy, SCSessionRequestManager, SCUserSession;

@interface SCSearchStreamingCompositeDownloader : SCLegacyItemDownloader
{
    SCUserSession *_userSession;
    SCSessionRequestManager *_requestManager;
    id <SCStreamingURLProviding> _streamingURLProvider;
    SCLazy *_contentDelivery;
}

- (void).cxx_destruct;
- (id)_proxiedVideoStreamingURLForMediaURL:(id)arg1;
- (id)_streamingMediaDataFromStreamingZipData:(id)arg1 overlayData:(id)arg2 forStreamingMediaInfo:(id)arg3;
- (long long)mediaContextTypeForItem:(id)arg1;
- (id)downloadPerformer;
- (id)cache;
- (id)contentDelivery;
- (id)requestManager;
- (id)userSession;
- (id)requestForItem:(id)arg1;
- (id)requestContexts:(id)arg1;
- (id)cacheKeyForItem:(id)arg1;
- (id)resultFromData:(id)arg1 withItem:(id)arg2;
- (id)decryptData:(id)arg1 withItem:(id)arg2;
- (id)encryptionIVForItem:(id)arg1;
- (id)encryptionKeyForItem:(id)arg1;
- (_Bool)isItemValid:(id)arg1;
- (id)initWithUserSession:(id)arg1 contentDelivery:(id)arg2;

@end

