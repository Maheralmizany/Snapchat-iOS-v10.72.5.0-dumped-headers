//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCOperaPlaylistItem;

@protocol SCOperaPlaylistItemMediaPreparationController <NSObject>
- (void)removeMediaForItem:(SCOperaPlaylistItem *)arg1;
- (void)prepareMediaForItem:(SCOperaPlaylistItem *)arg1 waitForDownloading:(_Bool)arg2 startWaitingForDownloadCallback:(void (^)(void))arg3 completion:(void (^)(_Bool, _Bool, NSError *, _Bool, unsigned long long))arg4;
@end
