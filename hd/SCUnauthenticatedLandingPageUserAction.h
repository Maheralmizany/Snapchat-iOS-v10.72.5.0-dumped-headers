//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface SCUnauthenticatedLandingPageUserAction : NSObject <NSCopying>
{
    unsigned long long _subtype;
}

+ (id)signUpSelected;
+ (id)logInSelected;
- (void)matchLogInSelected:(CDUnknownBlockType)arg1 signUpSelected:(CDUnknownBlockType)arg2;
- (_Bool)isEqual:(id)arg1;
- (id)internalInit;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
