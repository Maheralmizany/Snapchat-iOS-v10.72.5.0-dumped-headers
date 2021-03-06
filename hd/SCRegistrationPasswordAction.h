//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface SCRegistrationPasswordAction : NSObject <NSCopying>
{
    unsigned long long _subtype;
    NSString *_passwordDidChange_password;
}

+ (id)togglePasswordVisibility;
+ (id)submit;
+ (id)passwordDidChangeWithPassword:(id)arg1;
+ (id)exit;
+ (id)errorAlertDidDismiss;
- (void).cxx_destruct;
- (void)matchSubmit:(CDUnknownBlockType)arg1 exit:(CDUnknownBlockType)arg2 togglePasswordVisibility:(CDUnknownBlockType)arg3 passwordDidChange:(CDUnknownBlockType)arg4 errorAlertDidDismiss:(CDUnknownBlockType)arg5;
- (_Bool)isEqual:(id)arg1;
- (id)internalInit;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

