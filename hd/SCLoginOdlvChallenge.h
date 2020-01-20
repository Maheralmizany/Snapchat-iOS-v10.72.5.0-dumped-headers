//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface SCLoginOdlvChallenge : NSObject <NSCopying>
{
    NSString *_obfuscatedPhone;
    NSString *_obfuscatedEmail;
    NSString *_usernameOrEmail;
    NSString *_odlvPreAuthToken;
}

@property(readonly, copy, nonatomic) NSString *odlvPreAuthToken; // @synthesize odlvPreAuthToken=_odlvPreAuthToken;
@property(readonly, copy, nonatomic) NSString *usernameOrEmail; // @synthesize usernameOrEmail=_usernameOrEmail;
@property(readonly, copy, nonatomic) NSString *obfuscatedEmail; // @synthesize obfuscatedEmail=_obfuscatedEmail;
@property(readonly, copy, nonatomic) NSString *obfuscatedPhone; // @synthesize obfuscatedPhone=_obfuscatedPhone;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithObfuscatedPhone:(id)arg1 obfuscatedEmail:(id)arg2 usernameOrEmail:(id)arg3 odlvPreAuthToken:(id)arg4;

@end

