//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol SCStickerPackMetadataDownloadStrategy <NSObject>
- (void)downloadDataForStickerPack:(id <SCStickerPack>)arg1 completion:(void (^)(NSData *, SOJUStickerPackMetadata *, NSError *))arg2;
- (_Bool)isValidStickerPackForDownloading:(id <SCStickerPack>)arg1;
@end

