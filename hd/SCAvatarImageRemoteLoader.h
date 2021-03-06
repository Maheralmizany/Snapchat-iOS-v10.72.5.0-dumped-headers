//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCLegacyItemRemoteDownloading.h"

@class NSString, SCLazy;

@interface SCAvatarImageRemoteLoader : NSObject <SCLegacyItemRemoteDownloading>
{
    SCLazy *_bitmojiImageFetcher;
    SCLazy *_bitmojiSelfieFetcher;
    id <SCPerforming> _performer;
}

- (void).cxx_destruct;
- (void)_fetchBitmojiWithImageParams:(id)arg1 contexts:(id)arg2 feature:(long long)arg3 canUsePrior:(_Bool)arg4 callbackQueue:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_fetchBitmojiWithTemplateId:(id)arg1 avatarId:(id)arg2 friendAvatarId:(id)arg3 scale:(unsigned long long)arg4 imageType:(unsigned long long)arg5 contexts:(id)arg6 feature:(long long)arg7 canUsePrior:(_Bool)arg8 callbackQueue:(id)arg9 completion:(CDUnknownBlockType)arg10;
- (void)_fetchSelfieWithUserId:(id)arg1 avatarId:(id)arg2 selfieId:(id)arg3 type:(unsigned long long)arg4 contexts:(id)arg5 feature:(long long)arg6 scale:(unsigned long long)arg7 canUsePrior:(_Bool)arg8 modifier:(unsigned long long)arg9 callbackQueue:(id)arg10 completion:(CDUnknownBlockType)arg11;
- (void)downloadItem:(id)arg1 callbackQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3 retryCount:(unsigned long long)arg4;
- (id)initWithBitmojiImageFetcher:(id)arg1 bitmojiSelfieFetcher:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

