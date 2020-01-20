//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface SCRegistrationState : NSObject <NSCopying>
{
    unsigned long long _subtype;
}

+ (id)usernameFromSuggestedUsername;
+ (id)usernameFromBirthday;
+ (id)suggestedUsername;
+ (id)passwordFromUsername;
+ (id)passwordFromSuggestedUsername;
+ (id)exit;
+ (id)done;
+ (id)displayName;
+ (id)birthday;
- (void)matchDisplayName:(CDUnknownBlockType)arg1 birthday:(CDUnknownBlockType)arg2 suggestedUsername:(CDUnknownBlockType)arg3 usernameFromBirthday:(CDUnknownBlockType)arg4 usernameFromSuggestedUsername:(CDUnknownBlockType)arg5 passwordFromUsername:(CDUnknownBlockType)arg6 passwordFromSuggestedUsername:(CDUnknownBlockType)arg7 exit:(CDUnknownBlockType)arg8 done:(CDUnknownBlockType)arg9;
- (_Bool)isEqual:(id)arg1;
- (id)internalInit;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

