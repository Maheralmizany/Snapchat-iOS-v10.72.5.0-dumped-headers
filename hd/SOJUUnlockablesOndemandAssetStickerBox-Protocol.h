//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"
#import "SOJUUnlockablesOndemandAssetImageBox.h"

@class NSNumber, NSString;

@protocol SOJUUnlockablesOndemandAssetStickerBox <NSObject, NSCoding, NSCopying, SOJUUnlockablesOndemandAssetImageBox>
@property(readonly, copy, nonatomic) NSString *resourceUrl;
@property(readonly, copy, nonatomic) NSString *templateId;
@property(readonly, copy, nonatomic) NSString *type;
@property(readonly, copy, nonatomic) NSNumber *rotation;
@property(readonly, copy, nonatomic) NSNumber *height;
@property(readonly, copy, nonatomic) NSNumber *width;
@property(readonly, copy, nonatomic) NSNumber *posY;
@property(readonly, copy, nonatomic) NSNumber *posX;
@property(readonly, copy, nonatomic) NSString *imagePngBase64;
@end

