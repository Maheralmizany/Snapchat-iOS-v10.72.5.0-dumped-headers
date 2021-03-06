//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class SCChatAddressMediaCardViewModel, SCChatPhoneMediaCardViewModel, SCChatURLMediaCardViewModel;

@interface SCChatMediaCardContentViewModel : NSObject <NSCopying>
{
    unsigned long long _subtype;
    SCChatPhoneMediaCardViewModel *_phoneNumber_phoneMediaCardViewModel;
    SCChatAddressMediaCardViewModel *_address_addressMediaCardViewModel;
    SCChatURLMediaCardViewModel *_uRL_urlMediaCardViewModel;
}

+ (id)uRLWithUrlMediaCardViewModel:(id)arg1;
+ (id)phoneNumberWithPhoneMediaCardViewModel:(id)arg1;
+ (id)addressWithAddressMediaCardViewModel:(id)arg1;
- (void).cxx_destruct;
- (void)matchPhoneNumber:(CDUnknownBlockType)arg1 address:(CDUnknownBlockType)arg2 uRL:(CDUnknownBlockType)arg3;
- (_Bool)isEqual:(id)arg1;
- (id)internalInit;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

