//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface SCLogInCredentialsEntryAction : NSObject <NSCopying>
{
    unsigned long long _subtype;
    NSString *_updatedUsernameOrEmail_usernameOrEmail;
    NSString *_updatedPassword_password;
}

+ (id)updatedUsernameOrEmailWithUsernameOrEmail:(id)arg1;
+ (id)updatedPasswordWithPassword:(id)arg1;
+ (id)togglePasswordVisiblity;
+ (id)recoverPassword;
+ (id)reactivationDeclined;
+ (id)reactivate;
+ (id)logIn;
+ (id)exited;
- (void).cxx_destruct;
- (void)matchExited:(CDUnknownBlockType)arg1 updatedUsernameOrEmail:(CDUnknownBlockType)arg2 updatedPassword:(CDUnknownBlockType)arg3 recoverPassword:(CDUnknownBlockType)arg4 togglePasswordVisiblity:(CDUnknownBlockType)arg5 logIn:(CDUnknownBlockType)arg6 reactivationDeclined:(CDUnknownBlockType)arg7 reactivate:(CDUnknownBlockType)arg8;
- (_Bool)isEqual:(id)arg1;
- (id)internalInit;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
