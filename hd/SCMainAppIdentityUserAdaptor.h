//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCIdentityUserAdaptor.h"

@class NSString;

@interface SCMainAppIdentityUserAdaptor : NSObject <SCIdentityUserAdaptor>
{
}

- (_Bool)hasVerifiedEmail;
- (_Bool)hasVerifiedNumber;
- (_Bool)needsContactSync;
@property(retain, nonatomic) NSString *pendingEmail;
@property(nonatomic) _Bool needsCaptchaVerification;
@property(readonly, nonatomic) NSString *phoneNumber;
@property(readonly, nonatomic) NSString *email;
@property(nonatomic) _Bool emailUpdating;

@end

