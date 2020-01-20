//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

@protocol SCLegacyUserPropertiesProvider <NSObject>
- (long long)storyPrivacy;
- (NSString *)registrationCountryCode;
- (_Bool)isAffectedByGDPR;
- (NSString *)lensStudioId;
- (NSString *)blizzardToken;
- (NSString *)voipDeviceToken;
- (NSString *)deviceToken;
- (NSString *)bitmojiSelfieId;
- (NSString *)bitmojiAvatarId;
- (unsigned long long)score;
- (unsigned long long)storyCount;
- (unsigned long long)receivedCount;
- (unsigned long long)sentCount;
- (_Bool)isPopularUser;
- (NSDate *)birthday;
- (NSString *)displayName;
@end

