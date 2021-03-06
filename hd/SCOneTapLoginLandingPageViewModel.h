//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString, UIImage;

@interface SCOneTapLoginLandingPageViewModel : NSObject <NSCopying>
{
    _Bool _isLoggingIn;
    NSString *_username;
    NSString *_loginButtonTitle;
    UIImage *_bitmojiAvatar;
    NSString *_alertMessage;
    NSString *_reactivationMessage;
    NSString *_reactivationConfirmationMessage;
}

@property(readonly, copy, nonatomic) NSString *reactivationConfirmationMessage; // @synthesize reactivationConfirmationMessage=_reactivationConfirmationMessage;
@property(readonly, copy, nonatomic) NSString *reactivationMessage; // @synthesize reactivationMessage=_reactivationMessage;
@property(readonly, copy, nonatomic) NSString *alertMessage; // @synthesize alertMessage=_alertMessage;
@property(readonly, nonatomic) _Bool isLoggingIn; // @synthesize isLoggingIn=_isLoggingIn;
@property(readonly, copy, nonatomic) UIImage *bitmojiAvatar; // @synthesize bitmojiAvatar=_bitmojiAvatar;
@property(readonly, copy, nonatomic) NSString *loginButtonTitle; // @synthesize loginButtonTitle=_loginButtonTitle;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUsername:(id)arg1 loginButtonTitle:(id)arg2 bitmojiAvatar:(id)arg3 isLoggingIn:(_Bool)arg4 alertMessage:(id)arg5 reactivationMessage:(id)arg6 reactivationConfirmationMessage:(id)arg7;

@end

