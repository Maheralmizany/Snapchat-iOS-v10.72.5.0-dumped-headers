//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCLensUser.h"

@class NSDate, NSString, SCScopedAccess;

@interface SCSnapchatLensUser : NSObject <SCLensUser>
{
    SCScopedAccess *_scopedBitmojiAvatarProvider;
    SCScopedAccess *_scopedBitmojiSelfieProvider;
}

+ (id)defaultSnapchatLensUser;
- (void).cxx_destruct;
- (_Bool)isCheetahNewUser;
- (id)usernameDisplayOnly;
- (id)userId;
- (_Bool)isNewUser;
- (_Bool)isLoggedIn;
- (id)bitmojiSelfieId;
- (id)bitmojiAvatarId;
- (id)lensStudioId;
@property(nonatomic) unsigned long long lensesActivationTooltipShownCount;
@property(retain, nonatomic) NSDate *lastSpectaclesLensesActivationDate;
- (_Bool)isActiveLensesUser;
@property(retain, nonatomic) NSDate *lastLensesActivationDate;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

