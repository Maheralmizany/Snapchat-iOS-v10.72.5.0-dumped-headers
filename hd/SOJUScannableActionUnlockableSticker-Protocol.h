//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"
#import "SOJUScannableAction.h"

@class NSNumber, NSString;

@protocol SOJUScannableActionUnlockableSticker <NSObject, NSCoding, NSCopying, SOJUScannableAction>
@property(readonly, copy, nonatomic) NSString *unlockableId;
@property(readonly, copy, nonatomic) NSNumber *unlocked;
@property(readonly, copy, nonatomic) NSNumber *unlockDurationInMins;
@property(readonly, copy, nonatomic) NSString *stickerPackId;
@property(readonly, copy, nonatomic) NSString *stickerTitle;
@property(readonly, copy, nonatomic) NSString *thumbnailImageLink;
@end

