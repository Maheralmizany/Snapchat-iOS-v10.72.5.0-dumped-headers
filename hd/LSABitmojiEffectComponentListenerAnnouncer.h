//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "LSABitmojiEffectComponentListener.h"

@class NSString;

@interface LSABitmojiEffectComponentListenerAnnouncer : NSObject <LSABitmojiEffectComponentListener>
{
    struct mutex _mutex;
    struct shared_ptr<std::__1::vector<__weak id<LSABitmojiEffectComponentListener>, std::__1::allocator<__weak id<LSABitmojiEffectComponentListener>>>> _listeners;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)effectComponentDidRequestBitmojiInfo:(id)arg1;
- (void)effectComponentDidRequestBitmojiAvatarId:(id)arg1;
- (void)bitmojiEffectComponent:(id)arg1 didRequestMegapack:(id)arg2;
- (void)bitmojiEffectComponent:(id)arg1 didRequestBitmojiWithId:(id)arg2 avatarId:(id)arg3 friendAvatarId:(id)arg4 bitmojiType:(unsigned long long)arg5 scale:(long long)arg6;
- (void)bitmojiEffectComponent:(id)arg1 didRequestBitmojiWithId:(id)arg2 avatarId:(id)arg3 bitmojiType:(unsigned long long)arg4 scale:(long long)arg5;
- (void)bitmojiEffectComponent:(id)arg1 didRequestBitmojiWithId:(id)arg2 bitmojiType:(unsigned long long)arg3 scale:(long long)arg4;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

