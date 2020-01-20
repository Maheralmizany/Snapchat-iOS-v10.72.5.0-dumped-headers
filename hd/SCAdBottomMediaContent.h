//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSData, NSDictionary;

@interface SCAdBottomMediaContent : NSObject <NSCopying>
{
    unsigned long long _subtype;
    NSData *_appInstall_appInstallIconData;
    NSData *_deeplink_deeplinkIconData;
    NSDictionary *_collection_collectionIconsData;
    NSData *_longFormVideo_firstFrameImage;
}

+ (id)longFormVideoWithFirstFrameImage:(id)arg1;
+ (id)deeplinkWithDeeplinkIconData:(id)arg1;
+ (id)collectionWithCollectionIconsData:(id)arg1;
+ (id)appInstallWithAppInstallIconData:(id)arg1;
- (void).cxx_destruct;
- (void)matchAppInstall:(CDUnknownBlockType)arg1 deeplink:(CDUnknownBlockType)arg2 collection:(CDUnknownBlockType)arg3 longFormVideo:(CDUnknownBlockType)arg4;
- (_Bool)isEqual:(id)arg1;
- (id)internalInit;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
