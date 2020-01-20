//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol SCBitmojiAvatarBuilderRouting <NSObject>
- (void)prepareBitmojiAvatarBuilderWithFlowMode:(unsigned long long)arg1 completion:(void (^)(_Bool))arg2;
- (unsigned long long)avatarBuilderTypeForEditAction:(unsigned long long)arg1;
- (void)launchSnapchatAvatarBuilderWithFlowMode:(unsigned long long)arg1 page:(unsigned long long)arg2 entryPoint:(NSString *)arg3 bitmojiAvatarBuilderRouterDelegate:(id <SCBitmojiAvatarBuilderRouterDelegate>)arg4 completion:(void (^)(_Bool))arg5;
- (void)launchAvatarBuilderWithFlowMode:(unsigned long long)arg1 page:(unsigned long long)arg2 bitmojiAvatarBuilderRouterDelegate:(id <SCBitmojiAvatarBuilderRouterDelegate>)arg3 completion:(void (^)(_Bool))arg4;
@end

