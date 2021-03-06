//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SCTempSnapchatterBuilder : NSObject
{
    NSString *_username;
    NSString *_displayName;
    NSString *_bitmojiAvatarId;
    NSString *_bitmojiSelfieId;
}

+ (id)tempSnapchatterFromExistingTempSnapchatter:(id)arg1;
+ (id)tempSnapchatter;
- (void).cxx_destruct;
- (id)withBitmojiSelfieId:(id)arg1;
- (id)withBitmojiAvatarId:(id)arg1;
- (id)withDisplayName:(id)arg1;
- (id)withUsername:(id)arg1;
- (id)build;

@end

