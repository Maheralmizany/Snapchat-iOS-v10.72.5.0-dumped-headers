//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSString, UIImage;

@protocol SCOneTapLoginRepository
@property(nonatomic) long long oneTapLoginTokenExpiry;
@property(retain, nonatomic) NSString *oneTapLoginToken;
@property(retain, nonatomic) NSString *oneTapLoginUsername;
@property(retain, nonatomic) NSString *oneTapLoginBitmojiSelfieId;
@property(retain, nonatomic) NSString *oneTapLoginBitmojiAvatarId;
@property(retain, nonatomic) NSString *oneTapLoginUserId;
@property(retain, nonatomic) UIImage *oneTapLoginBitmojiAvatar;
- (void)clearToken;
- (void)removeAccount;
@end

