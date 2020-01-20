//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCTraceEnabled.h"

@class NSString;

@interface SCAddFriendsProgressAvatarDownloader : NSObject <SCTraceEnabled>
{
    id <SCBitmojiSelfieFetcher> _bitmojiFetcher;
}

- (void).cxx_destruct;
- (id)_avatarViewModelWithImage:(id)arg1 forSnapchatter:(id)arg2;
- (id)_bitmojiFetchSelfieRequestForSnapchatter:(id)arg1 dratiniId:(id)arg2;
- (id)_bitmojiFetchSelfieRequestForSnapchatter:(id)arg1;
- (id)_smilingBitmojiFetchSelfieRequestForSnapchatter:(id)arg1;
- (void)_fetchBitmojiForSnapchatter:(id)arg1 request:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_fallbackImage:(id)arg1;
- (void)downloadProgressAvatarsForSnapchatters:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)downloadProgressAvatarForSnapchatter:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)initWithBitmojiSelfieFetcher:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
