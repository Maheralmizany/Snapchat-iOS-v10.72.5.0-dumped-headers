//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCache, SCLazy;

@interface SCChatStickerPackageFactory : NSObject
{
    SCLazy *_packProvider;
    NSCache *_stickerPackCache;
}

- (void).cxx_destruct;
- (id)generateStickerPackage:(id)arg1 friendAvatarId:(id)arg2;
- (void)reset;
- (id)initWithBitmojiPackProvider:(id)arg1;

@end

