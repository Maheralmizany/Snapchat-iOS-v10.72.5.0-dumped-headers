//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class Media, NSDate, NSString;

@protocol MediaCacheInfoDataSource <NSObject>
- (_Bool)isMediaAlreadyEncrypted:(Media *)arg1;
- (_Bool)shouldEncryptOnDiskForMedia:(Media *)arg1;
- (NSString *)encryptionIvForMedia:(Media *)arg1;
- (NSString *)encryptionKeyForMedia:(Media *)arg1;
- (NSDate *)expirationForMedia:(Media *)arg1;
@end
