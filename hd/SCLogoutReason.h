//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface SCLogoutReason : NSObject <NSCopying>
{
    unsigned long long _subtype;
    NSString *_authenticationError_requestPath;
}

+ (id)userInitiated;
+ (id)termsOfUse;
+ (id)noUsername;
+ (id)authenticationErrorWithRequestPath:(id)arg1;
- (void).cxx_destruct;
- (void)matchUserInitiated:(CDUnknownBlockType)arg1 termsOfUse:(CDUnknownBlockType)arg2 authenticationError:(CDUnknownBlockType)arg3 noUsername:(CDUnknownBlockType)arg4;
- (_Bool)isEqual:(id)arg1;
- (id)internalInit;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
