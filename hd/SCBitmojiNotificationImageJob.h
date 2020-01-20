//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCAppNotification, SCAvatarImageRemoteLoader;

@interface SCBitmojiNotificationImageJob : NSObject
{
    SCAppNotification *_notification;
    SCAvatarImageRemoteLoader *_imageLoader;
}

- (void).cxx_destruct;
- (id)_snapchatterForUsername:(id)arg1;
- (void)_composeViewWithGroupBitmojiNotificationViewModels:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_loadNetworkImage:(id)arg1 fetchCompletion:(CDUnknownBlockType)arg2;
- (void)_fetchBitmojiForBitmojiAvatarViewModel:(id)arg1 fetchCompletion:(CDUnknownBlockType)arg2;
- (void)_handleBitmojiAvatarViewModels:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_fetchBitmojiImagesForAvatarViewModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchBitmojiImageWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithNotification:(id)arg1 imageLoader:(id)arg2;

@end

