//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"

@class NSString;

@protocol SOJUCommerceStorePolicy <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSString *privacyPolicyLabel;
@property(readonly, copy, nonatomic) NSString *privacyPolicyUrl;
@property(readonly, copy, nonatomic) NSString *termsOfServicePolicyLabel;
@property(readonly, copy, nonatomic) NSString *termsOfServicePolicyUrl;
@property(readonly, copy, nonatomic) NSString *returnPolicyUrlLabel;
@property(readonly, copy, nonatomic) NSString *returnPolicyUrl;
@end

